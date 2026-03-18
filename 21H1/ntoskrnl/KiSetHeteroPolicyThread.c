/*
 * XREFs of KiSetHeteroPolicyThread @ 0x14051A864
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x14050D860 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14050D87C (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1408ECE00 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14026D370 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x140302858 (KiSendSoftwareInterrupt.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140337BD0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140337C60 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1405196A0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1405197B8 (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x1405A1C84 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r13d
  int v5; // esi
  int v6; // r14d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // esi
  char v17; // al
  bool v18; // sf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rax
  _DWORD *v21; // r9
  int v22; // edx
  int v23; // eax
  __int64 v24; // rdi
  char v25; // cl
  unsigned __int64 v26; // rax
  char v27; // cl
  int v28; // ecx
  int v29; // r14d
  unsigned __int8 v30; // al
  __int64 v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // r12d
  unsigned int v34; // r13d
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KPRCB *v37; // rbx
  _DWORD *v38; // r9
  ULONG_PTR CurrentThread; // rdi
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _KPRCB *v43; // r14
  _DWORD *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  __int64 NextThread; // r14
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r8d
  bool v52; // zf
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  __int64 v59; // [rsp+30h] [rbp-40h] BYREF
  __int64 v60; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v61; // [rsp+40h] [rbp-30h]
  unsigned int v62; // [rsp+44h] [rbp-2Ch]
  int v63; // [rsp+48h] [rbp-28h] BYREF
  __int64 v64; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int64 *v65; // [rsp+58h] [rbp-18h] BYREF
  __int64 v66; // [rsp+60h] [rbp-10h] BYREF
  __int64 v67; // [rsp+68h] [rbp-8h] BYREF
  int v68; // [rsp+C0h] [rbp+50h] BYREF

  v64 = 0LL;
  v4 = (int)SchedulerAssist;
  v66 = 0LL;
  v5 = a3;
  v59 = 0LL;
  v6 = a2;
  v67 = 0LL;
  v60 = 0LL;
  v65 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v68 = 0;
  while ( 1 )
  {
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6];
        v10[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[6] - 1;
        v12[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v68, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = *(unsigned int *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  v61 = *(_DWORD *)(a1 + 588);
  v62 = v15;
  if ( v5 )
  {
    v16 = *(unsigned __int8 *)(a1 + 125);
    v17 = (*(_BYTE *)(a1 + 126) ^ v6) & 0x7F;
    v18 = ((v17 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v17;
    if ( v18 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v4 )
  {
LABEL_19:
    v16 = v6;
    goto LABEL_20;
  }
  v16 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_20:
  if ( v16 == 8 )
    v16 = KiDefaultHeteroCpuPolicy;
  if ( !KeHeteroSystem )
  {
    v16 = 0;
    *(_BYTE *)(a1 + 126) &= ~0x80u;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v16 )
  {
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v52 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick((__int64)v20);
        }
      }
    }
LABEL_86:
    __writecr8(CurrentIrql);
    return (unsigned int)v16;
  }
  v23 = v16;
  v24 = KiProcessorBlock[v14];
  if ( v16 >= 5 )
    v23 = KiConvertDynamicHeteroPolicy(a1, a2, KiProcessorBlock[v14]);
  KiGenerateHeteroSets(*(_QWORD *)(v24 + 192), *(_QWORD *)(a1 + 576), v23, &v66, &v67, &v64);
  if ( (v66 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v25 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v26, __ROR8__(v66, v25));
    v27 = v26 + v25;
    LODWORD(v26) = *(_DWORD *)(a1 + 116);
    v28 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v24 + 208) + (v27 & 0x3F)];
    *(_DWORD *)(a1 + 588) = v28;
    if ( (v26 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v28;
  }
  v29 = 0;
  v30 = KiAcquireThreadStateLock(a1, (__int64)&v59, (volatile signed __int32 **)&v65);
  v31 = v59;
  *(_BYTE *)(a1 + 125) = v16;
  if ( v30 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v31, (__int64)v65, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling((_KTHREAD *)a1, *(char *)(a1 + 195), (__int64)&v60);
  }
  else
  {
    v32 = (unsigned int)v30 - 2;
    if ( v30 == 2 )
    {
      if ( (*(_QWORD *)(v31 + 200) & v64) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v31 = v59;
          if ( !*(_QWORD *)(v59 + 16) )
          {
            KiSelectNextThread(v59, (__int64)&v60);
            v29 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v31 = v59;
        }
      }
    }
    else if ( v30 == 3 && (*(_QWORD *)(v31 + 200) & v64) == 0 )
    {
      KiSelectNextThread(v31, (__int64)&v60);
      KiInsertDeferredReadyList((__int64)&v60, a1);
    }
  }
  v33 = *(_DWORD *)(a1 + 588);
  v34 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v32, v31, v65);
  KiReleaseThreadLockSafe(a1);
  if ( v29 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v59 + 36) )
    KiSendSoftwareInterrupt();
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v61, v33);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v62, v34);
  }
  v37 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v37, &v60, v35, v36);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)v37->CurrentThread;
    if ( v37->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v37->CurrentThread, 0);
      v43 = KeGetCurrentPrcb();
      v63 = 0;
      while ( 1 )
      {
        v44 = v43->SchedulerAssist;
        if ( v44 )
        {
          if ( v43->NestingLevel <= 1u )
          {
            v45 = v44[6];
            v44[6] = v45 + 1;
            if ( v45 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v43);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v37->PrcbLock, 0LL) )
          break;
        v46 = v43->SchedulerAssist;
        if ( v46 )
        {
          if ( v43->NestingLevel <= 1u )
          {
            v47 = v46[6] - 1;
            v46[6] = v47;
            if ( !v47 )
              KiRemoveSystemWorkPriorityKick((__int64)v43);
          }
        }
        do
          KeYieldProcessorEx(&v63, v40, v41, v42);
        while ( v37->PrcbLock );
      }
      NextThread = (__int64)v37->NextThread;
      v37->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v37, CurrentThread, 0LL);
      _enable();
      v37->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v49 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v49 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)v37, CurrentThread, v49, v50);
      LOBYTE(v51) = CurrentIrql;
      v52 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v51) == 0;
    }
    else
    {
      v52 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v52 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v52 = (v54[5] & 0xFFFF0003) == 0;
          v54[5] &= 0xFFFF0003;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick((__int64)v53);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL, v38);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v52 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick((__int64)v55);
      }
    }
    goto LABEL_86;
  }
  if ( v37->NextThread && !v37->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v37, 2);
  return (unsigned int)v16;
}
