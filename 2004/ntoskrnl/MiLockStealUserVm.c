/*
 * XREFs of MiLockStealUserVm @ 0x14031D3F8
 * Callers:
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14024D7DC (KeForceAttachProcess.c)
 *     MiVadPagesTradable @ 0x140253B08 (MiVadPagesTradable.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x140259460 (MiFillPteHierarchy.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiGetTopLevelPfn @ 0x1402D5600 (MiGetTopLevelPfn.c)
 *     MiUnlockStealVm @ 0x14031BE4C (MiUnlockStealVm.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x14031D910 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiPrepareAttachThread @ 0x14031E524 (MiPrepareAttachThread.c)
 *     MiSmallVaStillMapsFrame @ 0x140320F80 (MiSmallVaStillMapsFrame.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiClusterVadActive @ 0x140550204 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  __int64 TopLevelPfn; // rax
  ULONG_PTR v12; // r13
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r8
  int v22; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  __int64 v27; // r13
  __int64 v28; // rcx
  LONG *SharedVm; // rbx
  char v30; // al
  __int64 **v31; // rbx
  unsigned __int64 v32; // r15
  __int64 **Address; // rax
  __int64 v34; // rcx
  __int64 v35; // r10
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  unsigned __int64 valid; // rax
  __int64 v39; // rcx
  unsigned int v40; // ecx
  unsigned __int64 v41; // [rsp+20h] [rbp-50h] BYREF
  __int64 v42; // [rsp+28h] [rbp-48h]
  __int64 v43; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v45[2]; // [rsp+50h] [rbp-20h] BYREF
  int v47; // [rsp+B8h] [rbp+48h]
  BOOL v49; // [rsp+D0h] [rbp+60h]

  v6 = (unsigned __int8)a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (__int64)(a4 << 25) >> 16;
  v49 = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  v9 = 2;
  v10 = (__int64)(a2 + 0x58000000000LL) / 48;
  TopLevelPfn = MiGetTopLevelPfn(
                  a2,
                  (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                  a3,
                  a4);
  v12 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v42 = v12 + 1664;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v12 == PsIdleProcess
    || (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) == v10 && (*(_DWORD *)(v12 + 2172) & 0x1000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_14;
  }
  if ( (_KPROCESS *)v12 == KeGetCurrentThread()->ApcState.Process )
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
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v17 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v17 )
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
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = v14->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    v47 = MiPrepareAttachThread(v12, v12 + 1664);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v17 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(v6);
    if ( !v47 )
      return 0LL;
    *(_QWORD *)(a5 + 64) = v12 + 1664;
    KeForceAttachProcess(v12, a5 + 72);
  }
  v27 = v42;
  v28 = v42;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 24) = v28;
  if ( v49 )
  {
    *(_BYTE *)(a5 + 37) |= 1u;
    SharedVm = MiGetSharedVm(v28);
    v30 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    v30 = MiLockWorkingSetShared(v28);
  }
  *(_BYTE *)(a5 + 36) = v30;
  if ( (*(_DWORD *)(a5 + 8) & 8) != 0 )
  {
    v31 = 0LL;
  }
  else
  {
    Address = MiLocateAddress(v8);
    v31 = Address;
    if ( !Address )
      goto LABEL_53;
    if ( !(unsigned int)MiVadPagesTradable((__int64)Address) )
    {
      if ( (*(_BYTE *)(v34 + 48) & 0x70) != 0x40 )
      {
LABEL_52:
        v9 = 0;
        goto LABEL_53;
      }
      *(_DWORD *)(a5 + 8) |= 0x800u;
    }
  }
  if ( v49 )
  {
    if ( (unsigned int)MiSmallVaStillMapsFrame(v8, (__int64)(a2 + 0x58000000000LL) / 48) )
    {
      v32 = a4;
      goto LABEL_61;
    }
LABEL_53:
    MiUnlockStealVm(a5);
    return v9;
  }
  v41 = 0LL;
  if ( (unsigned int)MiFastLockLeafPageTable(v27, v8, 0)
    && (memset(v45, 0, sizeof(v45)),
        MiFillPteHierarchy(v8, (unsigned __int64 *)v45),
        v36 = *((_QWORD *)v45 + v35),
        v37 = *((_QWORD *)v45 + (int)v35 - 1),
        v41 = v37,
        v36) )
  {
    v32 = a4;
  }
  else
  {
    v32 = a4;
    valid = MiLockLowestValidPageTable(v27, a4, &v41);
    v37 = v41;
    v36 = valid;
  }
  *(_QWORD *)(a5 + 40) = v36;
  if ( v37 != v32 )
    goto LABEL_53;
  v43 = MI_READ_PTE_LOCK_FREE(v37);
  if ( (v43 & 1) == 0
    || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v43) >> 12) & 0xFFFFFFFFFLL) != v10 )
  {
    goto LABEL_53;
  }
LABEL_61:
  if ( v10 > 0xFFFFFFFFFLL
    || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
    || *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || (unsigned int)MI_PFN_IS_PROTO(a2)
    || MiIsPfnFileOnly(v39)
    || MiIsPfnFromSlabAllocation(a2) )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a5 & 0x800000) != 0 )
  {
    if ( v31 )
    {
      v40 = *((_DWORD *)v31 + 12);
      if ( MiVadPageSizes[(v40 >> 18) & 3] == 16
        && (v40 & 0x100000) != 0
        && (unsigned int)MiClusterVadActive(v31, a2, a5 + 120) == 1 )
      {
        goto LABEL_52;
      }
    }
  }
  if ( (*(_DWORD *)(a5 + 8) & 0x800) != 0 && (unsigned int)MiRotatedToFrameBuffer(v32) )
    goto LABEL_52;
  return 1LL;
}
