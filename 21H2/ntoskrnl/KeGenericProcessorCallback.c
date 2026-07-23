/*
 * XREFs of KeGenericProcessorCallback @ 0x14029C4C8
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     KeDisableTimer2 @ 0x14026DE70 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14029C250 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x14029DA30 (KeFlushQueuedDpcs.c)
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     KeSetIntervalProfile @ 0x1407345E4 (KeSetIntervalProfile.c)
 *     RtlUpdateSwapReference @ 0x1407CAFDC (RtlUpdateSwapReference.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090A620 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x1402CCDF0 (KiEnumerateNextProcessorNumber.c)
 *     KeSetPriorityBoost @ 0x1402D3F40 (KeSetPriorityBoost.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        _QWORD *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h]
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+52h] [rbp-AEh]
  __int16 v22; // [rsp+56h] [rbp-AAh]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[22]; // [rsp+70h] [rbp-90h] BYREF

  v17 = a3;
  Affinity = 0LL;
  memset(v24, 0, 0xA8uLL);
  v21 = 0;
  v22 = 0;
  v16 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    LODWORD(v24[0]) = 1310721;
    a1 = v24;
    memset((char *)v24 + 4, 0, 0xA4uLL);
    v24[1] |= 1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v10 = 0;
  Affinity.Reserved[2] = 0;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v10 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost(CurrentThread, 15LL);
  }
  v11 = a1[1];
  v19[0] = a1;
  v12 = v17;
  v19[1] = v11;
  v20 = 0;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber(&v16, v19) )
  {
    Affinity.Group = v16;
    Affinity.Mask = 1LL << SBYTE2(v16);
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    a2(CurrentPrcb, v12);
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
      KeSetPriorityThread(CurrentThread, v10);
    else
      KiRemoveBoostThread(CurrentPrcb, CurrentThread);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch((__int64)CurrentPrcb, CurrentIrql);
}
