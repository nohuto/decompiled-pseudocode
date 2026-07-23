/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x140228EDC
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140228DBC (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x140235E70 (PpmParkReportMask.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140229114 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x14022965C (RtlWriteAcquireTickLock.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     memmove @ 0x140414040 (memmove.c)
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
  _KTHREAD *CurrentThread; // rdi
  bool v18; // zf
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r11
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _KPRCB *v33; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v35; // eax
  _DWORD *v36; // rcx
  int v37; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v39; // r8
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  int v46; // [rsp+24h] [rbp-A5h]
  unsigned int v47; // [rsp+28h] [rbp-A1h]
  __int64 v48; // [rsp+30h] [rbp-99h] BYREF
  int v49; // [rsp+38h] [rbp-91h]
  _DWORD v50[41]; // [rsp+3Ch] [rbp-8Dh] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v49 = 0;
  v47 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0;
  v46 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = qword_140CFC848[v6];
      if ( a1 )
      {
        if ( v6 >= *a1 )
          v19 = 0LL;
        else
          v19 = *(_QWORD *)&a1[4 * v6 + 4];
        v9 = v8 ^ v19;
        *(_QWORD *)&v50[2 * v6 + 1] = v9;
        if ( KiNonParkedCpuSets[v6] == v9 )
          goto LABEL_53;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v6];
        *(_QWORD *)&v50[2 * v6 + 1] = v9;
      }
      v46 = 1;
      v10 = v8 & v9;
      v5 = 1;
      v11 = v8 ^ v8 & v9;
      if ( (v8 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v49 = v12;
          v10 ^= 1LL << v12;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v2 = v47;
        v5 = 1;
      }
      if ( !v11 )
        goto LABEL_11;
      v20 = qword_140CFDA78[2 * v6];
      v21 = v20 & -(__int64)((v9 & (v8 ^ v20)) != 0 && (v9 & v20) != 0);
      v22 = (v8 ^ v20) & -(__int64)((v9 & (v8 ^ v20)) != 0 && (v9 & v20) != 0);
      v23 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v48 = v22;
      v24 = v23 & v9;
      if ( v23 )
      {
        if ( v24 )
        {
          v25 = v11 & v23;
          v11 ^= v25;
          if ( v25 )
          {
            v26 = v48;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v27, v25);
              v25 &= ~(1LL << v27);
              if ( _bittest64(&v21, (unsigned int)v27) )
              {
                v28 = v24 & v21;
                if ( (v24 & v21) == 0 )
                  v28 = v24;
              }
              else
              {
                v28 = v24;
                if ( (v24 & v26) != 0 )
                  v28 = v24 & v26;
              }
              *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v27)) = v28;
            }
            while ( v25 );
            v2 = v47;
            v22 = v48;
          }
        }
      }
      if ( v11 )
      {
        v29 = v8 & ~v24;
        if ( (v9 & v29) == 0 )
          v29 = v8;
        v30 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v31, v11);
          v32 = v29;
          v11 &= ~(1LL << v31);
          if ( _bittest64(&v21, (unsigned int)v31) )
          {
            v32 = v21 & v29;
            if ( (v29 & v9 & v21) == 0 )
              v32 = v29;
          }
          else if ( (v9 & v22 & v29) != 0 )
          {
            v32 = v29 & v22;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v30 + v31)) = v32;
        }
        while ( v11 );
      }
LABEL_53:
      v5 = v46;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v48 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v50[2 * v14 + 1] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v48);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList(CurrentPrcb, &v48);
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v33 = KeGetCurrentPrcb();
      v50[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = v33->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v35 = SchedulerAssist[6];
            SchedulerAssist[6] = v35 + 1;
            if ( v35 == -1 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v36 = v33->SchedulerAssist;
        if ( v36 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v37 = v36[6] - 1;
            v36[6] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        do
          KeYieldProcessorEx(v50);
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
      LOBYTE(v39) = v3;
      v18 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v39) == 0;
    }
    else
    {
      v18 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v18 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v18 = (v41[5] & 0xFFFF0003) == 0;
          v41[5] &= 0xFFFF0003;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v42 = KeGetCurrentPrcb();
      v43 = v42->SchedulerAssist;
      v44 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v18 = (v44 & v43[5]) == 0;
      v43[5] &= v44;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v42);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
