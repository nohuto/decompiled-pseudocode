/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x14024319C
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedAddUlong @ 0x140386240 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14063F230 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14063F290 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14063F2E0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  __int16 v2; // di
  bool v3; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v7; // eax
  _DWORD *v8; // rcx
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
        v7 = SchedulerAssist[6];
        SchedulerAssist[6] = v7 + 1;
        if ( v7 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v8[6] - 1;
        v8[6] = v9;
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
