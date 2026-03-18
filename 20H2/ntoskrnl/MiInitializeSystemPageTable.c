/*
 * XREFs of MiInitializeSystemPageTable @ 0x140336364
 * Callers:
 *     MiCreateSystemPageTable @ 0x1403360F0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140301C90 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1403333BC (MiFillPhysicalPages.c)
 *     MiInitializePfnForOtherProcess @ 0x1403366E8 (MiInitializePfnForOtherProcess.c)
 *     MiTransformValidPteInPlace @ 0x140378E4C (MiTransformValidPteInPlace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateSessionPdeMaster @ 0x1403F662C (MiUpdateSessionPdeMaster.c)
 */

char __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v9; // edi
  char v10; // r10
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned __int64 v14; // r8
  unsigned __int64 LeafVa; // rbx
  __int64 ContainingPageTable; // rbp
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 ValidPte; // rbx
  int v22; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0;
  v10 = MI_READ_PTE_LOCK_FREE(a3);
  v11 = (__int64)(a4 + 0xB000000000LL) / 48;
  v12 = (__int64)(a3 << 25) >> 16;
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (v10 & 1) != 0 )
      v14 = *(_QWORD *)v12;
    else
      v14 = *(_QWORD *)(a1 + 288);
    MiFillPhysicalPages(
      (__int64)(a4 + 0xB000000000LL) / 48,
      (unsigned __int128)((__int64)(a4 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
      v14);
    v13 = -1879048188;
  }
  else
  {
    v13 = -1879048186;
  }
  LeafVa = MiGetLeafVa(a3);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v9 = 1;
  }
  else if ( LeafVa <= 0x7FFFFFFEFFFFLL
         || LeafVa >= qword_140C4F9B8 && LeafVa <= qword_140C4E1E8
         || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 4;
  }
  *a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  if ( v12 >= 0xFFFFF68000000000uLL && v12 <= v18 )
    v13 |= 0x8000000u;
  ValidPte = MiMakeValidPte(a3, v11, v13, v17);
  if ( a2 == 3 && (MiFlags & 0x30) != 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      ContainingPageTable = MiUpdateSessionPdeMaster(v20, v19);
    }
    else if ( v9 < 4 )
    {
      if ( PsInitialSystemProcess )
        ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
      else
        ContainingPageTable = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
    }
  }
  MiInitializePfnForOtherProcess(v11, a3, ContainingPageTable, 512LL);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) == 0 )
  {
    v22 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(a3);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v25 = (ValidPte & 1) == 0;
          goto LABEL_36;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v25 = (ValidPte & 1) == 0;
LABEL_36:
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
    goto LABEL_42;
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
LABEL_42:
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
