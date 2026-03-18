/*
 * XREFs of CmpDisableLazyFlush @ 0x14032348C
 * Callers:
 *     CmSetLazyFlushState @ 0x14075FF1C (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x14086D288 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
