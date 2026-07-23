/*
 * XREFs of KeGenericProcessorCallback @ 0x140337898
 * Callers:
 *     KeGenericCallDpc @ 0x140303170 (KeGenericCallDpc.c)
 *     KeFlushQueuedDpcs @ 0x1403267C0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x140337EB8 (ExpUpdateTimerConfiguration.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 *     KeSetIntervalProfile @ 0x140720424 (KeSetIntervalProfile.c)
 *     RtlUpdateSwapReference @ 0x1407B505C (RtlUpdateSwapReference.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140905E40 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x140245760 (KeSetPriorityBoost.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x1402762E0 (KiEnumerateNextProcessorNumber.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
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
  __int64 v15; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+28h] [rbp-D8h]
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+52h] [rbp-AEh]
  __int16 v28; // [rsp+56h] [rbp-AAh]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v30[22]; // [rsp+70h] [rbp-90h] BYREF

  v23 = a3;
  Affinity = 0LL;
  memset(v30, 0, 0xA8uLL);
  v27 = 0;
  v28 = 0;
  v22 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    LODWORD(v30[0]) = 1310721;
    a1 = (unsigned __int16 *)v30;
    memset((char *)v30 + 4, 0, 0xA4uLL);
    v30[1] |= 1uLL;
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
  v25[0] = a1;
  v14 = v23;
  v25[1] = v13;
  v26 = 0;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber((__int64)&v22, v25) )
  {
    Affinity.Group = v22;
    Affinity.Mask = 1LL << SBYTE2(v22);
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
    v15 = (unsigned int)SchedulerAssist[5];
    SchedulerAssist[5] = v15 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v12);
    else
      KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread, v15, (__int64)SchedulerAssist);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v18) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch((__int64)CurrentPrcb, v18, v19, v20);
}
