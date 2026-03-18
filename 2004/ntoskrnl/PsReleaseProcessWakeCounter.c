/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x14062DC50
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x140629BA8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcMessageCleanupProcedure @ 0x14062E160 (AlpcMessageCleanupProcedure.c)
 *     EtwpReleaseQueueEntry @ 0x140633E38 (EtwpReleaseQueueEntry.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A8670 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PspCloseActivityReference @ 0x140722920 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408DE1FC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408DE58C (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x140687480 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
