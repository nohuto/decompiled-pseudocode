/*
 * XREFs of CmpEnableLazyFlush @ 0x1403A4728
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140328950 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1404E7CB0 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x14076801C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402D7800 (CmpArmLazyWriter.c)
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
