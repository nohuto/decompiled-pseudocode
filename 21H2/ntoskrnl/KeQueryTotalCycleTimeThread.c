/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x1402D3740
 * Callers:
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x140268DE8 (KiIpiSendPacket.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x1402D5AB0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  bool v9; // zf
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v13; // rdi
  _DWORD *v14; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  volatile unsigned int NextProcessor; // edi
  unsigned __int8 v22; // cl
  _DWORD *v23; // r9
  struct _KPRCB *v24; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // rax
  _DWORD *v28; // r9
  int v29; // edx
  int v30; // [rsp+30h] [rbp-108h] BYREF
  volatile signed __int64 *v31; // [rsp+38h] [rbp-100h] BYREF
  __int64 v32; // [rsp+40h] [rbp-F8h] BYREF
  _DWORD v33[44]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v33, 0, 0xA8uLL);
  v32 = 0LL;
  v31 = 0LL;
  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->NestingLevel = 1;
    v5 = __rdtsc();
    v6 = v5 - CurrentPrcb->StartCycles;
    v7 = v6 + Thread->CycleTime;
    v8 = v6 + Thread->CurrentRunTime;
    Thread->CycleTime = v7;
    if ( v8 > 0xFFFFFFFF )
      LODWORD(v8) = -1;
    CurrentPrcb->StartCycles = v5;
    v9 = (Thread->Header.Size & 0x3E) == 0;
    Thread->CurrentRunTime = v8;
    if ( !v9 )
      KiEndThreadAccountingPeriod(CurrentPrcb, Thread);
    if ( CycleTimeStamp )
      *CycleTimeStamp = v5;
    KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
    _enable();
    return v7;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v13 = KeGetCurrentPrcb();
    v30 = 0;
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v15 = v14[6];
        v14[6] = v15 + 1;
        if ( v15 == -1 )
LABEL_16:
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
    {
      v16 = v13->SchedulerAssist;
      if ( v16 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v17 = v16[6] - 1;
          v16[6] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      do
        KeYieldProcessorEx(&v30);
      while ( Thread->ThreadLock );
      v18 = v13->SchedulerAssist;
      if ( v18 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v19 = v18[6];
          v18[6] = v19 + 1;
          if ( v19 == -1 )
            goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)KiAcquireThreadStateLock(Thread, &v32, &v31) == 2 )
    {
      NextProcessor = Thread->NextProcessor;
      KiReleaseThreadStateLock(v20, v32, v31);
      KiReleaseThreadLockSafe((__int64)Thread);
      v33[0] = 1310721;
      memset(&v33[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v33, NextProcessor);
      v22 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
      {
        v23 = KeGetCurrentPrcb()->SchedulerAssist;
        v23[5] |= (-1 << (v22 + 1)) & 0x1FFC;
      }
      KiIpiSendPacket(0, (int)v33, (__int64)xHalTimerWatchdogStop, 0LL, 0LL, 0LL);
      v24 = KeGetCurrentPrcb();
      while ( v24->PacketBarrier )
        _mm_pause();
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
    }
    else
    {
      if ( Thread->Running )
        KeFlushProcessWriteBuffers(1);
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
      KiReleaseThreadStateLock(v20, v32, v31);
      KiReleaseThreadLockSafe((__int64)Thread);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(CurrentIrql);
    return CycleTime;
  }
}
