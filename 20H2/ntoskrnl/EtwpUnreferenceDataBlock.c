/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x14071AE6C
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405F46F0 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405F5298 (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140717CA4 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14071AC74 (EtwpReceiveNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x14071BC7C (EtwpReceiveReplyDataBlock.c)
 *     EtwpQueueReply @ 0x14071BE60 (EtwpQueueReply.c)
 *     EtwpDisallowedGuidAddition @ 0x140936434 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14093671C (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x140942170 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
