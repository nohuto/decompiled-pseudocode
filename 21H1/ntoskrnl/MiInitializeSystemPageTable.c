/*
 * XREFs of MiInitializeSystemPageTable @ 0x140328C34
 * Callers:
 *     MiCreateSystemPageTable @ 0x1403289C0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402F26B0 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140328FB8 (MiInitializePfnForOtherProcess.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     MiTransformValidPteInPlace @ 0x1403760AC (MiTransformValidPteInPlace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateSessionPdeMaster @ 0x1403F0DB8 (MiUpdateSessionPdeMaster.c)
 */

char __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned __int64 LeafVa; // rbx
  __int64 ContainingPageTable; // rbp
  __int64 v14; // r9
  unsigned __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 ValidPte; // rbx
  int v19; // edi
  struct _KTHREAD *CurrentThread; // rax
  bool v21; // zf
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0;
  MI_READ_PTE_LOCK_FREE(a3);
  v9 = (__int64)(a4 + 0xB000000000LL) / 48;
  v10 = (__int64)(a3 << 25) >> 16;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    MiFillPhysicalPages((__int64)(a4 + 0xB000000000LL) / 48);
    v11 = -1879048188;
  }
  else
  {
    v11 = -1879048186;
  }
  LeafVa = MiGetLeafVa(a3);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v8 = 1;
  }
  else if ( LeafVa <= 0x7FFFFFFEFFFFLL
         || LeafVa >= qword_140C4FA78 && LeafVa <= qword_140C4E2A8
         || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 4;
  }
  *a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  if ( v10 >= 0xFFFFF68000000000uLL && v10 <= v15 )
    v11 |= 0x8000000u;
  ValidPte = MiMakeValidPte(a3, v9, v11, v14);
  if ( a2 == 3 && (MiFlags & 0x30) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      ContainingPageTable = MiUpdateSessionPdeMaster(v17, v16);
    }
    else if ( v8 < 4 )
    {
      if ( PsInitialSystemProcess )
        ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
      else
        ContainingPageTable = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
    }
  }
  MiInitializePfnForOtherProcess(v9, a3, ContainingPageTable, 512LL);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) == 0 )
  {
    v19 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(a3);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v21 = (ValidPte & 1) == 0;
          goto LABEL_33;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v21 = (ValidPte & 1) == 0;
LABEL_33:
          if ( !v21 )
          {
            LOBYTE(CurrentThread) = 0;
            ValidPte |= 0x8000000000000000uLL;
          }
        }
      }
    }
    *(_QWORD *)a3 = ValidPte;
    if ( v19 )
      LOBYTE(CurrentThread) = MiWritePteShadow(a3, ValidPte);
    goto LABEL_39;
  }
  LOBYTE(CurrentThread) = MiTransformValidPteInPlace(
                            a3,
                            a3,
                            ValidPte,
                            a2,
                            LockHandle.LockQueue.Next,
                            LockHandle.LockQueue.Lock);
  if ( a2 != 3 )
    return (char)CurrentThread;
  LOBYTE(CurrentThread) = MiInsertRecursiveTbFlushEntries(a5, 3, a3);
LABEL_39:
  if ( a2 == 3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(CurrentThread) = KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(CurrentThread) = KeGetCurrentIrql();
        if ( (unsigned __int8)CurrentThread <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)CurrentThread >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(CurrentThread) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = ((unsigned int)CurrentThread & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)CurrentThread;
          if ( v21 )
            LOBYTE(CurrentThread) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return (char)CurrentThread;
}
