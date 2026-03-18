/*
 * XREFs of MiSlabAllocatorRecentFailure @ 0x140390194
 * Callers:
 *     MiGetSlabPage @ 0x1402E1028 (MiGetSlabPage.c)
 *     MiAllocateSlabEntry @ 0x14038FF38 (MiAllocateSlabEntry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall MiSlabAllocatorRecentFailure(__int64 a1)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v3; // r11

  if ( !*(_QWORD *)(a1 + 112) )
    return 0LL;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(v3 + 112)) >= 0x11E1A300 )
  {
    *(_QWORD *)(v3 + 112) = 0LL;
    return 0LL;
  }
  return 1LL;
}
