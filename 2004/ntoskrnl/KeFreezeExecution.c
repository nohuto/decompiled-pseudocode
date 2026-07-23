/*
 * XREFs of KeFreezeExecution @ 0x140518240
 * Callers:
 *     ExpWaitForBootDevices @ 0x1405ADE40 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x1409B4028 (KdEnterDebugger.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x14021E8A0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     KeStallExecutionProcessor @ 0x14021F3B0 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KxTryToAcquireSpinLock @ 0x14035E098 (KxTryToAcquireSpinLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiSendFreeze @ 0x140518CD0 (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x140518F64 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140518FBC (KiStartDebugAccumulation.c)
 *     RtlWriteTryAcquireTickLock @ 0x140589FC8 (RtlWriteTryAcquireTickLock.c)
 */

bool KeFreezeExecution()
{
  __int16 v0; // r14
  bool v1; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v3; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // edi
  char v6; // si
  unsigned int v7; // edi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rdi
  LARGE_INTEGER v14; // rax
  unsigned __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-108h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-100h] BYREF
  __int128 v19; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-E8h]
  _QWORD v21[22]; // [rsp+50h] [rbp-D8h] BYREF
  int v22; // [rsp+120h] [rbp-8h]

  memset(v21, 0, 0xA8uLL);
  v0 = v22;
  v17 = 0;
  v20 = 0LL;
  v19 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  _disable();
  v1 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  v3 = (unsigned int)LOBYTE(PerformanceFrequency.LowPart) + 15;
  __writecr8(v3);
  if ( KiIrqlFlags
    && (KiIrqlFlags & 1) != 0
    && CurrentIrql <= (unsigned __int8)(LOBYTE(PerformanceFrequency.LowPart) + 15) )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KiFreezeFlag = 4;
  if ( ((unsigned __int8)v3 & (unsigned __int8)KeGetCurrentPrcb()->IpiFrozen) != 4 )
  {
LABEL_6:
    v5 = 500000;
    do
    {
      v6 = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock);
      if ( v6 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_6;
      KeStallExecutionProcessor(4u);
      --v5;
    }
    while ( v5 );
    v7 = v6 != 0 ? 4 * (500000 - v5) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v6 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v6;
    else
      KiFreezeFlag |= 8u;
    if ( v7 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v7;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140C00738[0])(v9, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v10 = 20000;
      else
        v10 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      KeCopyAffinityEx((__int64)v21, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)v21, CurrentPrcb->Number);
      v12 = KiBugCheckActive;
      if ( KiRecoveryInProgress )
        v12 = 0;
      LOBYTE(v11) = (v12 & 3) != 3;
      KiSendFreeze(v21, v11);
      *((_QWORD *)&v19 + 1) = v21[1];
      *(_QWORD *)&v19 = v21;
LABEL_25:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v17, (unsigned __int16 **)&v19) )
      {
        v13 = KiProcessorBlock[v17];
        while ( *(_DWORD *)(v13 + 11656) != 2 )
        {
          if ( !v10 )
          {
            KiFreezeFlag |= 2u;
            goto LABEL_25;
          }
          KeStallExecutionProcessor(0x32u);
          --v10;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled && (unsigned __int8)RtlWriteTryAcquireTickLock() )
    {
      v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v15 = MEMORY[0xFFFFF78000000008]
          + 10000000 * (v14.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
      MEMORY[0xFFFFF78000000010] = HIDWORD(v15);
      MEMORY[0xFFFFF78000000008] = v15;
      if ( KeMaximumIncrement )
      {
        KiTickOffset = KeMaximumIncrement * (v15 / KeMaximumIncrement + 1) - v15;
        MEMORY[0xFFFFF78000000328] = (v15 / KeMaximumIncrement) >> 32;
        MEMORY[0xFFFFF78000000320] = v15 / KeMaximumIncrement;
      }
      ++MEMORY[0xFFFFF78000000340];
    }
  }
  return v1;
}
