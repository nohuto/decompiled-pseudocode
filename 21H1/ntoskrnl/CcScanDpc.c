/*
 * XREFs of CcScanDpc @ 0x140312420
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140312440 (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcScanDpc(__int64 a1, __int64 a2)
{
  return CcNotifyWriteBehindInternal(a2, 4LL);
}
