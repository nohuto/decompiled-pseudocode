/*
 * XREFs of KiFreezeTargetExecution @ 0x14051E0A0
 * Callers:
 *     KiCheckForFreezeExecution @ 0x140512850 (KiCheckForFreezeExecution.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRestoreProcessorControlState @ 0x1403FE350 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1403FE420 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140407C30 (RtlCaptureContext.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeRestoreSupervisorState @ 0x14051A0A0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x14051A138 (KeSaveSupervisorState.c)
 *     KiCheckStall @ 0x14051DF60 (KiCheckStall.c)
 *     KiEndDebugAccumulation @ 0x14051DFF0 (KiEndDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x14051E654 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x14051E6AC (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x140525538 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x140525650 (KiSaveProcessorState.c)
 *     KdpReportExceptionStateChange @ 0x1409B8CE0 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x1409D952C (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x1409D95B8 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // si
  bool v6; // si
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rcx
  int v11; // edx
  volatile signed __int32 *v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  _QWORD v22[20]; // [rsp+20h] [rbp-E8h] BYREF
  int v23; // [rsp+100h] [rbp-8h]

  memset(v22, 0, 0x98uLL);
  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v5 = v23;
    _disable();
    v6 = (v5 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v10) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140C00738[0])(v10, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v11);
    }
    v12 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v12 )
      _InterlockedOr(v12, 0x20000u);
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v22, 0, 0x98uLL);
        LODWORD(v22[0]) = -2147483641;
        v22[1] = v22;
        v22[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v22, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    v14 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v14 )
      _InterlockedAnd(v14, 0xFFFDFFFF);
    LOBYTE(v13) = KiResumeForReboot;
    ((void (__fastcall *)(_QWORD, __int64))off_140C00738[0])(0LL, v13);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    v15 = __readcr4();
    if ( (v15 & 0x20080) != 0 )
    {
      __writecr4(v15 ^ 0x80);
      __writecr4(v15);
    }
    else
    {
      v16 = __readcr3();
      __writecr3(v16);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    KeRestoreSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)v18);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
