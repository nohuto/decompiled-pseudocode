/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x140303C54
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x140303B70 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14030CBC4 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
