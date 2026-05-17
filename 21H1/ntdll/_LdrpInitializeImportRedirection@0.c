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
  char v5; // [esp+13h] [ebp-5Dh] BYREF
  _DWORD v6[22]; // [esp+14h] [ebp-5Ch] BYREF

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
    memset(&v6[1], 0, 0x50u);
    Dll = LdrpLoadDll(16777217, (int)v6);
    if ( LOBYTE(v6[20]) )
      RtlReleasePath(v6[1]);
    if ( Dll >= 0 )
    {
      Dll = LdrpBuildImportRedirection(v6[0]);
      if ( Dll >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v5 = 0;
        Dll = LdrpInitializeGraphRecurse(*(_DWORD **)(v6[0] + 80), 0, &v5);
        LdrpReleaseLoaderLock(v4, 2, Dll, v4);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_DWORD *)(v6[0] + 80) + 12) = -1;
          *(_WORD *)(**(_DWORD **)(v6[0] + 80) - 28) = -1;
          LdrpLogImportRedirectionTelemetry(v6[0]);
          LdrpRedirectionModule = v6[0];
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
