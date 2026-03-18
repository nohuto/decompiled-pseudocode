/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x14064B800
 * Callers:
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcMessageCleanupProcedure @ 0x14064BF70 (AlpcMessageCleanupProcedure.c)
 *     EtwpReleaseQueueEntry @ 0x140680148 (EtwpReleaseQueueEntry.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14070099C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PspCloseActivityReference @ 0x140720A60 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408DCE8C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408DD27C (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x14060F300 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // r8d
  int v5; // edx

  v2 = a1 & 7;
  v4 = 0;
  if ( v2 != 7 )
    v4 = a1 & 7;
  v5 = 2;
  if ( v2 != 7 )
    v5 = 0;
  return PspChargeProcessWakeCounter(a1 & 0xFFFFFFFFFFFFFFF8uLL, v5, v4, a2, -1, 1, 0LL);
}
