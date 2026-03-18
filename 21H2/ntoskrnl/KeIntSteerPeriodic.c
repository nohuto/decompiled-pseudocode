/*
 * XREFs of KeIntSteerPeriodic @ 0x140300190
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiIntSteerCalculateDistribution @ 0x1402FF310 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerDistributeInterrupts @ 0x1402FF4D0 (KiIntSteerDistributeInterrupts.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1403025F0 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerLogState @ 0x1403AFE08 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeIntSteerPeriodic(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int16 *v7; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *SchedulerAssist; // r9
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 *v26[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ah] [rbp-A6h]
  __int16 v29; // [rsp+5Eh] [rbp-A2h]
  __int128 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+70h] [rbp-90h] BYREF
  __int128 v32; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]

  v3 = PpmIntSteerLoadMax;
  if ( a1 )
  {
    v7 = (unsigned __int16 *)a1;
  }
  else
  {
    v7 = (unsigned __int16 *)a3;
    if ( a2 )
      v7 = (unsigned __int16 *)a2;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireSpinLock(&KiIntTrackSpinlock);
  v9 = 0LL;
  v32 = 0LL;
  if ( a1 )
  {
    if ( *(_WORD *)a1 )
      v9 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)&v32 = v9;
  }
  v31 = 0LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 )
      v10 = *(_QWORD *)(a2 + 8);
    else
      v10 = 0LL;
    *(_QWORD *)&v31 = v10;
  }
  v30 = 0LL;
  if ( *(_WORD *)a3 )
    v11 = *(_QWORD *)(a3 + 8);
  else
    v11 = 0LL;
  *(_QWORD *)&v30 = v11;
  KiCopyAffinityEx((__int64)&KiIntSteerMask, HIWORD(KiIntSteerMask), v7);
  KiIntSteerCalculateDistribution((__int64)&v32, (__int64 *)&v31, (__int64 *)&v30, v3);
  v25 = 0;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(&PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v38 = 4LL;
    v37 = &KiIntTrackRootCount;
    v25 = KeCountSetBitsAffinityEx(&KiIntSteerMask);
    v43 = &qword_140C2AB08;
    v39 = &v25;
    v44 = 8 * (unsigned __int16)KiIntSteerMask;
    v40 = 4LL;
    v41 = &KiIntSteerMask;
    v42 = 2LL;
    v45 = 0;
    EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  v28 = 0;
  v29 = 0;
  v24 = 0;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(&PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE) )
  {
    v26[1] = (unsigned __int16 *)qword_140D06E48[0];
    v26[0] = (unsigned __int16 *)&KeActiveProcessors;
    v27 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v24, v26) )
    {
      v33.Ptr = (ULONGLONG)&v24;
      *(_QWORD *)&v33.Size = 4LL;
      v35 = 4LL;
      v34 = KiProcessorBlock[v24] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 0, 0LL, 0LL, 2u, &v33);
    }
  }
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
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
  KiIntSteerDistributeInterrupts(v13, v12, v14);
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
