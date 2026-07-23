/*
 * XREFs of CmpEnableLazyFlush @ 0x1403A7558
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1402A4D00 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1404ED070 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x14077771C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140362D90 (CmpArmLazyWriter.c)
 */

void __fastcall CmpEnableLazyFlush(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&CmpHoldLazyFlush);
  if ( _InterlockedAnd(&CmpHoldLazyFlush, ~a1) == a1 )
  {
    for ( i = 0; i < 3; ++i )
      CmpArmLazyWriter(i, 0LL, 1);
  }
}
