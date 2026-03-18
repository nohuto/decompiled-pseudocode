/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1405E59A0
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1405E2E50 (AlpcMessageCleanupProcedure.c)
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E9FF0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1405EA5BC (AlpcpCancelMessage.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     EtwpReleaseQueueEntry @ 0x14071AE04 (EtwpReleaseQueueEntry.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14072002C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PspCloseActivityReference @ 0x140730A30 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408E403C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408E43CC (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1405EE0B0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
