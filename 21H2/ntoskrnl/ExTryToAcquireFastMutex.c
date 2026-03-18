/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140233370
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x140233310 (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x140233350 (KeTryToAcquireGuardedMutex.c)
 *     DifExTryToAcquireFastMutexWrapper @ 0x140609960 (DifExTryToAcquireFastMutexWrapper.c)
 *     DifKeTryToAcquireGuardedMutexWrapper @ 0x140615BB0 (DifKeTryToAcquireGuardedMutexWrapper.c)
 *     RawScanDeletedList @ 0x14074C258 (RawScanDeletedList.c)
 *     CreateMiniNtBootKey @ 0x140B4B5E0 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = KeAbPreAcquire(FastMutex, 0LL, 1LL);
  v3 = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)FastMutex);
    _mm_pause();
    return 0;
  }
  return result;
}
