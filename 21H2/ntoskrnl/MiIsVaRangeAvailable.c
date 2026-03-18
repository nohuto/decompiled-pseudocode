/*
 * XREFs of MiIsVaRangeAvailable @ 0x1406F8804
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x1402819BC (MiCheckForConflictingVadExistence.c)
 */

_BOOL8 __fastcall MiIsVaRangeAvailable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r8

  v5 = a2 + a3 - 1;
  return (a2 >= 0x10000 || *(_QWORD *)(a1 + 2240))
      && a2 >= a4
      && v5 <= a5
      && v5 > a2
      && !MiCheckForConflictingVadExistence();
}
