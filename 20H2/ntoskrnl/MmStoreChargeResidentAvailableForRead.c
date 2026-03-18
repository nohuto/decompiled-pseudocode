/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x1403588D4
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140337B6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x1403587F0 (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
