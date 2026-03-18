/*
 * XREFs of PsBoostThreadIoQoS @ 0x1402DB77C
 * Callers:
 *     ExpFreeOwnerEntry @ 0x140230F90 (ExpFreeOwnerEntry.c)
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DA540 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1402DB614 (ExpBoostIoAfterAcquire.c)
 *     ExReinitializeResourceLite @ 0x1402DCC60 (ExReinitializeResourceLite.c)
 *     KiAbThreadBoostIoPriority @ 0x1402DDAA4 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x140320A10 (KiAbThreadUnboostIoPriority.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1402DB7B0 (KeAbProcessEffectiveIoPriorityChange.c)
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
