/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14032B4B4
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14032B394 (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x1403433E0 (PpmParkReportMask.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     RtlWriteAcquireTickLock @ 0x1402F3F34 (RtlWriteAcquireTickLock.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14032B6EC (KiUpdateGlobalCpuSetConfiguration.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     memmove @ 0x140409FC0 (memmove.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rdi
  bool v20; // zf
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r15
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _KPRCB *v38; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v40; // eax
  _DWORD *v41; // rcx
  int v42; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  int v53; // [rsp+24h] [rbp-A5h]
  unsigned int v54; // [rsp+28h] [rbp-A1h]
  _QWORD *v55; // [rsp+30h] [rbp-99h] BYREF
  int v56; // [rsp+38h] [rbp-91h]
  _DWORD v57[41]; // [rsp+3Ch] [rbp-8Dh] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v56 = 0;
  v54 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0;
  v53 = 0;
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
          v21 = 0LL;
        else
          v21 = *(_QWORD *)&a1[4 * v6 + 4];
        v9 = v8 ^ v21;
        *(_QWORD *)&v57[2 * v6 + 1] = v9;
        if ( KiNonParkedCpuSets[v6] == v9 )
          goto LABEL_53;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v6];
        *(_QWORD *)&v57[2 * v6 + 1] = v9;
      }
      v53 = 1;
      v10 = v8 & v9;
      v5 = 1;
      v11 = v8 ^ v8 & v9;
      if ( (v8 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v56 = v12;
          v10 ^= 1LL << v12;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v2 = v54;
        v5 = 1;
      }
      if ( !v11 )
        goto LABEL_11;
      v22 = qword_140CFDA78[2 * v6];
      v23 = v22 & -(__int64)((v9 & (v8 ^ v22)) != 0 && (v9 & v22) != 0);
      v24 = (v8 ^ v22) & -(__int64)((v9 & (v8 ^ v22)) != 0 && (v9 & v22) != 0);
      v25 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v55 = (_QWORD *)v24;
      v26 = v25 & v9;
      if ( v25 )
      {
        if ( v26 )
        {
          v27 = v11 & v25;
          v11 ^= v27;
          if ( v27 )
          {
            v28 = (unsigned __int64)v55;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v29, v27);
              v27 &= ~(1LL << v29);
              if ( _bittest64(&v23, (unsigned int)v29) )
              {
                v30 = v26 & v23;
                if ( (v26 & v23) == 0 )
                  v30 = v26;
              }
              else
              {
                v30 = v26;
                if ( (v26 & v28) != 0 )
                  v30 = v26 & v28;
              }
              *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v29)) = v30;
            }
            while ( v27 );
            v2 = v54;
            v24 = (__int64)v55;
          }
        }
      }
      if ( v11 )
      {
        v31 = v8 & ~v26;
        if ( (v9 & v31) == 0 )
          v31 = v8;
        v32 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v33, v11);
          v34 = v31;
          v11 &= ~(1LL << v33);
          if ( _bittest64(&v23, (unsigned int)v33) )
          {
            v34 = v23 & v31;
            if ( (v31 & v9 & v23) == 0 )
              v34 = v31;
          }
          else if ( (v9 & v24 & v31) != 0 )
          {
            v34 = v31 & v24;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v32 + v33)) = v34;
        }
        while ( v11 );
      }
LABEL_53:
      v5 = v53;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v55 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v57[2 * v14 + 1] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v55);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v55, v16, v17);
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
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v38 = KeGetCurrentPrcb();
      v57[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = v38->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v40 = SchedulerAssist[6];
            SchedulerAssist[6] = v40 + 1;
            if ( v40 == -1 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v41 = v38->SchedulerAssist;
        if ( v41 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v42 = v41[6] - 1;
            v41[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        do
          KeYieldProcessorEx(v57, v35, v36, v37);
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
        v44 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v44 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v44, v45);
      LOBYTE(v46) = v3;
      v20 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v46) == 0;
    }
    else
    {
      v20 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v20 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v20 = (v48[5] & 0xFFFF0003) == 0;
          v48[5] &= 0xFFFF0003;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->SchedulerAssist;
      v51 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v20 = (v51 & v50[5]) == 0;
      v50[5] &= v51;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
