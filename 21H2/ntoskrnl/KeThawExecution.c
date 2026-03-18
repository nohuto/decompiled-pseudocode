/*
 * XREFs of KeThawExecution @ 0x1402DA4C0
 * Callers:
 *     ExpWaitForBootDevices @ 0x14063A300 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140A6F900 (KdExitDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiEndDebugAccumulation @ 0x14029B270 (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x1402DA5B0 (KiSendThawExecution.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // di
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v2 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v2 = KdPortLocked;
  ((void (__fastcall *)(_QWORD, _QWORD))off_140C01D88[0])(0LL, 0LL);
  if ( !PoAllProcIntrDisabled )
  {
    MEMORY[0xFFFFF78000000350] = KeQueryPerformanceCounter(0LL);
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  LOBYTE(v3) = 1;
  KiSendThawExecution(v3);
  v4 = (unsigned __int8)KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock(&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock(&KdDebuggerLock);
  v5 = __readcr4();
  if ( (v5 & 0x20080) != 0 )
  {
    __writecr4(v5 ^ 0x80);
    __writecr4(v5);
  }
  else
  {
    v7 = __readcr3();
    __writecr3(v7);
  }
  KiEndDebugAccumulation((__int64)KeGetCurrentPrcb());
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}
