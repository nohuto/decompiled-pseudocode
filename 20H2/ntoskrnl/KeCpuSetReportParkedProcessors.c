/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x1402F7040
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x1402F6F20 (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x140314830 (PpmParkReportMask.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x140266A84 (RtlWriteAcquireTickLock.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     memmove @ 0x140411040 (memmove.c)
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
  __int64 v17; // rdx
  ULONG_PTR CurrentThread; // rdi
  bool v19; // zf
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  struct _SINGLE_LIST_ENTRY *Next; // r15
  __int64 v28; // rcx
  unsigned __int64 v29; // r11
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KPRCB *v37; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v43; // r8
  __int64 v44; // r8
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  int v51; // [rsp+24h] [rbp-A5h]
  unsigned int v52; // [rsp+28h] [rbp-A1h]
  _SINGLE_LIST_ENTRY v53; // [rsp+30h] [rbp-99h] BYREF
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
          v20 = 0LL;
        else
          v20 = *(_QWORD *)&a1[4 * v6 + 4];
        v9 = v8 ^ v20;
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
      v21 = qword_140CFDA78[2 * v6];
      v22 = v21 & -(__int64)((v9 & (v8 ^ v21)) != 0 && (v9 & v21) != 0);
      v23 = (v8 ^ v21) & -(__int64)((v9 & (v8 ^ v21)) != 0 && (v9 & v21) != 0);
      v24 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v53.Next = (struct _SINGLE_LIST_ENTRY *)v23;
      v25 = v24 & v9;
      if ( v24 )
      {
        if ( v25 )
        {
          v26 = v11 & v24;
          v11 ^= v26;
          if ( v26 )
          {
            Next = v53.Next;
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
                if ( (v25 & (unsigned __int64)Next) != 0 )
                  v29 = v25 & (unsigned __int64)Next;
              }
              *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v28)) = v29;
            }
            while ( v26 );
            v2 = v52;
            v23 = (__int64)v53.Next;
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
  v53.Next = 0LL;
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
      {
        LOBYTE(v17) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, v17);
      }
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v37 = KeGetCurrentPrcb();
      v55[0] = 0;
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
          KeYieldProcessorEx(v55, v34, v35, v36);
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
        v43 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v43 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v43);
      LOBYTE(v44) = v3;
      v19 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v44) == 0;
    }
    else
    {
      v19 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v19 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v19 = (v46[5] & 0xFFFF0003) == 0;
          v46[5] &= 0xFFFF0003;
          if ( v19 )
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
      v19 = (v49 & v48[5]) == 0;
      v48[5] &= v49;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v47);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
