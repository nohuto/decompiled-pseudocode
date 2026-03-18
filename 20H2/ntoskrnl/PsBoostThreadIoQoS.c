/*
 * XREFs of PsBoostThreadIoQoS @ 0x14035D3B8
 * Callers:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExpFreeOwnerEntry @ 0x14029DA20 (ExpFreeOwnerEntry.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     KiAbThreadUnboostIoPriority @ 0x14032EF60 (KiAbThreadUnboostIoPriority.c)
 *     ExReinitializeResourceLite @ 0x14035B400 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14035CC50 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x14035D250 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x14035F5D4 (KiAbThreadBoostIoPriority.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14035D3EC (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall PsBoostThreadIoQoS(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (_DWORD)a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1364));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1364));
    if ( (_DWORD)result == 1 )
      return KeAbProcessEffectiveIoPriorityChange(a1, a2);
  }
  return result;
}
