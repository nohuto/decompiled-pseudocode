/*
 * XREFs of CmpEnableLazyFlush @ 0x1403A7408
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14035FDD0 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1404ECE30 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x14077755C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140358040 (CmpArmLazyWriter.c)
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
