/*
 * XREFs of CmpEnableLazyFlush @ 0x1403A6B48
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14035B330 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1404EB540 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x1407736EC (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140343AF0 (CmpArmLazyWriter.c)
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
