/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1406BBBFC
 * Callers:
 *     EtwpQueueNotification @ 0x1406BB52C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1406BBA6C (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x1406BCB68 (EtwpSendReplyDataBlock.c)
 *     EtwpRundownNotifications @ 0x1406BCF58 (EtwpRundownNotifications.c)
 *     EtwpDeleteRegistrationObject @ 0x1406EC060 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(PADAPTER_OBJECT *P, int a2)
{
  PADAPTER_OBJECT v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    HalPutDmaAdapter(P[4]);
    v4 = P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, P[3]);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
