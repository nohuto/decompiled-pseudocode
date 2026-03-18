/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14020245C
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14020233C (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x140305930 (PpmParkReportMask.c)
 * Callees:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140202694 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x140240C34 (RtlWriteAcquireTickLock.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

unsigned __int8 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r15d
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
  volatile unsigned __int8 result; // al
  __int64 v17; // rdx
  _KTHREAD *CurrentThread; // rdi
  bool v19; // zf
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // r11
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _KPRCB *v34; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v40; // r8
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  int v47; // [rsp+24h] [rbp-A5h]
  unsigned int v48; // [rsp+28h] [rbp-A1h]
  __int64 v49; // [rsp+30h] [rbp-99h] BYREF
  int v50; // [rsp+38h] [rbp-91h]
  _DWORD v51[41]; // [rsp+3Ch] [rbp-8Dh] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v50 = 0;
  v48 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0;
  v47 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = qword_140CFC838[v6];
      if ( a1 )
      {
        if ( v6 >= *a1 )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)&a1[4 * v6 + 4];
        v9 = v8 ^ v20;
        *(_QWORD *)&v51[2 * v6 + 1] = v9;
        if ( KiNonParkedCpuSets[v6] == v9 )
          goto LABEL_53;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v6];
        *(_QWORD *)&v51[2 * v6 + 1] = v9;
      }
      v47 = 1;
      v10 = v8 & v9;
      v5 = 1;
      v11 = v8 ^ v8 & v9;
      if ( (v8 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v50 = v12;
          v10 ^= 1LL << v12;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v2 = v48;
        v5 = 1;
      }
      if ( !v11 )
        goto LABEL_11;
      v21 = qword_140CFDA48[2 * v6];
      v22 = v21 & -(__int64)((v9 & (v8 ^ v21)) != 0 && (v9 & v21) != 0);
      v23 = (v8 ^ v21) & -(__int64)((v9 & (v8 ^ v21)) != 0 && (v9 & v21) != 0);
      v24 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v49 = v23;
      v25 = v24 & v9;
      if ( v24 )
      {
        if ( v25 )
        {
          v26 = v11 & v24;
          v11 ^= v26;
          if ( v26 )
          {
            v27 = v49;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v28, v26);
              v26 &= ~(1LL << v28);
              if ( _bittest64(&v22, (unsigned int)v28) )
              {
                v29 = v25 & v22;
                if ( (v25 & v22) == 0 )
                  v29 = v25;
              }
              else
              {
                v29 = v25;
                if ( (v25 & v27) != 0 )
                  v29 = v25 & v27;
              }
              *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v28)) = v29;
            }
            while ( v26 );
            v2 = v48;
            v23 = v49;
          }
        }
      }
      if ( v11 )
      {
        v30 = v8 & ~v25;
        if ( (v9 & v30) == 0 )
          v30 = v8;
        v31 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v32, v11);
          v33 = v30;
          v11 &= ~(1LL << v32);
          if ( _bittest64(&v22, (unsigned int)v32) )
          {
            v33 = v22 & v30;
            if ( (v30 & v9 & v22) == 0 )
              v33 = v30;
          }
          else if ( (v9 & v23 & v30) != 0 )
          {
            v33 = v30 & v23;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v31 + v32)) = v33;
        }
        while ( v11 );
      }
LABEL_53:
      v5 = v47;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v49 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v51[2 * v14 + 1] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v49);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList(CurrentPrcb, &v49);
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v17) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, v17);
      }
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v34 = KeGetCurrentPrcb();
      v51[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = v34->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v36 = SchedulerAssist[6];
            SchedulerAssist[6] = v36 + 1;
            if ( v36 == -1 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v37 = v34->SchedulerAssist;
        if ( v37 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v38 = v37[6] - 1;
            v37[6] = v38;
            if ( !v38 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        do
          KeYieldProcessorEx(v51);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = v3;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v40) = v3;
      v19 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v40) == 0;
    }
    else
    {
      v19 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v19 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v19 = (v42[5] & 0xFFFF0003) == 0;
          v42[5] &= 0xFFFF0003;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      v45 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v19 = (v45 & v44[5]) == 0;
      v44[5] &= v45;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v43);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
