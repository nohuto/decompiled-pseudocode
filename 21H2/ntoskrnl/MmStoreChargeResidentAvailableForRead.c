/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x140291C04
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x140291B20 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
