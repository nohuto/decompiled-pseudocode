/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x140220FB0
 * Callers:
 *     PopFxProcessWorkPool @ 0x14022EBF8 (PopFxProcessWorkPool.c)
 *     KiAltReturnWorkerRoutine @ 0x14057C370 (KiAltReturnWorkerRoutine.c)
 *     WheapWorkQueueWorkerRoutine @ 0x1406462F0 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x14069A660 (WmipEventNotification.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  __int16 v2; // si
  struct _LIST_ENTRY *Flink; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  bool v7; // si
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rax
  struct _LIST_ENTRY *v12; // rax
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  __int16 v19; // [rsp+30h] [rbp-8h]
  int v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = v19;
  Flink = 0LL;
  v20 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (v2 & 0x200) != 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = SchedulerAssist[6];
      SchedulerAssist[6] = v15 + 1;
      if ( v15 == -1 )
LABEL_20:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v13[6] - 1;
        v13[6] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( v7 )
      _enable();
    do
      KeYieldProcessorEx(&v20);
    while ( *Lock );
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v14[6];
        v14[6] = v17 + 1;
        if ( v17 == -1 )
          goto LABEL_20;
      }
    }
  }
  if ( ListHead->Flink != ListHead )
  {
    Flink = ListHead->Flink;
    v12 = ListHead->Flink->Flink;
    if ( ListHead->Flink->Blink != ListHead || v12->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v12;
    v12->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v18 = v10[6] - 1;
      v10[6] = v18;
      if ( !v18 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  if ( v7 )
    _enable();
  return Flink;
}
