/*
 * XREFs of KeGenericProcessorCallback @ 0x14035BB4C
 * Callers:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeDisableTimer2 @ 0x1402D40E4 (KeDisableTimer2.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x14035C7A4 (ExpUpdateTimerConfiguration.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405685CC (KeUpdateDpcWatchdogConfiguration.c)
 *     KeSetIntervalProfile @ 0x1407F8914 (KeSetIntervalProfile.c)
 *     RtlUpdateSwapReference @ 0x1408331DC (RtlUpdateSwapReference.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409AFA60 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KeSetPriorityBoost @ 0x1403438F0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x14035B110 (KiRemoveBoostThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x14035BDA0 (KiEnumerateNextProcessorNumber.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall KeGenericProcessorCallback(
        _QWORD *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        int a4)
{
  __int64 v7; // r8
  _DWORD *v8; // r9
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v11; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  int v18; // r14d
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+24h] [rbp-DCh]
  __int64 v21; // [rsp+28h] [rbp-D8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+50h] [rbp-B0h]
  int v25; // [rsp+52h] [rbp-AEh]
  __int16 v26; // [rsp+56h] [rbp-AAh]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v28[34]; // [rsp+70h] [rbp-90h] BYREF

  v21 = a3;
  v20 = a4;
  Affinity = 0LL;
  memset(v28, 0, 0x108uLL);
  v25 = 0;
  v26 = 0;
  v19 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    LODWORD(v28[0]) = 2097153;
    a1 = v28;
    memset((char *)v28 + 4, 0, 0x104uLL);
    v28[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  *(_DWORD *)Affinity.Reserved = 0;
  CurrentPrcb = 0LL;
  Affinity.Reserved[2] = 0;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v11 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost((__int64)CurrentThread, 15LL, v7, v8);
  }
  v13 = a1[1];
  v23[0] = a1;
  v14 = v21;
  v24 = 0;
  v23[1] = v13;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber(&v19, v23) )
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
  v18 = v20;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v15 = (unsigned int)SchedulerAssist[5];
    SchedulerAssist[5] = v15 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v18 )
  {
    if ( (v18 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v11);
    else
      KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread, v15, (__int64)SchedulerAssist);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  KiCheckForThreadDispatch((__int64)CurrentPrcb, CurrentIrql);
}
