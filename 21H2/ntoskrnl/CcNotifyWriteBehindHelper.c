/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x1403992C0
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140389160 (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x14053D2E4 (CcNotifyWriteBehindVolume.c)
 */

char __fastcall CcNotifyWriteBehindHelper(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    CcNotifyWriteBehindVolume(a2, a3);
  else
    CcNotifyWriteBehindInternal(a1, a3);
  return 1;
}
