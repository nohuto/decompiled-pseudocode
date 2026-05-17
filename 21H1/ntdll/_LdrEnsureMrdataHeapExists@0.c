/*
 * XREFs of _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77
 * Callers:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 * Callees:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __stdcall LdrEnsureMrdataHeapExists()
{
  int result; // eax
  int *Heap; // eax
  int *v2; // esi
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // [esp+Ch] [ebp-8h] BYREF
  void *v6; // [esp+10h] [ebp-4h] BYREF

  if ( !LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0;
  v5 = LdrpAllocationGranularity;
  v6 = 0;
  result = NtAllocateVirtualMemory(-1, &v6, 0, &v5, 0x2000, 4);
  if ( result >= 0 )
  {
    Heap = RtlCreateHeap(2, v6, 0, 0, 0, 0);
    v2 = Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap((int)Heap, 0, 4);
      v4 = (int)v3;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v4;
          LdrpMrdataHeap = (int)v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap((int)v2, 0, v4);
      }
      RtlDestroyHeap((int)v2);
    }
    NtFreeVirtualMemory(-1, &v6, &v5, 0x8000);
    if ( !LdrpMrdataHeap )
      return -1073741801;
    return 0;
  }
  return result;
}
