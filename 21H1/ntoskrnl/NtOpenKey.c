/*
 * XREFs of NtOpenKey @ 0x1406C2C30
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A6E9C4 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKey(HANDLE *a1, int a2, __int64 a3)
{
  return CmOpenKey(a1, a2, a3, 0LL, 0LL);
}
