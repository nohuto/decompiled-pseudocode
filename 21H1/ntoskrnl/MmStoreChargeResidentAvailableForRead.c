/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x1403097A4
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402CAF84 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x1403096C0 (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL, a4) != 0;
}
