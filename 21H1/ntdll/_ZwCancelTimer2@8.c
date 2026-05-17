/*
 * XREFs of _ZwCancelTimer2@8 @ 0x4B2F32C0
 * Callers:
 *     _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9 (_TppUpdateSubQueueTimer@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwCancelTimer2(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
