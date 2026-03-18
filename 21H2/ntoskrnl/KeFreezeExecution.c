/*
 * XREFs of KeFreezeExecution @ 0x1402DA0F0
 * Callers:
 *     ExpWaitForBootDevices @ 0x14063A300 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140A6F7A0 (KdEnterDebugger.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiStartDebugAccumulation @ 0x14029B8BC (KiStartDebugAccumulation.c)
 *     KxTryToAcquireSpinLock @ 0x1402DA448 (KxTryToAcquireSpinLock.c)
 *     KiSetDebuggerOwner @ 0x1402DA760 (KiSetDebuggerOwner.c)
 *     RtlWriteTryAcquireTickLock @ 0x1402DA7A8 (RtlWriteTryAcquireTickLock.c)
 *     KiSendFreeze @ 0x1402DA81C (KiSendFreeze.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char KeFreezeExecution()
{
  unsigned int v0; // r15d
  unsigned int v1; // ebx
  char v2; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v4; // r10
  int v5; // esi
  char v6; // bp
  unsigned int v7; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  signed __int64 v12; // rbx
  LARGE_INTEGER v13; // rax
  unsigned __int64 v14; // r8
  _DWORD *SchedulerAssist; // r9
  int v17; // [rsp+20h] [rbp-168h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-160h] BYREF
  __int128 v19; // [rsp+30h] [rbp-158h] BYREF
  __int64 v20; // [rsp+40h] [rbp-148h]
  _QWORD v21[34]; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v22; // [rsp+180h] [rbp-8h]

  memset(v21, 0, 0x108uLL);
  v17 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v0 = v22;
  v19 = 0LL;
  v20 = 0LL;
  _disable();
  v1 = (unsigned __int8)v20 + 1;
  v2 = (v20 + 1) & (v0 >> 9);
  CurrentIrql = KeGetCurrentIrql();
  v4 = (unsigned int)(unsigned __int8)v20 + 15;
  __writecr8(v4);
  if ( KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v1) != 0
    && CurrentIrql <= (unsigned __int8)(v20 + 15) )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v1 + CurrentIrql)) & 0xFFFC;
  }
  KiFreezeFlag = 4;
  if ( ((unsigned __int8)v4 & (unsigned __int8)KeGetCurrentPrcb()->IpiFrozen) != 4 )
  {
LABEL_3:
    v5 = 750000;
    do
    {
      v6 = KxTryToAcquireSpinLock(&KdDebuggerLock);
      if ( v6 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_3;
      KeStallExecutionProcessor(4u);
      --v5;
    }
    while ( v5 );
    v7 = v6 != 0 ? 4 * (750000 - v5) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v6 || ((unsigned __int8)KiFreezeFlag & (unsigned __int8)v1) == 0 )
      KdPortLocked = v6;
    else
      KiFreezeFlag |= 8u;
    if ( v7 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v7;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation((__int64)CurrentPrcb);
    LOBYTE(v9) = v1;
    ((void (__fastcall *)(__int64, _QWORD))off_140C01D88[0])(v9, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( ((unsigned int)KeNumberProcessors_0 > v1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v10 = 20000;
      else
        v10 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = v1;
      LODWORD(v21[0]) = 2097153;
      memset((char *)v21 + 4, 0, 0x104uLL);
      KiCopyAffinityEx(v21, 32LL, &KeActiveProcessors);
      KeRemoveProcessorAffinityEx(v21, CurrentPrcb->Number);
      if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) == 3 )
        LOBYTE(v1) = 0;
      LOBYTE(v11) = v1;
      KiSendFreeze(v21, v11);
      *((_QWORD *)&v19 + 1) = v21[1];
      *(_QWORD *)&v19 = v21;
LABEL_18:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v17, (unsigned __int16 **)&v19) )
      {
        v12 = KiProcessorBlock[v17];
        while ( *(_DWORD *)(v12 + 11656) != 2 )
        {
          if ( !v10 )
          {
            KiFreezeFlag |= 2u;
            _InterlockedCompareExchange64(&KiFreezeSkippedProcessor, v12, 0LL);
            goto LABEL_18;
          }
          KeStallExecutionProcessor(0x32u);
          --v10;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled && (unsigned __int8)RtlWriteTryAcquireTickLock() )
    {
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v14 = MEMORY[0xFFFFF78000000008]
          + 10000000 * (v13.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
      MEMORY[0xFFFFF78000000010] = HIDWORD(v14);
      MEMORY[0xFFFFF78000000008] = v14;
      if ( KeMaximumIncrement )
      {
        KiTickOffset = KeMaximumIncrement * (v14 / (unsigned int)KeMaximumIncrement + 1) - v14;
        MEMORY[0xFFFFF78000000328] = (v14 / (unsigned int)KeMaximumIncrement) >> 32;
        MEMORY[0xFFFFF78000000320] = v14 / (unsigned int)KeMaximumIncrement;
      }
      ++MEMORY[0xFFFFF78000000340];
    }
  }
  return v2;
}
