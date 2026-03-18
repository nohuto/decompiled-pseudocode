/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x140330C54
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x140330A90 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140330B10 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x140330BC0 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x1403779B0 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x1405B18D0 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x1405B1930 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1405B1980 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // di
  bool v6; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int16 v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  v5 = v13;
  _disable();
  v6 = (v5 & 0x200) != 0;
  while ( 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[6];
        SchedulerAssist[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v10[6] - 1;
        v10[6] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( v6 )
      _enable();
    do
      KeYieldProcessorEx(&v14, a2, a3, a4);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v6;
}
