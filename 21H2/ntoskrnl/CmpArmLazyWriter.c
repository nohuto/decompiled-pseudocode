/*
 * XREFs of CmpArmLazyWriter @ 0x1402A4320
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x1403B63D0 (CmpEnableLazyFlush.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x1406CA514 (HvMarkBaseBlockDirty.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CmpArmLazyWriter(int a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // r14
  char *v9; // r12
  unsigned __int64 v10; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  ULONG v13; // r9d
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf

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
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = 192LL * a1;
  KxAcquireSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v8 + 152));
  v9 = (char *)&CmpLazyWriterData + v8;
  v10 = *(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) & 7LL;
  if ( v10 <= 3 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      if ( !a3 || !KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v8)) )
        goto LABEL_10;
      *((_QWORD *)v9 + 21) = 1LL;
    }
    else
    {
      if ( (_DWORD)v10 )
      {
        v12 = v10 - 2;
        if ( !v12 || v12 == 1 && v6 < (*(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
          *((_QWORD *)v9 + 21) = v6 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_10;
      }
      *((_QWORD *)v9 + 21) = 1LL;
      if ( !a3 )
      {
        v13 = *(_DWORD *)((char *)&CmpLazyWriterData + v8 + 184);
        v14 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v8 + 180);
LABEL_25:
        KeSetCoalescableTimer(
          (struct _KTIMER *)((char *)&CmpLazyWriterData + v8),
          (LARGE_INTEGER)v14,
          0,
          v13,
          (PKDPC)((char *)&CmpLazyWriterData + v8 + 64));
        goto LABEL_10;
      }
    }
    v14 = -20000000LL;
    v13 = 1000;
    goto LABEL_25;
  }
LABEL_10:
  KxReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v8 + 152));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
}
