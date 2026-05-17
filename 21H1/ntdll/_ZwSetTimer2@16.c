/*
 * XREFs of _ZwSetTimer2@16 @ 0x4B2F4460
 * Callers:
 *     _TppTimerQueueExpiration@16 @ 0x4B2B7250 (_TppTimerQueueExpiration@16.c)
 *     _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9 (_TppUpdateSubQueueTimer@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetTimer2(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
