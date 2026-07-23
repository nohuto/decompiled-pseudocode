/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x1407A5590
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A56E9C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1403276D0 (RtlImageNtHeaderEx.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406C12A0 (MiCaptureRetpolineRelocationTables.c)
 *     MiFreeImageRetpolineContext @ 0x1406C1A4C (MiFreeImageRetpolineContext.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x1406C219C (MiCaptureDynamicRelocationTableRva.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1406C22D8 (MiCreateRetpolineRelocationInformation.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075D09C (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(PVOID BaseOfImage, ULONG64 Size, _QWORD *a3)
{
  __int64 v4; // rbp
  int RetpolineRelocationInformation; // ebx
  __int64 Config; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r8
  unsigned int v12[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS v14; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(v13) = 0;
  v14 = 0LL;
  v4 = (unsigned int)Size;
  memset(v12, 0, 32);
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &v14);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
    if ( Config && *(int *)Config >= 228 )
    {
      v8 = *(_QWORD *)(Config + 120);
      v9 = 0;
      if ( v8 && v8 >= (unsigned __int64)BaseOfImage && v8 < (unsigned __int64)BaseOfImage + v4 - 8 )
        v9 = v8 - (_DWORD)BaseOfImage;
      RetpolineRelocationInformation = MiCaptureDynamicRelocationTableRva(
                                         (char *)BaseOfImage,
                                         (unsigned int)v4,
                                         0LL,
                                         v14->OptionalHeader.Magic,
                                         Config,
                                         *(_DWORD *)Config,
                                         &v13);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables((char *)BaseOfImage, v4, v10, v13, v12);
        if ( RetpolineRelocationInformation >= 0 )
        {
          RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation((__int64)v12, v9, v4, a3);
          MiFreeImageRetpolineContext(v12);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)RetpolineRelocationInformation;
}
