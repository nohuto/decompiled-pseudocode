/*
 * XREFs of KiParkUmsThread @ 0x140520A70
 * Callers:
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     RtlXRestore @ 0x140350D6C (RtlXRestore.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1403F3B40 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1403F4020 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x1403F77C0 (KeResetLegacyFloatingPointState.c)
 *     KeRestoreLegacyFloatingPointControlWord @ 0x1403F77E0 (KeRestoreLegacyFloatingPointControlWord.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     KiUmsRestoreUch @ 0x140409940 (KiUmsRestoreUch.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiIsPrimaryPresent @ 0x140520874 (KiIsPrimaryPresent.c)
 *     KeUpdateUmsThreadState @ 0x1408BA23C (KeUpdateUmsThreadState.c)
 *     KiUmsExceptionFilter @ 0x1408BA844 (KiUmsExceptionFilter.c)
 *     KiCaptureUmsThreadContext @ 0x1408BB630 (KiCaptureUmsThreadContext.c)
 */

NTSTATUS __fastcall KiParkUmsThread(__int64 SparePtr)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *Object; // r12
  __int64 v6; // rdi
  int v7; // ecx
  char v8; // al
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  unsigned int v15; // eax
  char v16; // al
  char v17; // cl
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // edx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  NTSTATUS result; // eax
  unsigned __int64 v27; // rax
  void *v28; // rsp
  NTSTATUS updated; // edi
  __int64 v30; // r8
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  void *v33; // rcx
  char IsPrimaryPresent; // [rsp+30h] [rbp+0h]
  unsigned __int8 v35; // [rsp+31h] [rbp+1h]
  char v36; // [rsp+32h] [rbp+2h]
  unsigned __int8 v37; // [rsp+38h] [rbp+8h]
  unsigned __int64 NpxState; // [rsp+40h] [rbp+10h]
  __int64 v39; // [rsp+68h] [rbp+38h] BYREF
  __int64 v40; // [rsp+70h] [rbp+40h]
  EXCEPTION_RECORD ExitStatus; // [rsp+80h] [rbp+50h] BYREF
  _QWORD v42[349]; // [rsp+120h] [rbp+F0h] BYREF
  _DWORD v43[4]; // [rsp+C10h] [rbp+BE0h] BYREF
  _QWORD v44[2]; // [rsp+C20h] [rbp+BF0h] BYREF

  memset(&ExitStatus, 0, sizeof(ExitStatus));
  memset(v42, 0, sizeof(v42));
  IsPrimaryPresent = 0;
  v35 = 0;
  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v6 = *(_QWORD *)Object;
  v7 = Object[20];
  if ( (v7 & 1) != 0 )
  {
    v8 = 1;
    Object[20] = v7 & 0xFFFFFFFE;
  }
  else
  {
    v8 = 0;
  }
  v36 = v8;
  v37 = v8;
  if ( v8 || (*(_DWORD *)(v6 + 1264) & 0x40) != 0 )
  {
    v15 = *(_DWORD *)(v6 + 1264) & 0xFFFFFFDF;
    goto LABEL_31;
  }
  *(_DWORD *)(v6 + 1264) |= 0x20u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v35 = CurrentIrql;
  IsPrimaryPresent = KiIsPrimaryPresent(0LL, 0LL, v2, v3);
  if ( !IsPrimaryPresent )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
LABEL_15:
    v15 = *(_DWORD *)(v6 + 1264) & 0xFFFFFFDF;
LABEL_31:
    *(_DWORD *)(v6 + 1264) = v15;
    goto LABEL_32;
  }
  _disable();
  v16 = IsPrimaryPresent;
  if ( (KeGetCurrentPrcb()->PairRegister & 2) != 0 )
    v16 = 0;
  v17 = v16;
  if ( CurrentThread->ApcState.UserApcPendingAll )
    v17 = 0;
  IsPrimaryPresent = v17;
  if ( !v17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
    }
    __writecr8(CurrentIrql);
    _enable();
    goto LABEL_15;
  }
LABEL_32:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v43[0] = CurrentThread[1].CycleTime;
    v43[1] = CurrentThread[1].CurrentRunTime;
    v43[2] = (IsPrimaryPresent != 0 ? 2 : 0) | *(_DWORD *)(SparePtr + 72) & 1 | (4 * v37);
    v44[0] = v43;
    v44[1] = 12LL;
    EtwTraceKernelEvent((int)v44, 1, 0x40000080u, 6434, 4196866);
  }
  if ( !IsPrimaryPresent )
  {
    v27 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
    if ( v27 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
      v27 = 0xFFFFFFFFFFFFFF0LL;
    v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
    v42[0] = ((unsigned __int64)&v39 + 7) & 0xFFFFFFFFFFFFFFC0uLL;
    --CurrentThread->SpecialApcDisable;
    updated = KiCaptureUmsThreadContext(CurrentThread, SparePtr);
    if ( updated >= 0 )
    {
      NpxState = CurrentThread->NpxState;
      CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
      *((_QWORD *)Object + 9) = v42;
      Object[20] = Object[20] & 0xFFFFFFF9 | 4;
      CurrentThread->WaitBlock[3].SparePtr = 0LL;
      if ( v36 )
      {
        v40 = *(_QWORD *)CurrentThread->WaitBlock[3].Object;
        *(_QWORD *)(v40 + 1272) = 0LL;
      }
      else
      {
        LOBYTE(v30) = 1;
        updated = KeUpdateUmsThreadState(*(_QWORD *)CurrentThread->WaitBlock[3].Object, 0LL, v30);
      }
      if ( updated >= 0 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        updated = KeWaitForSingleObject(Object + 12, Executive, 1, 0, 0LL);
        if ( updated == 192 )
        {
          KeGetCurrentIrql();
          __writecr8(1uLL);
          KiDeliverApc(1, 0LL, 0LL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v14 = (v32[5] & 0xFFFF0001) == 0;
              v32[5] &= 0xFFFF0001;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v31);
            }
          }
          __writecr8(0LL);
          goto LABEL_64;
        }
        --CurrentThread->SpecialApcDisable;
        Object[20] &= ~4u;
        SparePtr = (__int64)CurrentThread->WaitBlock[3].SparePtr;
        CurrentThread->NpxState = NpxState;
        if ( (*(_BYTE *)(SparePtr + 72) & 1) != 0 )
        {
          v33 = *(void **)(SparePtr + 64);
          if ( MEMORY[0xFFFFF780000003E0] )
            RtlXRestore((__int64)v33, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFDuLL);
          else
            _fxrstor(v33);
        }
        else
        {
          KeResetLegacyFloatingPointState();
          KeRestoreLegacyFloatingPointControlWord();
        }
        KiUmsRestoreUch(SparePtr);
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_64:
    ExitStatus.NumberParameters = 1;
    ExitStatus.ExceptionInformation[0] = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
    ExitStatus.ExceptionCode = updated;
    ExitStatus.ExceptionFlags = 1;
    ExitStatus.ExceptionAddress = 0LL;
    KiDispatchException(&ExitStatus, *(_QWORD *)(SparePtr + 88), *(_QWORD *)(SparePtr + 80), 1u, 0);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
    return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && v35 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (v35 + 1));
        v14 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
  }
  result = v35;
  __writecr8(v35);
  CurrentThread->MiscFlags &= ~0x10000u;
  return result;
}
