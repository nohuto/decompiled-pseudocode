/*
 * XREFs of CmpDisableLazyFlush @ 0x14025226C
 * Callers:
 *     CmSetLazyFlushState @ 0x14077771C (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
