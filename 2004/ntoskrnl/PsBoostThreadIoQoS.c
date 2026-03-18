/*
 * XREFs of PsBoostThreadIoQoS @ 0x140279D74
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExReinitializeResourceLite @ 0x140278850 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140279730 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x140279C0C (ExpBoostIoAfterAcquire.c)
 *     ExpFreeOwnerEntry @ 0x1402C3DC0 (ExpFreeOwnerEntry.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     KiAbThreadBoostIoPriority @ 0x14032A874 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14035E600 (KiAbThreadUnboostIoPriority.c)
 *     ExpWorkerInitialization @ 0x140A66764 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140279DA8 (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1364));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1364));
    if ( (_DWORD)result == 1 )
      return KeAbProcessEffectiveIoPriorityChange();
  }
  return result;
}
