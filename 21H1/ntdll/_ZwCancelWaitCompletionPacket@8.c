/*
 * XREFs of _ZwCancelWaitCompletionPacket@8 @ 0x4B2F32D0
 * Callers:
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppWaitTimerExpiration@4 @ 0x4B2ECC37 (_TppWaitTimerExpiration@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  return Wow64SystemServiceCall();
}
