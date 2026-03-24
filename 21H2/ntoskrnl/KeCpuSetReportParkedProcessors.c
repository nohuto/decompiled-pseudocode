/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x1402AAD9C
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x1402AAC7C (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x1402B7C90 (PpmParkReportMask.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402AAFD4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x1402AB51C (RtlWriteAcquireTickLock.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     memmove @ 0x140413F40 (memmove.c)
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
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rdi
  bool v18; // zf
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r15
  __int64 v27; // rcx
  unsigned __int64 v28; // r11
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KPRCB *v36; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  int v51; // [rsp+24h] [rbp-A5h]
  unsigned int v52; // [rsp+28h] [rbp-A1h]
  _QWORD *v53; // [rsp+30h] [rbp-99h] BYREF
  int v54; // [rsp+38h] [rbp-91h]
  _DWORD v55[41]; // [rsp+3Ch] [rbp-8Dh] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v54 = 0;
  v52 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0;
  v51 = 0;
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
        *(_QWORD *)&v55[2 * v6 + 1] = v9;
        if ( KiNonParkedCpuSets[v6] == v9 )
          goto LABEL_53;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v6];
        *(_QWORD *)&v55[2 * v6 + 1] = v9;
      }
      v51 = 1;
      v10 = v8 & v9;
      v5 = 1;
      v11 = v8 ^ v8 & v9;
      if ( (v8 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v54 = v12;
          v10 ^= 1LL << v12;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v2 = v52;
        v5 = 1;
      }
      if ( !v11 )
        goto LABEL_11;
      v20 = qword_140CFDA78[2 * v6];
      v21 = v20 & -(__int64)((v9 & (v8 ^ v20)) != 0 && (v9 & v20) != 0);
      v22 = (v8 ^ v20) & -(__int64)((v9 & (v8 ^ v20)) != 0 && (v9 & v20) != 0);
      v23 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v53 = (_QWORD *)v22;
      v24 = v23 & v9;
      if ( v23 )
      {
        if ( v24 )
        {
          v25 = v11 & v23;
          v11 ^= v25;
          if ( v25 )
          {
            v26 = (unsigned __int64)v53;
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
            v2 = v52;
            v22 = (__int64)v53;
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
      v5 = v51;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v53 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v55[2 * v14 + 1] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v53);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v53);
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
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v36 = KeGetCurrentPrcb();
      v55[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = v36->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v38 = SchedulerAssist[6];
            SchedulerAssist[6] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v39 = v36->SchedulerAssist;
        if ( v39 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v40 = v39[6] - 1;
            v39[6] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        do
          KeYieldProcessorEx(v55, v33, v34, v35);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v42 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v42 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v42, v43);
      LOBYTE(v44) = v3;
      v18 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v44) == 0;
    }
    else
    {
      v18 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v18 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v18 = (v46[5] & 0xFFFF0003) == 0;
          v46[5] &= 0xFFFF0003;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v47 = KeGetCurrentPrcb();
      v48 = v47->SchedulerAssist;
      v49 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v18 = (v49 & v48[5]) == 0;
      v48[5] &= v49;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v47);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
