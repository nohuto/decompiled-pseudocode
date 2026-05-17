/*
 * XREFs of _ZwAssociateWaitCompletionPacket@32 @ 0x4B2F3280
 * Callers:
 *     _TppInitializeTimerSubQueue@12 @ 0x4B2B407F (_TppInitializeTimerSubQueue@12.c)
 *     _TppTimerQueueExpiration@16 @ 0x4B2B7250 (_TppTimerQueueExpiration@16.c)
 *     _TppSetupNextWait@12 @ 0x4B2B7C92 (_TppSetupNextWait@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwAssociateWaitCompletionPacket(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return Wow64SystemServiceCall();
}
