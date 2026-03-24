/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x1402E08B4
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x1402E07D0 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14035D458 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL, a4) != 0;
}
