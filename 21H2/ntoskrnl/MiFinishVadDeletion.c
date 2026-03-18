/*
 * XREFs of MiFinishVadDeletion @ 0x14030FEC0
 * Callers:
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1405B204C (MiUnlockAndDereferenceNestedVad.c)
 *     MiRemoveVadCharges @ 0x1407BC750 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x1407BC8F0 (MiReturnVadQuota.c)
 *     MiDeleteVadHotPatchState @ 0x140972F98 (MiDeleteVadHotPatchState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v5; // r10d
  unsigned int v8; // edx
  _KPROCESS *Process; // rbx
  int v10; // ecx
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  ULONG_PTR v13; // rbp
  struct _KTHREAD *v14; // r15
  __int64 SessionId; // r8
  char *p_Process; // rbx
  __int64 SchedulerAssist; // r9
  __int64 v18; // rdx
  bool v19; // zf
  unsigned __int64 v20; // r13
  _QWORD *v21; // r12
  _KPROCESS *v22; // rbx
  int *v23; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  signed __int32 v27; // eax
  struct _KTHREAD *v28; // rbp
  struct _KTHREAD *v29; // r15
  __int64 v30; // r8
  char *v31; // rbx
  __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // [rsp+30h] [rbp-58h]
  int v38; // [rsp+90h] [rbp+8h]
  BOOL v39; // [rsp+98h] [rbp+10h]
  __int64 v40; // [rsp+A0h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v5 = P[12];
  v40 = (__int64)CurrentThread;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v5 & 4) != 0 )
  {
    v10 = 1;
    v38 = 1;
    if ( (v5 & 0x200000) == 0 )
    {
      v34 = P[13];
      LODWORD(v34) = v34 & 0x7FFFFFFF;
      if ( (v34 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL )
        v8 = 1;
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
    v38 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.StaticBitmap[5] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.StaticBitmap[1] -= a3 - a2 + 1;
    v5 = P[12];
  }
  v11 = Process[1].ActiveProcessors.StaticBitmap[28];
  v37 = v11;
  if ( (v5 & 0x200000) == 0 && (v5 & 0x70) == 0x20 && (v5 & 0x400000) != 0 )
    --*(_QWORD *)(v11 + 368);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 280));
    v12 = P[12];
    if ( MiVadPageSizes[(v12 >> 19) & 3] == 16 )
    {
      if ( (v12 & 0x200000) != 0 )
        --*(_QWORD *)(v11 + 408);
      else
        --*(_QWORD *)(v11 + 416);
    }
    MiReturnVadQuota(P, Process, v8);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v13 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[7];
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[7],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.StaticBitmap[7]);
  v14 = KeGetCurrentThread();
  if ( v13 - qword_140C50630 < 0x8000000000LL )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  _disable();
  p_Process = (char *)&v14[1].Process;
  SchedulerAssist = 0x7FFFFFFFFFFFFFFCLL;
  v18 = 0LL;
  do
  {
    if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
      && p_Process[18]
      && (*(_DWORD *)p_Process & 1) == 0
      && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
    {
      p_Process[18] = 0;
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v18, SessionId);
        _disable();
      }
      SessionId = *((unsigned int *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      SchedulerAssist = (unsigned __int8)p_Process[16];
      v14->AbEntrySummary |= 1 << SchedulerAssist;
      _enable();
      if ( (_DWORD)SessionId )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, v13, SessionId);
      goto LABEL_23;
    }
    v18 = (unsigned int)(v18 + 1);
    p_Process += 96;
  }
  while ( (unsigned int)v18 < 6 );
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v13, (unsigned int)SessionId, 0LL);
  _enable();
LABEL_23:
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v20 = 0LL;
  if ( v38 )
  {
    v21 = 0LL;
    v22 = KeGetCurrentThread()->ApcState.Process;
    if ( (v22[1].IdealProcessor[30] & 7) == 2 )
      v23 = (int *)&unk_140C53D00;
    else
      v23 = (int *)&v22[1].IdealNode[2];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
      SessionId = *(unsigned int *)(SchedulerAssist + 20);
      *(_DWORD *)(SchedulerAssist + 20) = SessionId | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v23, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v23, CurrentIrql, SessionId, SchedulerAssist);
    v23[1] = 0;
    v25 = *((_QWORD *)P + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v25 )
    {
      do
      {
        v35 = *(_QWORD *)v25;
        if ( (*(_DWORD *)(v25 + 64) & 1) != 0 )
        {
          *(_QWORD *)v25 = v20;
          v20 = v25;
          if ( v21 )
            *v21 = v35;
          else
            *((_QWORD *)P + 7) = v35 | P[14] & 0xF;
        }
        else
        {
          v21 = (_QWORD *)v25;
        }
        v25 = v35;
      }
      while ( v35 );
    }
    MiUnlockWorkingSetExclusive((__int64)&v22[1].ActiveProcessors.StaticBitmap[26], CurrentIrql);
    *((_QWORD *)P + 2) = -1LL;
    if ( v20 )
      --*(_WORD *)(v40 + 484);
    v26 = P[12];
    if ( (v26 & 0x200000) == 0 && (v26 & 0x70) == 0x20 && (v26 & 0x1800000) != 0 )
      MiDeleteVadHotPatchState(P);
  }
  if ( (a4 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v27 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
    if ( v27 == -1 )
      __fastfail(0xEu);
    v39 = !v27 && (P[12] & 4) != 0;
    v28 = KeGetCurrentThread();
    LOBYTE(v28[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 10);
    v29 = KeGetCurrentThread();
    if ( (unsigned __int64)P - qword_140C50630 + 40 < 0x8000000000LL )
      v30 = (unsigned int)MmGetSessionIdEx((__int64)v29->ApcState.Process);
    else
      v30 = 0xFFFFFFFFLL;
    _disable();
    v31 = (char *)&v29[1].Process;
    v32 = 0LL;
    do
    {
      if ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
        && v31[18]
        && (*(_DWORD *)v31 & 1) == 0
        && *((_DWORD *)v31 + 2) == (_DWORD)v30 )
      {
        v31[18] = 0;
        if ( *(__int64 *)v31 < 0 )
        {
          *v31 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v31, v32, v30);
          _disable();
        }
        v33 = *((_DWORD *)v31 + 22);
        *((_DWORD *)v31 + 22) = 0;
        v31[17] = 0;
        *(_QWORD *)v31 = 0LL;
        v29->AbEntrySummary |= 1 << v31[16];
        _enable();
        if ( v33 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v29, (__int64)(P + 10), v33);
        goto LABEL_52;
      }
      v32 = (unsigned int)(v32 + 1);
      v31 += 96;
    }
    while ( (unsigned int)v32 < 6 );
    if ( (*((_DWORD *)&v29->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v29, (ULONG_PTR)(P + 10), (unsigned int)v30, 0LL);
    _enable();
LABEL_52:
    v19 = v28->SpecialApcDisable++ == -1;
    if ( v19 && ($CEA84C04E3712D858E5667A507841A2A *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
      KiCheckForKernelApcDelivery();
    if ( v39 )
      ExFreePoolWithTag(P, 0);
  }
  if ( v20 )
  {
    do
    {
      v36 = *(_QWORD *)v20;
      KeSignalGate((_DWORD *)(v20 + 8), 1);
      v20 = v36;
    }
    while ( v36 );
    KeLeaveCriticalRegionThread(v40);
  }
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 280), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v37 + 304), 0, 0);
  }
}
