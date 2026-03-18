/*
 * XREFs of EtwpReleaseQueueEntry @ 0x140633E38
 * Callers:
 *     EtwpReceiveNotification @ 0x140633CA8 (EtwpReceiveNotification.c)
 *     EtwpQueueNotification @ 0x1406371FC (EtwpQueueNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x14066FF90 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1406E290C (EtwpRundownNotifications.c)
 *     EtwpSendReplyDataBlock @ 0x140709348 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsReleaseProcessWakeCounter @ 0x14062DC50 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
