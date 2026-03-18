/*
 * XREFs of MiLockStealUserVm @ 0x14034C738
 * Callers:
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     MiVadPagesTradable @ 0x1402ACB38 (MiVadPagesTradable.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     MiPrepareAttachThread @ 0x1402D0024 (MiPrepareAttachThread.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1402EA0C8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiSmallVaStillMapsFrame @ 0x14031E0F8 (MiSmallVaStillMapsFrame.c)
 *     MiUnlockStealVm @ 0x14034B18C (MiUnlockStealVm.c)
 *     MiGetTopLevelPfn @ 0x14034D5B0 (MiGetTopLevelPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiClusterVadActive @ 0x14054FBB4 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  __int64 TopLevelPfn; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  __int64 v29; // r13
  __int64 v30; // rcx
  LONG *SharedVm; // rbx
  char v32; // al
  __int64 **v33; // rbx
  __int64 v34; // r8
  unsigned __int64 v35; // r15
  __int64 **Address; // rax
  __int64 v37; // rcx
  __int64 v38; // r10
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  unsigned __int64 valid; // rax
  __int64 v42; // rcx
  unsigned int v43; // ecx
  unsigned __int64 v44; // [rsp+20h] [rbp-50h] BYREF
  __int64 v45; // [rsp+28h] [rbp-48h]
  __int64 v46; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v48[2]; // [rsp+50h] [rbp-20h] BYREF
  int v50; // [rsp+B8h] [rbp+48h]
  BOOL v52; // [rsp+D0h] [rbp+60h]

  v6 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (__int64)(a4 << 25) >> 16;
  v52 = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  v9 = 2;
  v10 = (__int64)(a2 + 0x58000000000LL) / 48;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  v14 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v45 = v14 + 1664;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v14 == PsIdleProcess
    || (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) == v10 && (*(_DWORD *)(v14 + 2172) & 0x1000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_14;
  }
  if ( (_KPROCESS *)v14 == KeGetCurrentThread()->ApcState.Process )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v19 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else
  {
    if ( !MiTryToAcquireExpansionLockAtDpc(&LockHandle, 0x7FFFFFFFFFFFFFFFLL, v12, v13) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_14:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v15 >= 2u )
          {
            v16 = KeGetCurrentPrcb();
            v17 = v16->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v19 = (v18 & v17[5]) == 0;
            v17[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    v50 = MiPrepareAttachThread(v14, v14 + 1664);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v19 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    __writecr8(v6);
    if ( !v50 )
      return 0LL;
    *(_QWORD *)(a5 + 64) = v14 + 1664;
    KeForceAttachProcess(v14, a5 + 72);
  }
  v29 = v45;
  v30 = v45;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 24) = v30;
  if ( v52 )
  {
    *(_BYTE *)(a5 + 37) |= 1u;
    SharedVm = MiGetSharedVm(v30);
    v32 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    v32 = MiLockWorkingSetShared(v30);
  }
  *(_BYTE *)(a5 + 36) = v32;
  if ( (*(_DWORD *)(a5 + 8) & 8) != 0 )
  {
    v33 = 0LL;
  }
  else
  {
    Address = MiLocateAddress(v8);
    v33 = Address;
    if ( !Address )
      goto LABEL_53;
    if ( !(unsigned int)MiVadPagesTradable((__int64)Address) )
    {
      if ( (*(_BYTE *)(v37 + 48) & 0x70) != 0x40 )
      {
LABEL_52:
        v9 = 0;
        goto LABEL_53;
      }
      *(_DWORD *)(a5 + 8) |= 0x800u;
    }
  }
  if ( v52 )
  {
    if ( MiSmallVaStillMapsFrame(v8, (__int64)(a2 + 0x58000000000LL) / 48) )
    {
      v35 = a4;
      goto LABEL_61;
    }
LABEL_53:
    MiUnlockStealVm(a5);
    return v9;
  }
  v44 = 0LL;
  if ( (unsigned int)MiFastLockLeafPageTable(v29, v8, 0)
    && (memset(v48, 0, sizeof(v48)),
        MiFillPteHierarchy(v8, (unsigned __int64 *)v48),
        v39 = *((_QWORD *)v48 + v38),
        v40 = *((_QWORD *)v48 + (int)v38 - 1),
        v44 = v40,
        v39) )
  {
    v35 = a4;
  }
  else
  {
    v35 = a4;
    valid = MiLockLowestValidPageTable(v29, a4, &v44);
    v40 = v44;
    v39 = valid;
  }
  *(_QWORD *)(a5 + 40) = v39;
  if ( v40 != v35 )
    goto LABEL_53;
  v46 = MI_READ_PTE_LOCK_FREE(v40);
  if ( (v46 & 1) == 0
    || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v46) >> 12) & 0xFFFFFFFFFLL) != v10 )
  {
    goto LABEL_53;
  }
LABEL_61:
  if ( v10 > 0xFFFFFFFFFLL
    || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
    || *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || (unsigned int)MI_PFN_IS_PROTO(a2, a1, v34)
    || MiIsPfnFileOnly(v42)
    || MiIsPfnFromSlabAllocation(a2) )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a5 & 0x800000) != 0 )
  {
    if ( v33 )
    {
      v43 = *((_DWORD *)v33 + 12);
      if ( MiVadPageSizes[(v43 >> 18) & 3] == 16
        && (v43 & 0x100000) != 0
        && (unsigned int)MiClusterVadActive(v33, a2, a5 + 120) == 1 )
      {
        goto LABEL_52;
      }
    }
  }
  if ( (*(_DWORD *)(a5 + 8) & 0x800) != 0 && MiRotatedToFrameBuffer(v35) )
    goto LABEL_52;
  return 1LL;
}
