/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x14082CB7C
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406ACDDC (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1406ACFF0 (MiCreateRetpolineRelocationInformation.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140706200 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiFreeImageRetpolineContext @ 0x14070705C (MiFreeImageRetpolineContext.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(unsigned __int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // r14
  int RetpolineRelocationInformation; // ebx
  _DWORD *Config; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  char v11; // [rsp+20h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0;
  v15 = 0LL;
  v12 = 0LL;
  v5 = a2;
  memset(v13, 0, sizeof(v13));
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, a1, a2, &v15);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(a1);
    if ( Config && (int)*Config >= 228 )
    {
      v8 = *((_QWORD *)Config + 15);
      v9 = 0;
      if ( v8 && v8 >= a1 && v8 < v5 + a1 - 8 )
        v9 = v8 - a1;
      RetpolineRelocationInformation = LdrCaptureDynamicRelocationTableHeader(
                                         a1,
                                         v5,
                                         (__int64)Config,
                                         *Config,
                                         0LL,
                                         *(_WORD *)(v15 + 24),
                                         &v14,
                                         &v12);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables(a1, v5, v14, &v12, v11, (unsigned int *)v13);
        if ( RetpolineRelocationInformation >= 0 )
        {
          RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation((__int64)v13, v9, v5, a3);
          MiFreeImageRetpolineContext(v13);
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
