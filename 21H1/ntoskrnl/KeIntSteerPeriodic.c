/*
 * XREFs of KeIntSteerPeriodic @ 0x140277270
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140276C50 (PpmParkSteerInterrupts.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x14026EA40 (KiIntSteerEtwEventEnabled.c)
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiIntSteerDistributeInterrupts @ 0x140277450 (KiIntSteerDistributeInterrupts.c)
 *     KeCopyAffinityEx @ 0x140277930 (KeCopyAffinityEx.c)
 *     KiIntSteerCalculateDistribution @ 0x140277980 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerLogState @ 0x140374D84 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeIntSteerPeriodic(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  ULONG_PTR *i; // rdi
  ULONG_PTR *j; // rsi
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  int v14; // [rsp+40h] [rbp-69h] BYREF
  __int128 v15; // [rsp+48h] [rbp-61h] BYREF
  __int64 v16; // [rsp+58h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-49h] BYREF
  __int64 v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  int *v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+98h] [rbp-11h]
  int *v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  int *v25; // [rsp+B0h] [rbp+7h]
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  __int64 *v27; // [rsp+C0h] [rbp+17h]
  int v28; // [rsp+C8h] [rbp+1Fh]
  int v29; // [rsp+CCh] [rbp+23h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireSpinLock(&KiIntTrackSpinlock);
  KiIntSteerCalculateDistribution(a1, a2);
  KeCopyAffinityEx(&KiIntSteerMask, a1);
  KiIntSteerMaskCount = a2;
  if ( KiIntSteerEtwEventEnabled((__int64)&PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v22 = 4LL;
    v21 = &KiIntTrackRootCount;
    v24 = 4LL;
    v23 = &KiIntSteerMaskCount;
    v25 = &KiIntSteerMask;
    v26 = 2LL;
    v29 = 0;
    v27 = &qword_140C2B0E8;
    v28 = 160 * (unsigned __int16)KiIntSteerMask;
    EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  v14 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( KiIntSteerEtwEventEnabled((__int64)&PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE) )
  {
    *((_QWORD *)&v15 + 1) = qword_140CFC838[0];
    *(_QWORD *)&v15 = KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v14, (unsigned __int16 **)&v15) )
    {
      v17.Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&v17.Size = 4LL;
      v19 = 4LL;
      v18 = KiProcessorBlock[v14] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 0, 0LL, 0LL, 2u, &v17);
    }
  }
  if ( KiIntSteerEtwEventEnabled((__int64)PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
  {
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      if ( i[22] != i[20] )
      {
        for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
          KiIntSteerLogState(j, PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
      }
    }
  }
  KiIntSteerDistributeInterrupts();
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
