/*
 * XREFs of LdrpInitializeDllPath @ 0x1800169B8
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpMapDllSearchPath @ 0x180060B00 (LdrpMapDllSearchPath.c)
 *     LdrpInitShimEngine @ 0x18006C77C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006C924 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 *     LdrpCorInitialize @ 0x1800832C4 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180083824 (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800CCF80 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D08E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAD68 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x1800116AC (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDC48 (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpInitializeDllPath(const WCHAR *a1, const WCHAR *a2, const WCHAR **a3)
{
  __int64 v6; // rcx
  bool v7; // zf

  memset(a3, 0, 0x80uLL);
  if ( ((unsigned __int8)a2 & 1) == 0 && a2 )
  {
    v7 = (LdrpDebugFlags & 5) == 0;
    *a3 = a2;
    if ( !v7 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1445,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        (__int64)"DLL search path passed in externally: %ws\n",
        a2);
    LdrpLogDllStateEx2(v6, a1, *a3, 0x14C0u);
  }
  else
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = (unsigned int)a2 & 0xFFFFFFFE;
  }
}
