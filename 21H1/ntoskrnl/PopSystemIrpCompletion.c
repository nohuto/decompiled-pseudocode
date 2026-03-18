/*
 * XREFs of PopSystemIrpCompletion @ 0x1409926B0
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x14039C760 (PoFxReportDevicePoweredOn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     PopFreeIrp @ 0x140377D3C (PopFreeIrp.c)
 *     IoFindDeviceThatFailedIrp @ 0x1403780B4 (IoFindDeviceThatFailedIrp.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140384F48 (PopCompleteNotifyTransitionCommon.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1403851E4 (PopFxIncrementDeviceSleepCount.c)
 *     PopDequeueQuerySetIrp @ 0x140394C4C (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceIrpPended @ 0x14056D38C (PopDiagTraceIrpPended.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 DeviceThatFailedIrp; // rdi
  char v5; // bp
  __int64 *v6; // r14
  int v7; // ebx
  int v8; // ebp
  PRKSEMAPHORE *v9; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  IRP *v23; // [rsp+30h] [rbp-48h] BYREF
  NTSTATUS Status; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v26[2]; // [rsp+40h] [rbp-38h] BYREF

  DeviceThatFailedIrp = 0LL;
  v5 = PopErrataDisablePrimaryDeviceFastResume;
  v6 = *(__int64 **)(a3 + 216);
  v7 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v25 = 0;
    v26[0] = &v23;
    v23 = a2;
    v26[1] = 16LL;
    EtwTraceKernelEvent((__int64)v26, 1u, 0x80008000, 0x1227u, 0x401802u);
  }
  if ( !PopPoFxSystemIrpWaitForReportDevicePoweredReg && !v5 || v7 != 1 )
    goto LABEL_6;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6 - 18);
  v12 = *(v6 - 10);
  v13 = v11;
  if ( !v12
    || !*(_QWORD *)(v12 + 136)
    || (_m_prefetchw((const void *)(v12 + 32)), (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) & 0x800) == 0) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 - 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
LABEL_6:
    v8 = 0;
    if ( (DWORD1(PopCurrentBroadcast) & 0x800000) == 0 )
      v8 = a2->IoStatus.Status;
    if ( v8 < 0 )
      DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
    PopDequeueQuerySetIrp((__int64)a2);
    PopFreeIrp(a2);
    v9 = (PRKSEMAPHORE *)qword_140C233B0;
    if ( (unsigned __int8)(*(_BYTE *)qword_140C233B0 - 2) <= 1u && *((int *)qword_140C233B0 + 1) > 1 )
    {
      PopFxIncrementDeviceSleepCount(*(v6 - 16));
      ObfDereferenceObjectWithTag((PVOID)*(v6 - 16), 0x72496F50u);
    }
    PopCompleteNotifyTransitionCommon((__int64)v9, v6, v8, DeviceThatFailedIrp);
    KeReleaseSemaphore(v9[5], 0, 1, 0);
    return 3221225494LL;
  }
  _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x400u);
  PopDiagTraceIrpPended((__int64)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 - 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
  }
  __writecr8(v13);
  return 3221225494LL;
}
