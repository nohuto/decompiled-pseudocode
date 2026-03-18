/*
 * XREFs of PopFxNotifySxTransitionState @ 0x140764564
 * Callers:
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
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
    byte_140C24678 = 1;
    v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140C24680, Executive, 0, 0, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C24678 = 0;
    while ( 1 )
    {
      v3 = (struct _WORK_QUEUE_ITEM *)qword_140C24668;
      if ( (__int64 *)qword_140C24668 == &qword_140C24668 )
        break;
      if ( *(__int64 **)(qword_140C24668 + 8) != &qword_140C24668
        || (v5 = *(_QWORD *)qword_140C24668, *(_QWORD *)(*(_QWORD *)qword_140C24668 + 8LL) != qword_140C24668) )
      {
        __fastfail(3u);
      }
      qword_140C24668 = *(_QWORD *)qword_140C24668;
      *(_QWORD *)(v5 + 8) = &qword_140C24668;
      ExQueueWorkItem(v3 + 1, DelayedWorkQueue);
    }
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
