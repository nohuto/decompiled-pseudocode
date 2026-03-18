/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1406801B0
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405F31AC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpDeleteRegistrationObject @ 0x1405F7EF0 (EtwpDeleteRegistrationObject.c)
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14067FFB8 (EtwpReceiveNotification.c)
 *     EtwpRundownNotifications @ 0x1406C238C (EtwpRundownNotifications.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CCEC8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpQueueReply @ 0x1406E5710 (EtwpQueueReply.c)
 *     EtwpDisallowedGuidAddition @ 0x14092F354 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14092F63C (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093B0C0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
