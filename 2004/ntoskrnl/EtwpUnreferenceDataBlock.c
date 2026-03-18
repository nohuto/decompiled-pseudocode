/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140633EA0
 * Callers:
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpReceiveNotification @ 0x140633CA8 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14066FF90 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406C7250 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x1406E290C (EtwpRundownNotifications.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EE1C8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpQueueReply @ 0x140709430 (EtwpQueueReply.c)
 *     EtwpDisallowedGuidAddition @ 0x140930604 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409308EC (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093C340 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
