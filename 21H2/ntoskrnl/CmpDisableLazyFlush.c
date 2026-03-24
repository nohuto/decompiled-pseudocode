/*
 * XREFs of CmpDisableLazyFlush @ 0x1402D3FFC
 * Callers:
 *     CmSetLazyFlushState @ 0x14077755C (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1408720F0 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
