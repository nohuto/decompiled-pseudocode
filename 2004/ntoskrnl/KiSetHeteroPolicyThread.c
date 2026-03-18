/*
 * XREFs of KiSetHeteroPolicyThread @ 0x14051AEB4
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x14050DEB0 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14050DECC (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1408EE0F0 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x140214320 (KiAcquireThreadStateLock.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiReleaseThreadStateLock @ 0x1402F11C0 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14032BA58 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14032BAB8 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14032BAE8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSendSoftwareInterrupt @ 0x14033F4A0 (KiSendSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140519CF0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x140519E08 (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x1405A2374 (EtwTraceIdealProcessor.c)
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
  ULONG_PTR CurrentThread; // rdi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KPRCB *v42; // r14
  _DWORD *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  __int64 NextThread; // r14
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // r8d
  bool v51; // zf
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  __int64 v58; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v59; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v60; // [rsp+40h] [rbp-30h]
  unsigned int v61; // [rsp+44h] [rbp-2Ch]
  int v62; // [rsp+48h] [rbp-28h] BYREF
  __int64 v63; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int64 *v64; // [rsp+58h] [rbp-18h] BYREF
  __int64 v65; // [rsp+60h] [rbp-10h] BYREF
  __int64 v66; // [rsp+68h] [rbp-8h] BYREF
  int v67; // [rsp+C0h] [rbp+50h] BYREF

  v63 = 0LL;
  v4 = (int)SchedulerAssist;
  v65 = 0LL;
  v5 = a3;
  v58 = 0LL;
  v6 = a2;
  v66 = 0LL;
  v59 = 0LL;
  v64 = 0LL;
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
  v67 = 0;
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
      KeYieldProcessorEx(&v67, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = *(unsigned int *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  v60 = *(_DWORD *)(a1 + 588);
  v61 = v15;
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
          v51 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v51 )
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
  KiGenerateHeteroSets(*(_QWORD *)(v24 + 192), *(_QWORD *)(a1 + 576), v23, &v65, &v66, &v63);
  if ( (v65 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v25 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v26, __ROR8__(v65, v25));
    v27 = v26 + v25;
    LODWORD(v26) = *(_DWORD *)(a1 + 116);
    v28 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v24 + 208) + (v27 & 0x3F)];
    *(_DWORD *)(a1 + 588) = v28;
    if ( (v26 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v28;
  }
  v29 = 0;
  v30 = KiAcquireThreadStateLock(a1, &v58, (volatile signed __int32 **)&v64);
  v31 = v58;
  *(_BYTE *)(a1 + 125) = v16;
  if ( v30 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v31, (__int64)v64, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling((_KTHREAD *)a1, *(char *)(a1 + 195), (__int64)&v59);
  }
  else
  {
    v32 = (unsigned int)v30 - 2;
    if ( v30 == 2 )
    {
      if ( (*(_QWORD *)(v31 + 200) & v63) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v31 = v58;
          if ( !*(_QWORD *)(v58 + 16) )
          {
            KiSelectNextThread(v58, (__int64)&v59);
            v29 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v31 = v58;
        }
      }
    }
    else if ( v30 == 3 && (*(_QWORD *)(v31 + 200) & v63) == 0 )
    {
      KiSelectNextThread(v31, (__int64)&v59);
      KiInsertDeferredReadyList((__int64)&v59, a1);
    }
  }
  v33 = *(_DWORD *)(a1 + 588);
  v34 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v32, v31, v64);
  KiReleaseThreadLockSafe(a1);
  if ( v29 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v58 + 36) )
    KiSendSoftwareInterrupt();
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v60, v33);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v61, v34);
  }
  v37 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v37, &v59, v35, v36);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)v37->CurrentThread;
    if ( v37->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v37->CurrentThread, 0);
      v42 = KeGetCurrentPrcb();
      v62 = 0;
      while ( 1 )
      {
        v43 = v42->SchedulerAssist;
        if ( v43 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v44 = v43[6];
            v43[6] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v37->PrcbLock, 0LL) )
          break;
        v45 = v42->SchedulerAssist;
        if ( v45 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v46 = v45[6] - 1;
            v45[6] = v46;
            if ( !v46 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
        }
        do
          KeYieldProcessorEx(&v62, v39, v40, v41);
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
        v48 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v48 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v37, CurrentThread, v48, v49);
      LOBYTE(v50) = CurrentIrql;
      v51 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v50) == 0;
    }
    else
    {
      v51 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v51 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v51 = (v53[5] & 0xFFFF0003) == 0;
          v53[5] &= 0xFFFF0003;
          if ( v51 )
            KiRemoveSystemWorkPriorityKick((__int64)v52);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v51 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick((__int64)v54);
      }
    }
    goto LABEL_86;
  }
  if ( v37->NextThread && !v37->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v37, 2);
  return (unsigned int)v16;
}
