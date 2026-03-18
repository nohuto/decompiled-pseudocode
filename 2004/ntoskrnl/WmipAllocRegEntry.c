/*
 * XREFs of WmipAllocRegEntry @ 0x14036EA64
 * Callers:
 *     WmipRegisterDevice @ 0x14073F5C8 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140A657AC (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     WmipAllocProviderId @ 0x140710CE4 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v4 = ExAllocateFromNPagedLookasideList(&WmipRegLookaside);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v6 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    ++WmipInUseRegEntryCount;
    v7 = v6;
    v8 = off_140C02B70;
    if ( *off_140C02B70 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v8;
    *v8 = v5;
    off_140C02B70 = (_UNKNOWN **)v5;
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
