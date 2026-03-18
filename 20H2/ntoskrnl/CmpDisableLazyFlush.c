/*
 * XREFs of CmpDisableLazyFlush @ 0x140331D5C
 * Callers:
 *     CmSetLazyFlushState @ 0x1407736EC (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1408748A0 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
