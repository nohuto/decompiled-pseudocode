/*
 * XREFs of MiLockStealUserVm @ 0x140258F74
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140215EF8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiVadPagesTradable @ 0x14023A0D0 (MiVadPagesTradable.c)
 *     MiSmallVaStillMapsFrame @ 0x14024C6F8 (MiSmallVaStillMapsFrame.c)
 *     MiGetTopLevelPfn @ 0x140258490 (MiGetTopLevelPfn.c)
 *     MiUnlockStealVm @ 0x14025B2B0 (MiUnlockStealVm.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14027D7E8 (KeForceAttachProcess.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiPrepareAttachThread @ 0x1402FA124 (MiPrepareAttachThread.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiClusterVadActive @ 0x1405558E4 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  __int64 TopLevelPfn; // rax
  __int64 v12; // rdx
  ULONG_PTR v13; // r13
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  ULONG_PTR v28; // r13
  ULONG_PTR v29; // rcx
  __int64 SharedVm; // rbx
  KIRQL v31; // al
  __int64 v32; // rbx
  unsigned __int64 v33; // r15
  __int64 Address; // rax
  __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 valid; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // ecx
  __int64 v44; // [rsp+20h] [rbp-50h] BYREF
  ULONG_PTR v45; // [rsp+28h] [rbp-48h]
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
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  v13 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v45 = v13 + 1664;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v13 == PsIdleProcess
    || (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) == v10 && (*(_DWORD *)(v13 + 2172) & 0x1000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_14;
  }
  if ( (_KPROCESS *)v13 == KeGetCurrentThread()->ApcState.Process )
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
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v18 = (v27 & SchedulerAssist[5]) == 0;
          v12 = (unsigned int)v27 & SchedulerAssist[5];
          SchedulerAssist[5] = v12;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else
  {
    if ( !MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_14:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    v50 = MiPrepareAttachThread(v13, v13 + 1664);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v18 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v6);
    if ( !v50 )
      return 0LL;
    *(_QWORD *)(a5 + 64) = v13 + 1664;
    KeForceAttachProcess(v13);
  }
  v28 = v45;
  v29 = v45;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 24) = v29;
  if ( v52 )
  {
    *(_BYTE *)(a5 + 37) |= 1u;
    SharedVm = MiGetSharedVm(v29, v12);
    v31 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  else
  {
    v31 = MiLockWorkingSetShared(v29);
  }
  *(_BYTE *)(a5 + 36) = v31;
  if ( (*(_DWORD *)(a5 + 8) & 8) != 0 )
  {
    v32 = 0LL;
  }
  else
  {
    Address = MiLocateAddress(v8);
    v32 = Address;
    if ( !Address )
      goto LABEL_53;
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      if ( (*(_BYTE *)(v35 + 48) & 0x70) != 0x40 )
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
      v33 = a4;
      goto LABEL_61;
    }
LABEL_53:
    MiUnlockStealVm(a5);
    return v9;
  }
  v44 = 0LL;
  if ( (unsigned int)MiFastLockLeafPageTable(v28, v8, 0LL)
    && (memset(v48, 0, sizeof(v48)),
        MiFillPteHierarchy(v8, v48),
        v37 = *((_QWORD *)v48 + v36),
        v38 = *((_QWORD *)v48 + (int)v36 - 1),
        v44 = v38,
        v37) )
  {
    v33 = a4;
  }
  else
  {
    v33 = a4;
    valid = MiLockLowestValidPageTable(v28, a4, &v44);
    v38 = v44;
    v37 = valid;
  }
  *(_QWORD *)(a5 + 40) = v37;
  if ( v38 != v33 )
    goto LABEL_53;
  v46 = MI_READ_PTE_LOCK_FREE(v38);
  if ( (v46 & 1) == 0 || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v46) >> 12) & 0xFFFFFFFFFLL) != v10 )
    goto LABEL_53;
LABEL_61:
  if ( v10 > 0xFFFFFFFFFLL
    || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
    || *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || (unsigned int)MI_PFN_IS_PROTO(a2)
    || (unsigned int)MiIsPfnFileOnly(v41, v40, v42) == 1
    || (unsigned int)MiIsPfnFromSlabAllocation(a2) )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a5 & 0x800000) != 0 )
  {
    if ( v32 )
    {
      v43 = *(_DWORD *)(v32 + 48);
      if ( MiVadPageSizes[(v43 >> 18) & 3] == 16
        && (v43 & 0x100000) != 0
        && (unsigned int)MiClusterVadActive(v32, a2, a5 + 120) == 1 )
      {
        goto LABEL_52;
      }
    }
  }
  if ( (*(_DWORD *)(a5 + 8) & 0x800) != 0 && MiRotatedToFrameBuffer(v33) )
    goto LABEL_52;
  return 1LL;
}
