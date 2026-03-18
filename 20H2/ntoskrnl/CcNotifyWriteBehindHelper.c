/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x14038D700
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1403208E0 (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindHelper(__int64 a1, char a2)
{
  CcNotifyWriteBehindInternal(a1, a2);
  return 1;
}
