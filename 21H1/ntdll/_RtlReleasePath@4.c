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

int __stdcall RtlReleasePath(int a1)
{
  int v1; // edi
  int result; // eax
  signed __int32 v3; // edx
  int v4; // ebx
  signed __int32 v5; // ecx

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v1 = --*(_DWORD *)(a1 - 28) == 0 ? a1 - 80 : 0;
  result = _InterlockedCompareExchange(&RtlpCachedPathLock, 0, 1);
  v3 = result;
  if ( result != 1 )
  {
    while ( 1 )
    {
      v4 = v3 & 6;
      v5 = v3 + 4 * (v4 == 2) - 1;
      result = _InterlockedCompareExchange(&RtlpCachedPathLock, v5, v3);
      if ( result == v3 )
        break;
      v3 = result;
    }
    if ( v4 == 2 )
      result = RtlpWakeSRWLock(v5);
  }
  if ( v1 )
    return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v1);
  return result;
}
