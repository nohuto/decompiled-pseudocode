/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x1407A5390
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A55E9C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14031C980 (RtlImageNtHeaderEx.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140712C50 (MiCaptureRetpolineRelocationTables.c)
 *     MiFreeImageRetpolineContext @ 0x1407133FC (MiFreeImageRetpolineContext.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x140713B4C (MiCaptureDynamicRelocationTableRva.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140713C88 (MiCreateRetpolineRelocationInformation.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075CEDC (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(unsigned __int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rbp
  int RetpolineRelocationInformation; // ebx
  __int64 Config; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r8
  unsigned int v12[18]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+10h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0LL;
  v4 = a2;
  memset(v12, 0, 32);
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, a1, a2, &v14);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(a1);
    if ( Config && *(int *)Config >= 228 )
    {
      v8 = *(_QWORD *)(Config + 120);
      v9 = 0;
      if ( v8 && v8 >= a1 && v8 < v4 + a1 - 8 )
        v9 = v8 - a1;
      RetpolineRelocationInformation = MiCaptureDynamicRelocationTableRva(
                                         a1,
                                         v4,
                                         0LL,
                                         *(_WORD *)(v14 + 24),
                                         Config,
                                         *(_DWORD *)Config,
                                         &v13);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables(a1, v4, v10, v13, v12);
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
