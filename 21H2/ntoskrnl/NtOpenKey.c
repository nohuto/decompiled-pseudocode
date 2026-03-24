/*
 * XREFs of NtOpenKey @ 0x140693490
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A41C04 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A72948 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKey(HANDLE *a1, int a2, __int64 a3)
{
  return CmOpenKey(a1, a2, a3, 0, 0LL);
}
