/*
 * XREFs of KeEnumerateQueueApc @ 0x14051A870
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x1404EE784 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateQueueApc(__int64 a1, __int64 a2, __int64 a3, char *SchedulerAssist)
{
  __int64 v4; // r13
  char v6; // di
  char v7; // r12
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  void (__fastcall *v14)(_QWORD *, __int64, __int64); // r15
  _QWORD **v15; // rsi
  _QWORD *i; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 result; // rax
  int v23; // [rsp+60h] [rbp+8h] BYREF
  void (__fastcall *v24)(_QWORD *, __int64, __int64); // [rsp+68h] [rbp+10h]

  v24 = (void (__fastcall *)(_QWORD *, __int64, __int64))a2;
  v4 = a3;
  if ( SchedulerAssist )
  {
    v6 = *SchedulerAssist;
    v7 = *SchedulerAssist;
  }
  else
  {
    v6 = 0;
    v7 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (char *)KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *((_DWORD *)SchedulerAssist + 5);
    *((_DWORD *)SchedulerAssist + 5) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  while ( 1 )
  {
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6];
        v10[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[6] - 1;
        v12[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = v24;
  do
  {
    v15 = (_QWORD **)(16LL * v6 + a1 + 152);
    for ( i = *v15; i != v15; i = (_QWORD *)*i )
      v14(i - 2, 88LL, v4);
    ++v6;
  }
  while ( v6 <= v7 );
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
