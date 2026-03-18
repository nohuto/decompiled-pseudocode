/*
 * XREFs of MiIsVaRangeAvailable @ 0x140627A08
 * Callers:
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140233038 (MiCheckForConflictingVadExistence.c)
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
