/*
 * XREFs of PopFxNotifySxTransitionState @ 0x140772B74
 * Callers:
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
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
    byte_140C24778 = 1;
    v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140C24780, Executive, 0, 0, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C24778 = 0;
    while ( 1 )
    {
      v3 = (struct _WORK_QUEUE_ITEM *)qword_140C24768;
      if ( (__int64 *)qword_140C24768 == &qword_140C24768 )
        break;
      if ( *(__int64 **)(qword_140C24768 + 8) != &qword_140C24768
        || (v5 = *(_QWORD *)qword_140C24768, *(_QWORD *)(*(_QWORD *)qword_140C24768 + 8LL) != qword_140C24768) )
      {
        __fastfail(3u);
      }
      qword_140C24768 = *(_QWORD *)qword_140C24768;
      *(_QWORD *)(v5 + 8) = &qword_140C24768;
      ExQueueWorkItem(v3 + 1, DelayedWorkQueue);
    }
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
