/*
 * XREFs of CcScanDpc @ 0x1403501B0
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1403501D0 (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcScanDpc(__int64 a1, __int64 a2)
{
  return CcNotifyWriteBehindInternal(a2, 4LL);
}
