/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x1800D08E0
 * Callers:
 *     LdrpDynamicShimModule @ 0x18003D9A4 (LdrpDynamicShimModule.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     LdrpGetShimEngineInterface @ 0x18006CD08 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CDC48 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int Dll; // ebx
  char v5; // al
  __int64 v6; // rdx
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-B0h]
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v12; // [rsp+68h] [rbp-98h]
  _WORD v13[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v15; // [rsp+1ECh] [rbp+ECh]

  v1 = 0;
  v10 = L"apphelp.dll";
  v9 = 1572886;
  v12 = v13;
  v11 = 0x1000000;
  v13[0] = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    v3 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v3;
    if ( !v3 )
      return (unsigned int)-1073741823;
    return v1;
  }
  Dll = LdrpBuildSystem32FileName(&v11, (__int64)&v9);
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, (const WCHAR *)0x4001, (const WCHAR **)Path);
    Dll = LdrpLoadDll((__int64)&v11, (__int64)Path, 0, (__int64)&v8);
    if ( v15 )
      RtlReleasePath(Path[0]);
    if ( Dll >= 0 )
    {
      *(_DWORD *)(v8 + 104) |= 0x100u;
      g_pShimEngineModule = *(PVOID *)(v8 + 48);
      Dll = LdrpGetShimEngineInterface();
      if ( Dll >= 0 )
      {
        Dll = 0;
        v6 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
        *a1 = v6;
        if ( !v6 )
          Dll = -1073741823;
        goto LABEL_19;
      }
      v5 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_12;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2925,
        "LdrpGetProcApphelpCheckModule",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        Dll);
    }
    else
    {
      v5 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_12;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2914,
        "LdrpGetProcApphelpCheckModule",
        0,
        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
        &v11,
        Dll);
    }
    v5 = LdrpDebugFlags;
LABEL_12:
    if ( (v5 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_19:
  if ( v13 != v12 )
    NtdllpFreeStringRoutine(v12);
  return (unsigned int)Dll;
}
