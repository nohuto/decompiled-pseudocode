/*
 * XREFs of MiInitializeSystemPageTable @ 0x1402E5484
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402E5210 (MiCreateSystemPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402974A8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E5808 (MiInitializePfnForOtherProcess.c)
 *     MiFillPhysicalPages @ 0x1402E6470 (MiFillPhysicalPages.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiTransformValidPteInPlace @ 0x140379058 (MiTransformValidPteInPlace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateSessionPdeMaster @ 0x1403F7DC8 (MiUpdateSessionPdeMaster.c)
 */

char __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // r8
  _QWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  unsigned int v14; // r15d
  unsigned __int64 LeafVa; // rbx
  __int64 ContainingPageTable; // rbp
  unsigned __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 ValidPte; // rbx
  __int64 v21; // rdx
  int v22; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0;
  MI_READ_PTE_LOCK_FREE(a3);
  v10 = a4 + 0xB000000000LL;
  v11 = (unsigned __int128)((__int64)(a4 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v12 = (__int64)(a4 + 0xB000000000LL) / 48;
  v13 = (__int64)(a3 << 25) >> 16;
  if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    MiFillPhysicalPages((__int64)(a4 + 0xB000000000LL) / 48);
    v14 = -1879048188;
  }
  else
  {
    v14 = -1879048186;
  }
  LeafVa = MiGetLeafVa(a3, v11, v9, v10);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v8 = 1;
  }
  else if ( LeafVa <= 0x7FFFFFFEFFFFLL
         || LeafVa >= qword_140C4FB38 && LeafVa <= qword_140C4E368
         || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 4;
  }
  *a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  if ( v13 >= 0xFFFFF68000000000uLL && v13 <= v17 )
    v14 |= 0x8000000u;
  ValidPte = MiMakeValidPte(a3, v12, v14);
  if ( a2 == 3 && (MiFlags & 0x30) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      ContainingPageTable = MiUpdateSessionPdeMaster(v19, v18);
    }
    else if ( v8 < 4 )
    {
      if ( PsInitialSystemProcess )
        ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
      else
        ContainingPageTable = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
    }
  }
  MiInitializePfnForOtherProcess(v12, a3, ContainingPageTable, 512LL);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) == 0 )
  {
    v22 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(a3, v21);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v25 = (ValidPte & 1) == 0;
          goto LABEL_33;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v25 = (ValidPte & 1) == 0;
LABEL_33:
          if ( !v25 )
          {
            LOBYTE(CurrentThread) = 0;
            ValidPte |= 0x8000000000000000uLL;
          }
        }
      }
    }
    *(_QWORD *)a3 = ValidPte;
    if ( v22 )
      LOBYTE(CurrentThread) = MiWritePteShadow(a3, ValidPte, v24);
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
          v25 = ((unsigned int)CurrentThread & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)CurrentThread;
          if ( v25 )
            LOBYTE(CurrentThread) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return (char)CurrentThread;
}
