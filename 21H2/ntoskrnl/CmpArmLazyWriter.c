/*
 * XREFs of CmpArmLazyWriter @ 0x140362D90
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F73C0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x1403A7558 (CmpEnableLazyFlush.c)
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CmpArmLazyWriter(int a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  int v10; // ecx
  unsigned __int64 v11; // rbx
  ULONG v12; // r9d
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  if ( !CmpWorkerDataInitialized || CmpHoldLazyFlush )
    return;
  v4 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  if ( a2 )
  {
    v5 = v4 + 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45);
    v6 = *a2;
    if ( *a2 >= v5 )
      v6 = v5;
  }
  else if ( a3 )
  {
    v6 = v4 + 20000000;
  }
  else
  {
    v6 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45) + v4;
  }
  v7 = 192LL * a1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v7 + 152));
  v9 = *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 7LL;
  if ( v9 <= 3 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v7)) )
        goto LABEL_24;
    }
    else
    {
      if ( !(_DWORD)v9 )
      {
LABEL_24:
        v11 = 1LL;
LABEL_17:
        *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) = v11;
        if ( v11 == 1 )
        {
          if ( a3 )
          {
            v13 = -20000000LL;
            v12 = 1000;
          }
          else
          {
            v12 = *(_DWORD *)((char *)&CmpLazyWriterData + v7 + 184);
            v13 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v7 + 180);
          }
          KeSetCoalescableTimer(
            (struct _KTIMER *)((char *)&CmpLazyWriterData + v7),
            (LARGE_INTEGER)v13,
            0,
            v12,
            (PKDPC)((char *)&CmpLazyWriterData + v7 + 64));
        }
        goto LABEL_9;
      }
      v10 = v9 - 2;
      if ( !v10 || v10 == 1 && v6 < (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        v11 = v6 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_17;
      }
    }
  }
LABEL_9:
  KxReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v7 + 152));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
}
