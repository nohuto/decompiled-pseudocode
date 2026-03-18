/*
 * XREFs of MiSessionInsertImage @ 0x1402D9A54
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402D8E9C (MmLockLoadedModuleListExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiBytesToMapSystemImage @ 0x1406F57B8 (MiBytesToMapSystemImage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  PVOID Pool; // rbp
  unsigned __int64 v7; // rsi
  int v8; // eax
  int v9; // r13d
  volatile LONG *SharedVm; // rbx
  __int64 *v11; // rbx
  char v12; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // bl
  __int64 v16; // rdx
  unsigned __int8 v17; // bl
  __int64 *v19; // rax
  int active; // ebx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  unsigned __int64 SessionVm; // [rsp+20h] [rbp-F8h]
  __int64 v31; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v32; // [rsp+30h] [rbp-E8h]
  __int64 v33[27]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+130h] [rbp+18h] BYREF
  KIRQL v36; // [rsp+138h] [rbp+20h]

  v35 = a3;
  v4 = 0;
  LOBYTE(v35) = 0;
  memset(v33, 0, 0x98uLL);
  v32 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  v5 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v32 + 366));
  SessionVm = MiGetSessionVm();
  Pool = MiAllocatePool(64, 0x60uLL, 0x69486D4Du);
  if ( !Pool )
    return 3221225495LL;
  v7 = *(unsigned int *)(*a2 + 8);
  if ( *(_DWORD *)(*a2 + 8) && !(unsigned int)MiChargeCommit(v5, (unsigned int)v7, 0LL) )
  {
    active = -1073741670;
LABEL_29:
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)active;
  }
  v31 = MiBytesToMapSystemImage(v7 << 12);
  v8 = MiControlAreaRequiresCharge((__int64)a2);
  v9 = v8;
  if ( !v8 )
  {
    MiReturnCommit(v5, v7);
    active = -1073740277;
    goto LABEL_29;
  }
  if ( v8 == 2 )
  {
    active = MiReferenceActiveSubsection(a2 + 16, 264, 0x11u);
    if ( active < 0 )
    {
      MiReturnCommit(v5, v7);
      goto LABEL_29;
    }
  }
  SharedVm = (volatile LONG *)MiGetSharedVm(SessionVm);
  v36 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  MmLockLoadedModuleListExclusive((unsigned __int8 *)&v35);
  v11 = *(__int64 **)(v32 + 80);
  v12 = 0;
  if ( !v11 )
  {
LABEL_7:
    memset(Pool, 0, 0x60uLL);
    *((_QWORD *)Pool + 5) = a1 | 3;
    *((_QWORD *)Pool + 9) = v7;
    *((_QWORD *)Pool + 6) = a1 + v31 - 1;
    *((_DWORD *)Pool + 15) = 1;
    *((_DWORD *)Pool + 14) = *(_DWORD *)(v32 + 8);
    *((_QWORD *)Pool + 10) = a2;
    *((_QWORD *)Pool + 11) = -2LL;
    if ( v9 == 2 )
      *((_BYTE *)Pool + 65) = 1;
    LOBYTE(v13) = v12;
    RtlAvlInsertNodeEx(v32 + 80, v11, v13, Pool);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v15 = v35;
      if ( (unsigned __int8)v35 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = v35;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
        v25 = (v29 & SchedulerAssist[5]) == 0;
        v14 = (unsigned int)v29 & SchedulerAssist[5];
        SchedulerAssist[5] = v14;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v15 = v35;
    }
    __writecr8(v15);
    LOBYTE(v14) = v36;
    MiUnlockWorkingSetExclusive(SessionVm, v14);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 40), v7);
    v33[0] = (__int64)a2;
    MiManageSubsectionView(v33, (_QWORD *)Pool + 3, 3);
    return v4;
  }
  while ( a1 > v11[6] )
  {
    v19 = (__int64 *)v11[1];
    if ( !v19 )
    {
      v12 = 1;
      goto LABEL_7;
    }
LABEL_19:
    v11 = v19;
  }
  if ( a1 < (v11[5] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v19 = (__int64 *)*v11;
    if ( !*v11 )
      goto LABEL_7;
    goto LABEL_19;
  }
  ++*((_DWORD *)v11 + 15);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v21 = KeGetCurrentIrql(), v21 <= 0xFu) )
  {
    v17 = v35;
    if ( (unsigned __int8)v35 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v17 = v35;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
      v25 = (v24 & v23[5]) == 0;
      v16 = (unsigned int)v24 & v23[5];
      v23[5] = v16;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  else
  {
    v17 = v35;
  }
  __writecr8(v17);
  LOBYTE(v16) = v36;
  MiUnlockWorkingSetExclusive(SessionVm, v16);
  v4 = 272;
  ExFreePoolWithTag(Pool, 0);
  MiReturnCommit(v5, v7);
  if ( v9 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return v4;
}
