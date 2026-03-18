/*
 * XREFs of MiSessionInsertImage @ 0x1403A20B4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiGetSystemAddressForImage @ 0x140757814 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x1402986E0 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x140371D6C (MmLockLoadedModuleListExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140528E24 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiBytesToMapSystemImage @ 0x1406CC058 (MiBytesToMapSystemImage.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 *a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // r14
  _QWORD *Pool; // rbp
  unsigned __int64 v6; // rsi
  int v7; // eax
  int v8; // r13d
  LONG *SharedVm; // rbx
  unsigned __int64 v10; // rbx
  bool v11; // r15
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // bl
  unsigned __int64 v15; // rax
  int active; // ebx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  unsigned __int64 SessionVm; // [rsp+20h] [rbp-E8h]
  __int64 v27; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+30h] [rbp-D8h]
  __int64 v29[25]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v31; // [rsp+120h] [rbp+18h] BYREF
  KIRQL v32; // [rsp+128h] [rbp+20h]

  v3 = 0;
  v31 = 0;
  memset(v29, 0, 0x90uLL);
  v28 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  v4 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v28 + 430));
  SessionVm = MiGetSessionVm();
  Pool = MiAllocatePool(64, 0x60uLL, 0x69486D4Du);
  if ( !Pool )
    return 3221225495LL;
  v6 = *(unsigned int *)(*a2 + 8);
  if ( *(_DWORD *)(*a2 + 8) && !(unsigned int)MiChargeCommit(v4, (unsigned int)v6, 0) )
  {
    active = -1073741670;
LABEL_29:
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)active;
  }
  v27 = MiBytesToMapSystemImage(v6 << 12);
  v7 = MiControlAreaRequiresCharge((__int64)a2);
  v8 = v7;
  if ( !v7 )
  {
    MiReturnCommit(v4, v6);
    active = -1073740277;
    goto LABEL_29;
  }
  if ( v7 == 2 )
  {
    active = MiReferenceActiveSubsection(a2 + 16, 264, 0x11u);
    if ( active < 0 )
    {
      MiReturnCommit(v4, v6);
      goto LABEL_29;
    }
  }
  SharedVm = MiGetSharedVm(SessionVm);
  v32 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MmLockLoadedModuleListExclusive(&v31);
  v10 = *(_QWORD *)(v28 + 88);
  v11 = 0;
  if ( !v10 )
  {
LABEL_7:
    memset(Pool, 0, 0x60uLL);
    Pool[5] = a1 | 3;
    Pool[9] = v6;
    Pool[6] = a1 + v27 - 1;
    *((_DWORD *)Pool + 15) = 1;
    *((_DWORD *)Pool + 14) = *(_DWORD *)(v28 + 8);
    Pool[10] = a2;
    Pool[11] = -2LL;
    if ( v8 == 2 )
      *((_BYTE *)Pool + 65) = 1;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v28 + 88), v10, v11, Pool);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v12 = v31;
      if ( v31 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = v31;
        v25 = ~(unsigned __int16)(-1LL << (v31 + 1));
        v21 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v12 = v31;
    }
    __writecr8(v12);
    MiUnlockWorkingSetExclusive(SessionVm, v32);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 48), v6);
    v29[0] = (__int64)a2;
    MiManageSubsectionView(v29, Pool + 3, 3);
    return v3;
  }
  while ( a1 > *(_QWORD *)(v10 + 48) )
  {
    v15 = *(_QWORD *)(v10 + 8);
    if ( !v15 )
    {
      v11 = 1;
      goto LABEL_7;
    }
LABEL_19:
    v10 = v15;
  }
  if ( a1 < (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v15 = *(_QWORD *)v10;
    if ( !*(_QWORD *)v10 )
      goto LABEL_7;
    goto LABEL_19;
  }
  ++*(_DWORD *)(v10 + 60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v17 = KeGetCurrentIrql(), v17 <= 0xFu) )
  {
    v13 = v31;
    if ( v31 <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v13 = v31;
      v20 = ~(unsigned __int16)(-1LL << (v31 + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  else
  {
    v13 = v31;
  }
  __writecr8(v13);
  MiUnlockWorkingSetExclusive(SessionVm, v32);
  v3 = 272;
  ExFreePoolWithTag(Pool, 0);
  MiReturnCommit(v4, v6);
  if ( v8 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return v3;
}
