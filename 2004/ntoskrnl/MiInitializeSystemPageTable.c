/*
 * XREFs of MiInitializeSystemPageTable @ 0x1402E28D4
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402E2660 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E2C58 (MiInitializePfnForOtherProcess.c)
 *     MiFillPhysicalPages @ 0x1402F51CC (MiFillPhysicalPages.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14032E450 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140376EBC (MiTransformValidPteInPlace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateSessionPdeMaster @ 0x1403F2118 (MiUpdateSessionPdeMaster.c)
 */

__int64 __fastcall MiInitializeSystemPageTable(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5)
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
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // zf
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
         || LeafVa >= qword_140C4F938 && LeafVa <= qword_140C4E168
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
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) == 0 )
  {
    v19 = 0;
    result = MiPteInShadowRange(a3);
    if ( (_DWORD)result )
    {
      result = MiPteHasShadow(v22, v21, v23, v24);
      if ( (_DWORD)result )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v25 = (ValidPte & 1) == 0;
          goto LABEL_33;
        }
      }
      else
      {
        result = (__int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 )
        {
          v25 = (ValidPte & 1) == 0;
LABEL_33:
          if ( !v25 )
          {
            result = 0x8000000000000000uLL;
            ValidPte |= 0x8000000000000000uLL;
          }
        }
      }
    }
    *(_QWORD *)a3 = ValidPte;
    if ( v19 )
      result = MiWritePteShadow(a3, ValidPte);
    goto LABEL_39;
  }
  result = MiTransformValidPteInPlace(a3, a3, ValidPte, a2, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  if ( a2 != 3 )
    return result;
  result = MiInsertRecursiveTbFlushEntries(a5, 3LL, a3);
LABEL_39:
  if ( a2 == 3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v25 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
