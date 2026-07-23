/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x14021DA44
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x14021D880 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14021D900 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x14021D9B0 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x140379690 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x1405B7090 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x1405B70F0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1405B7140 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  __int16 v2; // di
  bool v3; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v7; // rcx
  int v8; // eax
  int v9; // eax
  __int16 v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  v2 = v10;
  _disable();
  v3 = (v2 & 0x200) != 0;
  while ( 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[6];
        SchedulerAssist[6] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v7[6] - 1;
        v7[6] = v9;
        if ( !v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( v3 )
      _enable();
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v3;
}
