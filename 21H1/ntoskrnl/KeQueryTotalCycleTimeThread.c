/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x14025A360
 * Callers:
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14026D370 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x14026D690 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x14026D7B0 (KiEndThreadAccountingPeriod.c)
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x140359100 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *v15; // rdi
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  volatile unsigned int NextProcessor; // edi
  unsigned __int8 v24; // cl
  _DWORD *v25; // r9
  struct _KPRCB *v26; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // rax
  _DWORD *v30; // r9
  int v31; // edx
  int v32; // [rsp+30h] [rbp-108h] BYREF
  __int64 v33; // [rsp+38h] [rbp-100h] BYREF
  __int64 v34; // [rsp+40h] [rbp-F8h] BYREF
  _DWORD v35[44]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v35, 0, 0xA8uLL);
  v34 = 0LL;
  v33 = 0LL;
  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->NestingLevel = 1;
    v8 = __rdtsc();
    v9 = v8 - CurrentPrcb->StartCycles;
    v10 = v9 + Thread->CycleTime;
    v11 = v9 + Thread->CurrentRunTime;
    Thread->CycleTime = v10;
    if ( v11 > 0xFFFFFFFF )
      LODWORD(v11) = -1;
    CurrentPrcb->StartCycles = v8;
    v12 = (Thread->Header.Size & 0x3E) == 0;
    Thread->CurrentRunTime = v11;
    if ( !v12 )
      KiEndThreadAccountingPeriod(CurrentPrcb, Thread);
    if ( CycleTimeStamp )
      *CycleTimeStamp = v8;
    KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
    _enable();
    return v10;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
      v5 = (unsigned int)v4 | SchedulerAssist[5];
      SchedulerAssist[5] = v5;
    }
    v15 = KeGetCurrentPrcb();
    v32 = 0;
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v17 = v16[6];
        v16[6] = v17 + 1;
        if ( v17 == -1 )
LABEL_16:
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
    {
      v18 = v15->SchedulerAssist;
      if ( v18 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v19 = v18[6] - 1;
          v18[6] = v19;
          if ( !v19 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      do
        KeYieldProcessorEx(&v32, v4, v5, (__int64)SchedulerAssist);
      while ( Thread->ThreadLock );
      v20 = v15->SchedulerAssist;
      if ( v20 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v21 = v20[6];
          v20[6] = v21 + 1;
          if ( v21 == -1 )
            goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)KiAcquireThreadStateLock(Thread, &v34, &v33) == 2 )
    {
      NextProcessor = Thread->NextProcessor;
      KiReleaseThreadStateLock(v22, v34, v33);
      KiReleaseThreadLockSafe(Thread);
      v35[0] = 1310721;
      memset(&v35[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v35, NextProcessor);
      v24 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
      {
        v25 = KeGetCurrentPrcb()->SchedulerAssist;
        v25[5] |= (-1 << (v24 + 1)) & 0x1FFC;
      }
      KiIpiSendPacket(0, (unsigned int)v35, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
      v26 = KeGetCurrentPrcb();
      while ( v26->PacketBarrier )
        _mm_pause();
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
    }
    else
    {
      if ( Thread->Running )
      {
        LOBYTE(v22) = 1;
        KeFlushProcessWriteBuffers(v22);
      }
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
      KiReleaseThreadStateLock(v22, v34, v33);
      KiReleaseThreadLockSafe(Thread);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(CurrentIrql);
    return CycleTime;
  }
}
