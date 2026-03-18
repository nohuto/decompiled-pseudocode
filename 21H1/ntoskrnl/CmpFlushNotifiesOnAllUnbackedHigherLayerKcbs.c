/*
 * XREFs of CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14071F8B8
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087A91C (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14071F908 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(int a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0x100000008LL;
  BYTE5(v5) = a4;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int)CmpFlushNotifiesPreCallback,
           (unsigned int)CmpFlushNotifiesPostCallback,
           a3,
           (__int64)&v5,
           a4,
           1);
}
