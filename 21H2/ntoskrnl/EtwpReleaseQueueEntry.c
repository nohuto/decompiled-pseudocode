/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1406E491C
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405FC900 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x14069322C (EtwpRundownNotifications.c)
 *     EtwpSendReplyDataBlock @ 0x1406BB2E8 (EtwpSendReplyDataBlock.c)
 *     EtwpQueueNotification @ 0x1406E424C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1406E478C (EtwpReceiveNotification.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PsReleaseProcessWakeCounter @ 0x1405DE9D0 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
