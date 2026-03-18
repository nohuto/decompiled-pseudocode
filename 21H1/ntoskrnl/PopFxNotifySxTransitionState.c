/*
 * XREFs of PopFxNotifySxTransitionState @ 0x140762C84
 * Callers:
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall PopFxNotifySxTransitionState(char a1)
{
  char v1; // al
  struct _WORK_QUEUE_ITEM *v3; // rcx
  char v4; // al
  __int64 v5; // rax

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C24818 = 1;
    v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
      ExfTryToWakePushLock(&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140C24820, Executive, 0, 0, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C24818 = 0;
    while ( 1 )
    {
      v3 = (struct _WORK_QUEUE_ITEM *)qword_140C24808;
      if ( (__int64 *)qword_140C24808 == &qword_140C24808 )
        break;
      if ( *(__int64 **)(qword_140C24808 + 8) != &qword_140C24808
        || (v5 = *(_QWORD *)qword_140C24808, *(_QWORD *)(*(_QWORD *)qword_140C24808 + 8LL) != qword_140C24808) )
      {
        __fastfail(3u);
      }
      qword_140C24808 = *(_QWORD *)qword_140C24808;
      *(_QWORD *)(v5 + 8) = &qword_140C24808;
      ExQueueWorkItem(v3 + 1, DelayedWorkQueue);
    }
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock(&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
