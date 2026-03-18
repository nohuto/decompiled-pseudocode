/*
 * XREFs of NtOpenKey @ 0x1406E31B0
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A6F4C4 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKey(HANDLE *a1, int a2, __int64 a3)
{
  return CmOpenKey(a1, a2, a3, 0, 0LL);
}
