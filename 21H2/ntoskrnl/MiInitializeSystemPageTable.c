/*
 * XREFs of MiInitializeSystemPageTable @ 0x14027C784
 * Callers:
 *     MiCreateSystemPageTable @ 0x14027CE40 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140228BCC (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiUpdateSessionPxeMaster @ 0x14025DD8C (MiUpdateSessionPxeMaster.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiInitializePfnForOtherProcess @ 0x14027CCE4 (MiInitializePfnForOtherProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiSetPageTablePfnBuddy @ 0x14036C868 (MiSetPageTablePfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiClearPteAccessedBitRange @ 0x140419160 (MiClearPteAccessedBitRange.c)
 *     KeCopyPage @ 0x140424FF0 (KeCopyPage.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     MxCopyPage @ 0x140B51C0C (MxCopyPage.c)
 */

char __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned int v9; // edi
  __int64 v10; // rdx
  char v11; // bl
  ULONG_PTR v12; // r12
  unsigned __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  char v17; // al
  unsigned __int64 LeafVa; // rbx
  _QWORD *v19; // r13
  unsigned __int64 ContainingPageTable; // r15
  __int64 v21; // r8
  __int64 ValidPte; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 v24; // rdi
  char v25; // al
  int v26; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  char v30; // cl
  _DWORD *SchedulerAssist; // r8
  int v32; // edx
  unsigned int v33; // edx
  __int64 v35; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v40; // [rsp+98h] [rbp+20h]

  v40 = a4;
  v5 = *(_QWORD *)(a1 + 168);
  v35 = v5;
  v9 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v39 = MI_READ_PTE_LOCK_FREE(a3);
  v11 = v39;
  v38 = a2 != 0 ? 6 : 4;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x44000000000LL) >> 4);
  if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(v12);
  if ( a2 )
  {
    if ( (v11 & 1) != 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v14 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL);
        KeCopyPage(v14, (__int64)(a3 << 25) >> 16);
        if ( (MiFlags & 0x4000000) == 0 )
        {
          v15 = (unsigned int)(1 << a2);
          if ( ((unsigned __int8)v15 & (unsigned __int8)byte_140C506CE) != 0 )
          {
            v16 = (_QWORD *)v14;
            if ( v14 < (unsigned __int64)(v14 + 4096) )
            {
              do
              {
                v17 = MI_READ_PTE_LOCK_FREE(v16);
                if ( (v17 & 1) != 0 && (v17 & 0x20) != 0 )
                  *v16 &= ~0x20uLL;
                ++v16;
              }
              while ( (unsigned __int64)v16 < v14 + 4096 );
            }
          }
        }
        LOBYTE(v15) = 17;
        MiUnmapPageInHyperSpaceWorker(v14, v15, 0x80000000LL);
      }
      else
      {
        MxCopyPage(v12);
      }
    }
  }
  else
  {
    if ( (v11 & 1) != 0 )
    {
      if ( (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v39) >> 12) & 0xFFFFFFFFFFLL) == qword_140C532D8 )
        goto LABEL_21;
      v13 = *(_QWORD *)((__int64)(a3 << 25) >> 16);
    }
    else
    {
      v13 = *(_QWORD *)(v5 + 352);
    }
    MiFillPhysicalPages(v12, v10, v13);
  }
LABEL_21:
  LeafVa = MiGetLeafVa(a3);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v9 = 1;
  }
  else if ( LeafVa <= 0x7FFFFFFEFFFFLL
         || LeafVa >= qword_140C540C0 && LeafVa <= qword_140C51BF0
         || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 4;
  }
  v19 = v40;
  *v40 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v21 = v38 | 0x90000000;
  if ( a2 )
    v21 = v38 | 0x98000000;
  ValidPte = MiMakeValidPte(a3, v12, v21);
  v39 = ValidPte;
  if ( (MiFlags & 0x4000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C506CE) != 0 )
  {
    ValidPte &= ~0x20uLL;
    v39 = ValidPte;
  }
  if ( a2 == 3 && (MiFlags & 0x30) != 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      ContainingPageTable = v12;
      ValidPte = v39;
      Process = KeGetCurrentThread()->ApcState.Process;
      v24 = Process[1].Affinity.StaticBitmap[25];
      MiUpdateSessionPxeMaster((__int64)Process, v39);
      MiSetPageTablePfnBuddy(v19, v24, 0LL);
    }
    else if ( v9 < 4 )
    {
      if ( PsInitialSystemProcess )
        ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
      else
        ContainingPageTable = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
    }
  }
  MiInitializePfnForOtherProcess(v12, a3, ContainingPageTable, 512LL);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v25 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v25 & 1) == 0 )
  {
    v26 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(a3);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_52;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v26 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_52;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_52;
    }
    if ( (ValidPte & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_52:
    *(_QWORD *)a3 = ValidPte;
    if ( v26 )
      LOBYTE(CurrentThread) = MiWritePteShadow(a3, ValidPte);
    if ( a2 != 3 )
      goto LABEL_55;
LABEL_72:
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
          v32 = SchedulerAssist[5];
          v30 = LockHandle.OldIrql + 1;
LABEL_63:
          LODWORD(CurrentThread) = ~(unsigned __int16)(-1LL << v30);
          v33 = (unsigned int)CurrentThread & v32;
          SchedulerAssist[5] = v33;
          if ( !v33 )
            LOBYTE(CurrentThread) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
LABEL_65:
    __writecr8(OldIrql);
    return (char)CurrentThread;
  }
  if ( (v25 & 0x20) != 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C506CE) != 0 )
    MiClearPteAccessedBitRange(a1, a2, a3);
  LOBYTE(CurrentThread) = MiTransformValidPteInPlace((volatile signed __int64 *)a3, a3, ValidPte, a2);
  if ( a2 == 3 )
  {
    MiInsertRecursiveTbFlushEntries(a5, 3, a3);
    goto LABEL_72;
  }
LABEL_55:
  if ( !a2 )
  {
    LOBYTE(CurrentThread) = v35;
    if ( *(_DWORD *)(v35 + 120) == 4 )
    {
      OldIrql = (unsigned __int8)MiLockPageInline(v19);
      *((_WORD *)v19 + 16) = 2;
      _InterlockedAnd64(v19 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(CurrentThread) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(CurrentThread) = KeGetCurrentIrql();
          if ( (unsigned __int8)CurrentThread <= 0xFu
            && (unsigned __int8)OldIrql <= 0xFu
            && (unsigned __int8)CurrentThread >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v30 = OldIrql + 1;
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = SchedulerAssist[5];
            goto LABEL_63;
          }
        }
      }
      goto LABEL_65;
    }
  }
  return (char)CurrentThread;
}
