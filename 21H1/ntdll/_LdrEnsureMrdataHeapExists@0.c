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

NTSTATUS __stdcall LdrEnsureMrdataHeapExists()
{
  int v0; // eax
  NTSTATUS result; // eax
  PVOID Heap; // eax
  void *v3; // esi
  _DWORD *v4; // eax
  void *v5; // edi
  ULONG_PTR v6; // [esp-10h] [ebp-24h]
  SIZE_T v7; // [esp-4h] [ebp-18h]
  ULONG v8; // [esp+0h] [ebp-14h]
  void *v9; // [esp+0h] [ebp-14h]
  void *v10; // [esp+4h] [ebp-10h]
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-8h] BYREF

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  if ( !v0 || LdrpMrdataHeap )
    return 0;
  RegionSize = (unsigned int)LdrpAllocationGranularity;
  HIDWORD(v6) = &RegionSize;
  LODWORD(v6) = 0;
  result = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, v6, (PSIZE_T)0x2000, 4u, v8);
  if ( result >= 0 )
  {
    Heap = RtlCreateHeap(2u, (PVOID)HIDWORD(RegionSize), 0LL, 0LL, v9, v10);
    v3 = Heap;
    if ( Heap )
    {
      LODWORD(v7) = 4;
      v4 = RtlAllocateHeap(Heap, 0, v7);
      v5 = v4;
      if ( v4 )
      {
        *v4 = 0;
        RtlProtectHeap(v3, 1u);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = (int)v5;
          LdrpMrdataHeap = v3;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v3, 0);
        RtlFreeHeap(v3, 0, v5);
      }
      RtlDestroyHeap(v3);
    }
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
    if ( !LdrpMrdataHeap )
      return -1073741801;
    return 0;
  }
  return result;
}
