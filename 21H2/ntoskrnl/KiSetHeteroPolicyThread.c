/*
 * XREFs of KiSetHeteroPolicyThread @ 0x1405205A4
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x140513560 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14051357C (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1408F1660 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14029B830 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14029B8C0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F3E0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051F4F8 (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
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
  struct _KPRCB *v35; // rbx
  ULONG_PTR CurrentThread; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _KPRCB *v40; // r14
  _DWORD *v41; // rcx
  int v42; // eax
  _DWORD *v43; // rcx
  int v44; // eax
  __int64 NextThread; // r14
  __int64 v46; // r8
  unsigned int v47; // r8d
  bool v48; // zf
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  __int64 v55; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v56; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v57; // [rsp+40h] [rbp-30h]
  unsigned int v58; // [rsp+44h] [rbp-2Ch]
  int v59; // [rsp+48h] [rbp-28h] BYREF
  __int64 v60; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int64 *v61; // [rsp+58h] [rbp-18h] BYREF
  __int64 v62; // [rsp+60h] [rbp-10h] BYREF
  __int64 v63; // [rsp+68h] [rbp-8h] BYREF
  int v64; // [rsp+C0h] [rbp+50h] BYREF

  v60 = 0LL;
  v4 = (int)SchedulerAssist;
  v62 = 0LL;
  v5 = a3;
  v55 = 0LL;
  v6 = a2;
  v63 = 0LL;
  v56 = 0LL;
  v61 = 0LL;
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
  v64 = 0;
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
      KeYieldProcessorEx(&v64, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = *(unsigned int *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  v57 = *(_DWORD *)(a1 + 588);
  v58 = v15;
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
          v48 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v48 )
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
  KiGenerateHeteroSets(*(_QWORD *)(v24 + 192), *(_QWORD *)(a1 + 576), v23, &v62, &v63, &v60);
  if ( (v62 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v25 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v26, __ROR8__(v62, v25));
    v27 = v26 + v25;
    LODWORD(v26) = *(_DWORD *)(a1 + 116);
    v28 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v24 + 208) + (v27 & 0x3F)];
    *(_DWORD *)(a1 + 588) = v28;
    if ( (v26 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v28;
  }
  v29 = 0;
  v30 = KiAcquireThreadStateLock(a1, &v55, (volatile signed __int32 **)&v61);
  v31 = v55;
  *(_BYTE *)(a1 + 125) = v16;
  if ( v30 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v31, (__int64)v61, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64)&v56);
  }
  else
  {
    v32 = (unsigned int)v30 - 2;
    if ( v30 == 2 )
    {
      if ( (*(_QWORD *)(v31 + 200) & v60) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v31 = v55;
          if ( !*(_QWORD *)(v55 + 16) )
          {
            KiSelectNextThread(v55, (__int64)&v56);
            v29 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v31 = v55;
        }
      }
    }
    else if ( v30 == 3 && (*(_QWORD *)(v31 + 200) & v60) == 0 )
    {
      KiSelectNextThread(v31, (__int64)&v56);
      KiInsertDeferredReadyList((__int64)&v56, a1);
    }
  }
  v33 = *(_DWORD *)(a1 + 588);
  v34 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v32, v31, v61);
  KiReleaseThreadLockSafe(a1);
  if ( v29 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v55 + 36) )
    KiSendSoftwareInterrupt();
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v57, v33);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v58, v34);
  }
  v35 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v35, &v56);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)v35->CurrentThread;
    if ( v35->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v35->CurrentThread, 0);
      v40 = KeGetCurrentPrcb();
      v59 = 0;
      while ( 1 )
      {
        v41 = v40->SchedulerAssist;
        if ( v41 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v42 = v41[6];
            v41[6] = v42 + 1;
            if ( v42 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v35->PrcbLock, 0LL) )
          break;
        v43 = v40->SchedulerAssist;
        if ( v43 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v44 = v43[6] - 1;
            v43[6] = v44;
            if ( !v44 )
              KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
        do
          KeYieldProcessorEx(&v59, v37, v38, v39);
        while ( v35->PrcbLock );
      }
      NextThread = (__int64)v35->NextThread;
      v35->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v35, CurrentThread, 0LL);
      _enable();
      v35->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v46 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v46 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v35, CurrentThread, v46);
      LOBYTE(v47) = CurrentIrql;
      v48 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v47) == 0;
    }
    else
    {
      v48 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v48 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v48 = (v50[5] & 0xFFFF0003) == 0;
          v50[5] &= 0xFFFF0003;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick((__int64)v49);
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
        v51 = KeGetCurrentPrcb();
        v52 = v51->SchedulerAssist;
        v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v48 = (v53 & v52[5]) == 0;
        v52[5] &= v53;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick((__int64)v51);
      }
    }
    goto LABEL_86;
  }
  if ( v35->NextThread && !v35->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v35, 2);
  return (unsigned int)v16;
}
