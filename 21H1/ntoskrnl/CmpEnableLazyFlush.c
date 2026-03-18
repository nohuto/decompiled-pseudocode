/*
 * XREFs of CmpEnableLazyFlush @ 0x1403A3FC8
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140323840 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1404E7680 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x14075FF1C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E4550 (CmpArmLazyWriter.c)
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
