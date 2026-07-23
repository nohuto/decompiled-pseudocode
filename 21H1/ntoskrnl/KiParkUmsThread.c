/*
 * XREFs of KiParkUmsThread @ 0x140520420
 * Callers:
 *     KiUmsExit @ 0x140408B40 (KiUmsExit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     RtlXRestore @ 0x140312EBC (RtlXRestore.c)
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1403F28B0 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1403F2D90 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x1403F6530 (KeResetLegacyFloatingPointState.c)
 *     KeRestoreLegacyFloatingPointControlWord @ 0x1403F6550 (KeRestoreLegacyFloatingPointControlWord.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     KiUmsRestoreUch @ 0x140408640 (KiUmsRestoreUch.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiIsPrimaryPresent @ 0x140520224 (KiIsPrimaryPresent.c)
 *     KeUpdateUmsThreadState @ 0x1408B8F1C (KeUpdateUmsThreadState.c)
 *     KiUmsExceptionFilter @ 0x1408B9524 (KiUmsExceptionFilter.c)
 *     KiCaptureUmsThreadContext @ 0x1408BA310 (KiCaptureUmsThreadContext.c)
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
  __int64 NpxState; // rdx
  NTSTATUS updated; // edi
  __int64 v31; // r8
  __int64 v32; // r9
  _DWORD *v33; // r9
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  void *v36; // rcx
  char IsPrimaryPresent; // [rsp+30h] [rbp+0h]
  unsigned __int8 v38; // [rsp+31h] [rbp+1h]
  char v39; // [rsp+32h] [rbp+2h]
  unsigned __int8 v40; // [rsp+38h] [rbp+8h]
  unsigned __int64 v41; // [rsp+40h] [rbp+10h]
  __int64 v42; // [rsp+68h] [rbp+38h] BYREF
  __int64 v43; // [rsp+70h] [rbp+40h]
  EXCEPTION_RECORD ExitStatus; // [rsp+80h] [rbp+50h] BYREF
  _QWORD v45[349]; // [rsp+120h] [rbp+F0h] BYREF
  _DWORD v46[4]; // [rsp+C10h] [rbp+BE0h] BYREF
  _QWORD v47[2]; // [rsp+C20h] [rbp+BF0h] BYREF

  memset(&ExitStatus, 0, sizeof(ExitStatus));
  memset(v45, 0, sizeof(v45));
  IsPrimaryPresent = 0;
  v38 = 0;
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
  v39 = v8;
  v40 = v8;
  if ( v8 || (*(_DWORD *)(v6 + 1264) & 0x40) != 0 )
  {
    v15 = *(_DWORD *)(v6 + 1264) & 0xFFFFFFDF;
    goto LABEL_31;
  }
  *(_DWORD *)(v6 + 1264) |= 0x20u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v38 = CurrentIrql;
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
    v46[0] = CurrentThread[1].CycleTime;
    v46[1] = CurrentThread[1].CurrentRunTime;
    v46[2] = (IsPrimaryPresent != 0 ? 2 : 0) | *(_DWORD *)(SparePtr + 72) & 1 | (4 * v40);
    v47[0] = v46;
    v47[1] = 12LL;
    EtwTraceKernelEvent((__int64)v47, 1u, 0x40000080u, 0x1922u, 0x400A02u);
  }
  if ( !IsPrimaryPresent )
  {
    v27 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
    if ( v27 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
      v27 = 0xFFFFFFFFFFFFFF0LL;
    v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
    v45[0] = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFC0uLL;
    --CurrentThread->SpecialApcDisable;
    updated = KiCaptureUmsThreadContext(CurrentThread, SparePtr);
    if ( updated >= 0 )
    {
      NpxState = CurrentThread->NpxState;
      v41 = NpxState;
      CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
      *((_QWORD *)Object + 9) = v45;
      Object[20] = Object[20] & 0xFFFFFFF9 | 4;
      CurrentThread->WaitBlock[3].SparePtr = 0LL;
      if ( v39 )
      {
        v43 = *(_QWORD *)CurrentThread->WaitBlock[3].Object;
        *(_QWORD *)(v43 + 1272) = 0LL;
      }
      else
      {
        LOBYTE(v31) = 1;
        updated = KeUpdateUmsThreadState(*(_QWORD *)CurrentThread->WaitBlock[3].Object, 0LL, v31);
      }
      if ( updated >= 0 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, NpxState, v31, v32);
        updated = KeWaitForSingleObject(Object + 12, Executive, 1, 0, 0LL);
        if ( updated == 192 )
        {
          KeGetCurrentIrql();
          __writecr8(1uLL);
          KiDeliverApc(1, 0LL, 0LL, v33);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v14 = (v35[5] & 0xFFFF0001) == 0;
              v35[5] &= 0xFFFF0001;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v34);
            }
          }
          __writecr8(0LL);
          goto LABEL_64;
        }
        --CurrentThread->SpecialApcDisable;
        Object[20] &= ~4u;
        SparePtr = (__int64)CurrentThread->WaitBlock[3].SparePtr;
        CurrentThread->NpxState = v41;
        if ( (*(_BYTE *)(SparePtr + 72) & 1) != 0 )
        {
          v36 = *(void **)(SparePtr + 64);
          if ( MEMORY[0xFFFFF780000003E0] )
            RtlXRestore((__int64)v36, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFDuLL);
          else
            _fxrstor(v36);
        }
        else
        {
          KeResetLegacyFloatingPointState();
          KeRestoreLegacyFloatingPointControlWord();
        }
        KiUmsRestoreUch(SparePtr);
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, NpxState, v31, v32);
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
      if ( v22 <= 0xFu && v38 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (v38 + 1));
        v14 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
  }
  result = v38;
  __writecr8(v38);
  CurrentThread->MiscFlags &= ~0x10000u;
  return result;
}
