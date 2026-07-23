/*
 * XREFs of KiIsPrimaryPresent @ 0x140525F64
 * Callers:
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     NtUmsThreadYield @ 0x1408BDEF0 (NtUmsThreadYield.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiIsPrimaryPresent(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v5; // r14
  _QWORD *Object; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // edx
  bool v19; // zf
  __int64 v22; // [rsp+78h] [rbp+10h]
  bool v23; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+88h] [rbp+20h] BYREF

  v22 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v23 = 0;
  Object = CurrentThread->WaitBlock[3].Object;
  v7 = Object[4];
  v8 = Object[5];
  if ( !v7 || !v8 )
    return v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = 0;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v11[6];
        v11[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[6] - 1;
        v13[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v24, a2, a3, (__int64)SchedulerAssist);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v7 )
    v23 = !_interlockedbittestandset((volatile signed __int32 *)v7, 7u);
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  if ( v23 )
  {
    if ( *(_QWORD *)(v7 + 24) != v8 || *(_DWORD *)(v8 - 72) != *((_DWORD *)Object + 6) )
      goto LABEL_28;
    if ( a1 )
    {
      if ( *(_QWORD *)(v8 + 16) )
      {
LABEL_28:
        _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
        goto LABEL_29;
      }
      *(_QWORD *)(v8 + 16) = a1;
      *(_QWORD *)(v8 + 24) = v22;
    }
    v5 = 1;
    goto LABEL_28;
  }
LABEL_29:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
