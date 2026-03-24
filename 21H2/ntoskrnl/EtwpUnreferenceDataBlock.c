/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1406E4984
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405FC900 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x14069322C (EtwpRundownNotifications.c)
 *     EtwpQueueReply @ 0x1406BB3D0 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406C1360 (EtwpReceiveReplyDataBlock.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406E1144 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1406E1804 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x1406E478C (EtwpReceiveNotification.c)
 *     EtwpDisallowedGuidAddition @ 0x140933C04 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140933EEC (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093F940 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
