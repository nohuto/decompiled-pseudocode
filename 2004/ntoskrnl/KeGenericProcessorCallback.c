/*
 * XREFs of KeGenericProcessorCallback @ 0x1402E45F4
 * Callers:
 *     KeDisableTimer2 @ 0x1402755A0 (KeDisableTimer2.c)
 *     KeFlushQueuedDpcs @ 0x1402E16C0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1402E2FF0 (ExpUpdateTimerConfiguration.c)
 *     KeRemoveQueueDpcEx @ 0x1402FFC20 (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x14033FF70 (KeGenericCallDpc.c)
 *     KeSetIntervalProfile @ 0x1407222E4 (KeSetIntervalProfile.c)
 *     RtlUpdateSwapReference @ 0x1407B81CC (RtlUpdateSwapReference.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409070F0 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x14020E760 (KiRemoveBoostThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x14021D290 (KiEnumerateNextProcessorNumber.c)
 *     KeSetPriorityBoost @ 0x140281F40 (KeSetPriorityBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall KeGenericProcessorCallback(
        unsigned __int16 *a1,
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
  unsigned __int16 *v13; // rax
  __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // si
  __int64 v16; // rdx
  _DWORD *SchedulerAssist; // r9
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h]
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v22[2]; // [rsp+40h] [rbp-C0h] BYREF
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
    a1 = (unsigned __int16 *)v27;
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
      KeSetPriorityBoost((__int64)CurrentThread, 15LL, v7, v8);
  }
  v13 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v22[0] = a1;
  v14 = v20;
  v22[1] = v13;
  v23 = 0;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber((__int64)&v19, v22) )
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
  return KiCheckForThreadDispatch(CurrentPrcb, v16);
}
