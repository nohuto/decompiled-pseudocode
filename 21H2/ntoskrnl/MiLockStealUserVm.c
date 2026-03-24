/*
 * XREFs of MiLockStealUserVm @ 0x14026AFD4
 * Callers:
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14025C278 (KeForceAttachProcess.c)
 *     MiGetTopLevelPfn @ 0x14026A4F0 (MiGetTopLevelPfn.c)
 *     MiUnlockStealVm @ 0x14026D310 (MiUnlockStealVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140299518 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiRotatedToFrameBuffer @ 0x1402B0538 (MiRotatedToFrameBuffer.c)
 *     MiVadPagesTradable @ 0x1402BBEC0 (MiVadPagesTradable.c)
 *     MiSmallVaStillMapsFrame @ 0x1402CE1F8 (MiSmallVaStillMapsFrame.c)
 *     MiPrepareAttachThread @ 0x1402EF3D4 (MiPrepareAttachThread.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x14030C470 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiClusterVadActive @ 0x1405556A4 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  __int64 TopLevelPfn; // rax
  __int64 SchedulerAssist; // r8
  _DWORD *v13; // r9
  __int64 v14; // rdx
  ULONG_PTR v15; // r13
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r8
  int v25; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v28; // eax
  __int64 v29; // r13
  __int64 v30; // rcx
  LONG *SharedVm; // rbx
  char v32; // al
  __int64 **v33; // rbx
  __int64 v34; // r15
  __int64 **Address; // rax
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 valid; // rax
  __int64 v41; // rcx
  unsigned int v42; // ecx
  __int64 v43; // [rsp+20h] [rbp-50h] BYREF
  __int64 v44; // [rsp+28h] [rbp-48h]
  __int64 v45; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v47[2]; // [rsp+50h] [rbp-20h] BYREF
  int v49; // [rsp+B8h] [rbp+48h]
  BOOL v51; // [rsp+D0h] [rbp+60h]

  v6 = (unsigned __int8)a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = a4 << 25 >> 16;
  v51 = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  v9 = 2;
  v10 = (__int64)(a2 + 0x58000000000LL) / 48;
  TopLevelPfn = MiGetTopLevelPfn(
                  a2,
                  (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                  a3,
                  a4);
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v15 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v44 = v15 + 1664;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v15 == PsIdleProcess
    || (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) == v10 && (*(_DWORD *)(v15 + 2172) & 0x1000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_14;
  }
  if ( (_KPROCESS *)v15 == KeGetCurrentThread()->ApcState.Process )
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
          v13 = (_DWORD *)(-1LL << ((unsigned __int8)v6 + 1));
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)v13;
          v20 = (v28 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          v14 = (unsigned int)v28 & *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v14;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else
  {
    if ( !(unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle, 0x7FFFFFFFFFFFFFFFLL) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_14:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    v49 = MiPrepareAttachThread(v15, v15 + 1664);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v20 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(v6);
    if ( !v49 )
      return 0LL;
    *(_QWORD *)(a5 + 64) = v15 + 1664;
    KeForceAttachProcess(v15, a5 + 72);
  }
  v29 = v44;
  v30 = v44;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 24) = v30;
  if ( v51 )
  {
    *(_BYTE *)(a5 + 37) |= 1u;
    SharedVm = MiGetSharedVm(v30);
    v32 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    v32 = MiLockWorkingSetShared(v30, v14, SchedulerAssist, v13);
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
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      if ( (*(_DWORD *)(v36 + 48) & 0x70) != 0x40 )
      {
LABEL_52:
        v9 = 0;
        goto LABEL_53;
      }
      *(_DWORD *)(a5 + 8) |= 0x800u;
    }
  }
  if ( v51 )
  {
    if ( (unsigned int)MiSmallVaStillMapsFrame(v8, (__int64)(a2 + 0x58000000000LL) / 48) )
    {
      v34 = a4;
      goto LABEL_61;
    }
LABEL_53:
    MiUnlockStealVm(a5);
    return v9;
  }
  v43 = 0LL;
  if ( (unsigned int)MiFastLockLeafPageTable(v29, v8, 0)
    && (memset(v47, 0, sizeof(v47)),
        MiFillPteHierarchy(v8, v47),
        v38 = *((_QWORD *)v47 + v37),
        v39 = *((_QWORD *)v47 + (int)v37 - 1),
        v43 = v39,
        v38) )
  {
    v34 = a4;
  }
  else
  {
    v34 = a4;
    valid = MiLockLowestValidPageTable(v29, a4, &v43);
    v39 = v43;
    v38 = valid;
  }
  *(_QWORD *)(a5 + 40) = v38;
  if ( v39 != v34 )
    goto LABEL_53;
  v45 = MI_READ_PTE_LOCK_FREE(v39);
  if ( (v45 & 1) == 0 || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v45) >> 12) & 0xFFFFFFFFFLL) != v10 )
    goto LABEL_53;
LABEL_61:
  if ( v10 > 0xFFFFFFFFFLL
    || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
    || *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || (unsigned int)MI_PFN_IS_PROTO(a2)
    || MiIsPfnFileOnly(v41)
    || (unsigned int)MiIsPfnFromSlabAllocation(a2) )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a5 & 0x800000) != 0 )
  {
    if ( v33 )
    {
      v42 = *((_DWORD *)v33 + 12);
      if ( MiVadPageSizes[(v42 >> 18) & 3] == 16
        && (v42 & 0x100000) != 0
        && (unsigned int)MiClusterVadActive(v33, a2, a5 + 120) == 1 )
      {
        goto LABEL_52;
      }
    }
  }
  if ( (*(_DWORD *)(a5 + 8) & 0x800) != 0 && (unsigned int)MiRotatedToFrameBuffer(v34) )
    goto LABEL_52;
  return 1LL;
}
