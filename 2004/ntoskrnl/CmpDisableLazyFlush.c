/*
 * XREFs of CmpDisableLazyFlush @ 0x140360F5C
 * Callers:
 *     CmSetLazyFlushState @ 0x14076801C (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x14086ED48 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
