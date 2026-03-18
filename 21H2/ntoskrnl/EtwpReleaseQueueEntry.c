/*
 * XREFs of EtwpReleaseQueueEntry @ 0x14078F094
 * Callers:
 *     EtwpSendReplyDataBlock @ 0x1406F2000 (EtwpSendReplyDataBlock.c)
 *     EtwpReceiveNotification @ 0x14078EF08 (EtwpReceiveNotification.c)
 *     EtwpQueueNotification @ 0x140790EEC (EtwpQueueNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x140796530 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x140797468 (EtwpRundownNotifications.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = (__int64)P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
