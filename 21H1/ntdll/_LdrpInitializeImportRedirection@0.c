/*
 * XREFs of _LdrpInitializeImportRedirection@0 @ 0x4B2EC596
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogImportRedirectionTelemetry@4 @ 0x4B3304B6 (_LdrpLogImportRedirectionTelemetry@4.c)
 *     _LdrpBuildImportRedirection@8 @ 0x4B334238 (_LdrpBuildImportRedirection@8.c)
 */

int __stdcall LdrpInitializeImportRedirection()
{
  _UNICODE_STRING *p_RedirectionDllName; // edi
  int Dll; // esi
  char v3; // al
  int v4; // ecx
  size_t v5; // [esp-4h] [ebp-74h]
  char v6; // [esp+13h] [ebp-5Dh] BYREF
  int v7; // [esp+14h] [ebp-5Ch] BYREF
  PWSTR Path[19]; // [esp+18h] [ebp-58h] BYREF
  char v9; // [esp+64h] [ebp-Ch]

  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  Dll = 0;
  if ( p_RedirectionDllName->Length )
  {
    if ( (ShowSnaps & 5) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrredirect.c",
        572,
        "LdrpInitializeImportRedirection",
        2,
        "Loading import redirection DLL: '%wZ'\n",
        p_RedirectionDllName);
    LODWORD(v5) = 80;
    memset(Path, 0, v5);
    Dll = LdrpLoadDll(p_RedirectionDllName, 16777217, (int)&v7);
    if ( v9 )
      RtlReleasePath(Path[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpBuildImportRedirection(v7);
      if ( Dll >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v6 = 0;
        Dll = LdrpInitializeGraphRecurse(*(_DWORD **)(v7 + 80), 0, &v6);
        LdrpReleaseLoaderLock(v4, 2, Dll, v4);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_DWORD *)(v7 + 80) + 12) = -1;
          *(_WORD *)(**(_DWORD **)(v7 + 80) - 28) = -1;
          LdrpLogImportRedirectionTelemetry(v7);
          LdrpRedirectionModule = v7;
        }
      }
      else
      {
        v3 = ShowSnaps;
        if ( (ShowSnaps & 3) != 0 )
        {
          LdrpLogDbgPrint(
            "minkernel\\ntdll\\ldrredirect.c",
            599,
            "LdrpInitializeImportRedirection",
            0,
            "Unable to build import redirection Table, Status = 0x%x\n",
            Dll);
          v3 = ShowSnaps;
        }
        if ( (v3 & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return Dll;
}
