/*
 * XREFs of _RtlReleasePath@4 @ 0x4B2DE7B0
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 *     _LdrpReleaseDllPath@4 @ 0x4B2DDF8A (_LdrpReleaseDllPath@4.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6 (_LdrpGetProcApphelpCheckModule@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 */

void __cdecl RtlReleasePath(PWSTR Path)
{
  PWSTR v1; // edi
  signed __int32 v2; // edx
  int v3; // ebx
  signed __int32 v4; // ecx
  signed __int32 v5; // eax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v1 = --*((_DWORD *)Path - 7) == 0 ? Path - 40 : 0;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)&RtlpCachedPathLock, 0, 1);
  if ( v2 != 1 )
  {
    while ( 1 )
    {
      v3 = v2 & 6;
      v4 = v2 + 4 * (v3 == 2) - 1;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)&RtlpCachedPathLock, v4, v2);
      if ( v5 == v2 )
        break;
      v2 = v5;
    }
    if ( v3 == 2 )
      RtlpWakeSRWLock(v4);
  }
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
