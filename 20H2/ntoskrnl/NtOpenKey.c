/*
 * XREFs of NtOpenKey @ 0x1406BA300
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A759C8 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKey(HANDLE *a1, int a2, __int64 a3)
{
  return CmOpenKey(a1, a2, a3, 0, 0LL);
}
