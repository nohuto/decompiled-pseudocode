/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14020E1DC
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14020E0AC (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x14023F570 (PpmParkReportMask.c)
 * Callees:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14020E464 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x14020F26C (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

unsigned __int8 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r12d
  unsigned __int8 v3; // r14
  int v5; // eax
  unsigned __int16 v6; // di
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  char v16; // si
  _QWORD *v17; // rdi
  volatile unsigned __int8 result; // al
  _KTHREAD *CurrentThread; // rdi
  bool v20; // zf
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r11
  __int64 v31; // rdx
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KPRCB *v37; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v43; // r8
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  _QWORD *v50; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v51; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh]
  int v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+40h] [rbp-C0h]
  _DWORD v55[70]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v53 = 0;
  v52 = 0;
  v51 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0;
  LODWORD(v50) = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = qword_140D06E48[v6];
      if ( a1 )
      {
        if ( v6 >= *a1 )
          v21 = 0LL;
        else
          v21 = *(_QWORD *)&a1[4 * v6 + 4];
        v9 = v8 ^ v21;
        *(_QWORD *)&v55[2 * v6 + 6] = v9;
        if ( KiNonParkedCpuSets[v6] == v9 )
          goto LABEL_60;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v6];
        *(_QWORD *)&v55[2 * v6 + 6] = v9;
      }
      LODWORD(v50) = 1;
      v10 = v8 & v9;
      v5 = 1;
      v11 = v8 ^ v8 & v9;
      if ( (v8 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v53 = v12;
          v10 ^= 1LL << v12;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v2 = v51;
        v5 = (int)v50;
      }
      if ( !v11 )
        goto LABEL_11;
      v22 = *((_QWORD *)&unk_140D08398 + 4 * v6);
      v23 = v22 & -(__int64)((v9 & (v8 ^ v22)) != 0 && (v9 & v22) != 0);
      v24 = (v8 ^ v22) & -(__int64)((v9 & (v8 ^ v22)) != 0 && (v9 & v22) != 0);
      v54 = v24;
      v25 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v26 = v25 & v9;
      if ( !v25 || !v26 )
        goto LABEL_50;
      v27 = v11 & v25;
      v11 ^= v27;
      if ( v27 )
      {
        v28 = v54;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v29, v27);
          v30 = v26;
          v27 &= ~(1LL << v29);
          v52 = v29;
          if ( _bittest64(&v23, (unsigned int)v29) )
          {
            if ( (v26 & v23) != 0 )
              v30 = v26 & v23;
          }
          else if ( (v26 & v28) != 0 )
          {
            v30 = v26 & v28;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v29)) = v30;
        }
        while ( v27 );
        v2 = v51;
        v24 = v54;
      }
      if ( v11 )
      {
LABEL_50:
        v31 = v8 & ~v26;
        if ( (v9 & v31) == 0 )
          v31 = v8;
        v32 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v33, v11);
          v34 = v31;
          v11 &= ~(1LL << v33);
          v52 = v33;
          if ( _bittest64(&v23, (unsigned int)v33) )
          {
            if ( (v9 & v23 & v31) != 0 )
            {
              v35 = v23;
LABEL_58:
              v34 = v31 & v35;
            }
          }
          else if ( (v9 & v24 & v31) != 0 )
          {
            v35 = v24;
            goto LABEL_58;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v32 + v33)) = v34;
        }
        while ( v11 );
      }
LABEL_60:
      v5 = (int)v50;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v50 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v55[2 * v14 + 6] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v50);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  v17 = v50;
  if ( v50 )
  {
    v50 = (_QWORD *)*v50;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v17 - 27, &v50);
      v17 = v50;
      ++v16;
      if ( v50 )
        v50 = (_QWORD *)*v50;
      if ( (v16 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v17 );
  }
  result = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v55[0] = 5;
          *(_OWORD *)&v55[1] = 0LL;
          return HalpInterruptSendIpi(v55, 47LL);
        }
      }
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v37 = KeGetCurrentPrcb();
      v51 = 0;
      while ( 1 )
      {
        SchedulerAssist = v37->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v39 = SchedulerAssist[6];
            SchedulerAssist[6] = v39 + 1;
            if ( v39 == -1 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v40 = v37->SchedulerAssist;
        if ( v40 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v41 = v40[6] - 1;
            v40[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        do
          KeYieldProcessorEx(&v51);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v36) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, v36);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = v3;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v43) = v3;
      v20 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v43) == 0;
    }
    else
    {
      v20 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v20 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v20 = (v45[5] & 0xFFFF0003) == 0;
          v45[5] &= 0xFFFF0003;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v46 = KeGetCurrentPrcb();
      v47 = v46->SchedulerAssist;
      v48 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v20 = (v48 & v47[5]) == 0;
      v47[5] &= v48;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v46);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
