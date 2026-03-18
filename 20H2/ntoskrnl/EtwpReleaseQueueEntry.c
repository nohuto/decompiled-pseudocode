/*
 * XREFs of EtwpReleaseQueueEntry @ 0x14071AE04
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405F46F0 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405F5298 (EtwpRundownNotifications.c)
 *     EtwpQueueNotification @ 0x14071A734 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x14071AC74 (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x14071BD78 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsReleaseProcessWakeCounter @ 0x1405E59A0 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(PADAPTER_OBJECT *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    HalPutDmaAdapter(P[4]);
    v4 = (__int64)P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
