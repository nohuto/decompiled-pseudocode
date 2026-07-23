/*
 * XREFs of MiRemoveBadPages @ 0x14052EE08
 * Callers:
 *     MmRemovePhysicalMemory @ 0x1408C64D0 (MmRemovePhysicalMemory.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnBadPagesToBadList @ 0x14052F238 (MiReturnBadPagesToBadList.c)
 *     MiSetPfnRemovalRequested @ 0x14054F668 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14054F780 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiRemoveBadPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  _QWORD *v14; // r12
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  _DWORD *v30; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v33; // eax
  _DWORD *SchedulerAssist; // r8
  struct _KTHREAD *v35; // [rsp+50h] [rbp+8h]

  v4 = a2;
  if ( (MiFlags & 0x8000000) == 0 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v35 = CurrentThread;
  v8 = 0;
  v9 = 6 * a2;
  v10 = 48 * a2 - 0x58000000000LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C50E80, 0LL);
  if ( a3 )
  {
    v14 = (_QWORD *)(8 * v9 - 0x57FFFFFFFD8LL);
    while ( 1 )
    {
      if ( v4 > 0xFFFFFFFFFLL || (*v14 & 0x4000000000000LL) == 0 )
        goto LABEL_43;
      v15 = MiLockPageInline(v10, v11, v12, v13);
      v16 = *(_QWORD *)(v10 + 40);
      v17 = v15;
      if ( (v16 & 0x2000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = (v33 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v33;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v17);
LABEL_43:
        v8 = -1073741585;
        goto LABEL_44;
      }
      if ( *(ULONG_PTR **)(qword_140C4E688 + 8 * ((v16 >> 39) & 0x3FF)) != &MiSystemPartition )
        break;
      if ( !MiIsPageOnBadList(v10) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v23 = KeGetCurrentIrql();
            if ( v23 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v23 >= 2u )
            {
              v24 = KeGetCurrentPrcb();
              v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              v26 = v24->SchedulerAssist;
              v22 = (v25 & v26[5]) == 0;
              v26[5] &= v25;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick((__int64)v24);
            }
          }
        }
        __writecr8(v17);
        v8 = -1073740682;
        goto LABEL_44;
      }
      MiUnlinkPageFromBadList(v18, 0LL);
      MiSetPfnRemovalRequested(v10, 1LL);
      *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v11 = -1LL << ((unsigned __int8)v17 + 1);
            v13 = v20->SchedulerAssist;
            v21 = ~(unsigned __int16)v11;
            v22 = (v21 & v13[5]) == 0;
            v12 = (unsigned int)v21 & v13[5];
            v13[5] = v12;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)v20);
          }
        }
      }
      __writecr8(v17);
      ++v7;
      ++v4;
      v14 += 6;
      v10 += 48LL;
      if ( v7 >= a3 )
        goto LABEL_46;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v30 = v28->SchedulerAssist;
          v22 = (v29 & v30[5]) == 0;
          v30[5] &= v29;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
    }
    __writecr8(v17);
    v8 = -1073740277;
LABEL_44:
    if ( v7 )
      MiReturnBadPagesToBadList(v4 - v7, v7);
LABEL_46:
    CurrentThread = v35;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50E80, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C50E80);
  KeAbPostRelease((ULONG_PTR)&qword_140C50E80);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
