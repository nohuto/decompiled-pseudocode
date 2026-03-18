/*
 * XREFs of CmpEnableLazyFlush @ 0x1403B63D0
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403B6350 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x14053F590 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x1407FFF4C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
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
