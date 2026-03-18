/*
 * XREFs of MiInsertVad @ 0x14030E390
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiInsertProcessVads @ 0x14070A1B8 (MiInsertProcessVads.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiVadMapsLargeImage @ 0x14030EC40 (MiVadMapsLargeImage.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAweViewInserter @ 0x14097C814 (MiAweViewInserter.c)
 */

char __fastcall MiInsertVad(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  int v15; // r15d
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v17; // r10
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v19; // rcx
  __int64 **v20; // rdx
  $CEA84C04E3712D858E5667A507841A2A *v21; // rax
  unsigned __int64 v22; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v24; // rdx
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  bool v30; // zf
  _QWORD *v31; // r14
  __int64 *v32; // rax
  __int64 v33; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rax
  struct _KTHREAD *v38; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v7 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 48);
  v11 = v9 | v8;
  if ( (v10 & 0x180000) == 0x80000 )
  {
    v12 = *(_QWORD *)(a2 + 1680);
    if ( (v10 & 0x200000) != 0 )
      ++*(_QWORD *)(v12 + 408);
    else
      ++*(_QWORD *)(v12 + 416);
  }
  if ( v7 <= *(_QWORD *)(a2 + 1496) >> 12 && (a3 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 1176) + ((v7 - v11 + 1) << 12);
    *(_QWORD *)(a2 + 1176) = v13;
    if ( *(_QWORD *)(a2 + 1168) < v13 )
      *(_QWORD *)(a2 + 1168) = v13;
  }
  v14 = *(unsigned int *)(a1 + 48);
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
  {
    if ( (v14 & 0x200000) != 0 && (v14 & 0x2000000) == 0 && (v14 & 0x4000000) != 0 )
      goto LABEL_15;
    v4 = MiLocateLockedVadEvent(a1, 256) + 8;
  }
  if ( (v14 & 0x200000) == 0 )
    goto LABEL_17;
LABEL_15:
  if ( (v14 & 0x800000) == 0 )
  {
    v14 &= 0x180000u;
    if ( (unsigned int)v14 < 0x100000 )
    {
LABEL_17:
      if ( !(unsigned int)MiVadMapsLargeImage(a1) )
        goto LABEL_20;
    }
  }
  if ( (unsigned __int64)MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3] >= 0x200 )
    ++*(_DWORD *)(a2 + 2140);
LABEL_20:
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 296LL);
  ++*(_QWORD *)(a2 + 2024);
  v15 = a3 & 1;
  if ( v15 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v19 = v17 + 284;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v19, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v19, CurrentIrql);
  }
  *(_QWORD *)(a2 + 2016) = a1;
  LOBYTE(v14) = 0;
  v20 = *(__int64 ***)(a2 + 2008);
  if ( v20 )
  {
    while ( 1 )
    {
      while ( v11 <= (*((unsigned int *)v20 + 7) | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32))
           && v11 < (*((unsigned int *)v20 + 6) | ((unsigned __int64)*((unsigned __int8 *)v20 + 32) << 32)) )
      {
        if ( !*v20 )
          goto LABEL_39;
        v20 = (__int64 **)*v20;
      }
      if ( !v20[1] )
        break;
      v20 = (__int64 **)v20[1];
    }
    LOBYTE(v14) = 1;
  }
LABEL_39:
  LOBYTE(v21) = RtlAvlInsertNodeEx(a2 + 2008, v20, v14, a1);
  if ( CurrentIrql != 17 )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22 + 284, retaddr);
    else
      *(_DWORD *)(v22 + 284) = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v24[6] - 1;
        v24[6] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v30 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    LOBYTE(v21) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
    {
      v31 = (_QWORD *)(a1 + 96);
      v32 = *(__int64 **)(a1 + 72);
      *(_QWORD *)(a1 + 112) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
      v33 = *v32;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v35 = (volatile signed __int64 *)(v33 + 104);
      ExAcquirePushLockExclusiveEx(v33 + 104, 0LL);
      if ( (*(_DWORD *)(v33 + 56) & 0x400) == 0 )
      {
        v36 = *(_QWORD *)(v33 + 8);
        v37 = (_QWORD *)(v33 + 8);
        if ( *(_QWORD *)(v36 + 8) != v33 + 8 )
          __fastfail(3u);
        *v31 = v36;
        v31[1] = v37;
        *(_QWORD *)(v36 + 8) = v31;
        *v37 = v31;
      }
      v38 = KeGetCurrentThread();
      if ( (_InterlockedExchangeAdd64(v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v35);
      LOBYTE(v21) = KeAbPostRelease((ULONG_PTR)v35);
      v30 = v38->SpecialApcDisable++ == -1;
      if ( v30 )
      {
        v21 = &v38->152;
        if ( ($CEA84C04E3712D858E5667A507841A2A *)v21->ApcState.ApcListHead[0].Flink != v21 )
          LOBYTE(v21) = KiCheckForKernelApcDelivery();
      }
    }
    if ( v4 )
      LOBYTE(v21) = MiAweViewInserter(KeGetCurrentThread()->ApcState.Process, v4);
  }
  return (char)v21;
}
