/*
 * XREFs of EtwpReleaseQueueEntry @ 0x140680148
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405F7EF0 (EtwpDeleteRegistrationObject.c)
 *     EtwpQueueNotification @ 0x14067FA78 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x14067FFB8 (EtwpReceiveNotification.c)
 *     EtwpRundownNotifications @ 0x1406C238C (EtwpRundownNotifications.c)
 *     EtwpSendReplyDataBlock @ 0x1406E5628 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsReleaseProcessWakeCounter @ 0x14064B800 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(char *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    HalPutDmaAdapter(*((PADAPTER_OBJECT *)P + 4));
    v4 = *((_QWORD *)P + 5);
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, *((_QWORD *)P + 3));
  }
  _m_prefetchw(P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
