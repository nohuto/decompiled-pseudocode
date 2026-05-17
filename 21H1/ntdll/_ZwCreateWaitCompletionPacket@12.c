/*
 * XREFs of _ZwCreateWaitCompletionPacket@12 @ 0x4B2F3610
 * Callers:
 *     _TppInitializeTimerSubQueue@12 @ 0x4B2B407F (_TppInitializeTimerSubQueue@12.c)
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwCreateWaitCompletionPacket(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
