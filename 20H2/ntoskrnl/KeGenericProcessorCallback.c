/*
 * XREFs of KeGenericProcessorCallback @ 0x14033CC78
 * Callers:
 *     KeFlushQueuedDpcs @ 0x14030D5C0 (KeFlushQueuedDpcs.c)
 *     KeGenericCallDpc @ 0x140310FA0 (KeGenericCallDpc.c)
 *     KeDisableTimer2 @ 0x14033C330 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14033CBB8 (ExpUpdateTimerConfiguration.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 *     KeSetIntervalProfile @ 0x1407303F4 (KeSetIntervalProfile.c)
 *     RtlUpdateSwapReference @ 0x1407C6A5C (RtlUpdateSwapReference.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090CD10 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x140291830 (KeSetPriorityBoost.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x14033CE90 (KiEnumerateNextProcessorNumber.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        _QWORD *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        int a4)
{
  __int64 v7; // r8
  _DWORD *v8; // r9
  struct _KTHREAD *CurrentThread; // rdi
  _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // si
  __int64 v16; // rdx
  _DWORD *SchedulerAssist; // r9
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h]
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+52h] [rbp-AEh]
  __int16 v25; // [rsp+56h] [rbp-AAh]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v27[22]; // [rsp+70h] [rbp-90h] BYREF

  v20 = a3;
  Affinity = 0LL;
  memset(v27, 0, 0xA8uLL);
  v24 = 0;
  v25 = 0;
  v19 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    LODWORD(v27[0]) = 1310721;
    a1 = v27;
    memset((char *)v27 + 4, 0, 0xA4uLL);
    v27[1] |= 1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v12 = 0;
  Affinity.Reserved[2] = 0;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v12 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost((__int64)CurrentThread, 15, v7, v8);
  }
  v13 = a1[1];
  v22[0] = a1;
  v14 = v20;
  v22[1] = v13;
  v23 = 0;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber(&v19, v22) )
  {
    Affinity.Group = v19;
    Affinity.Mask = 1LL << SBYTE2(v19);
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    a2(CurrentPrcb, v14);
    p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v12);
    else
      KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v16) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch((__int64)CurrentPrcb, v16);
}
