/*
 * XREFs of ExInterlockedInsertTailList @ 0x140223920
 * Callers:
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     PopFxQueueWorkItem @ 0x1403B19D4 (PopFxQueueWorkItem.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     KiAltContextWorkQueueAddItem @ 0x14057C248 (KiAltContextWorkQueueAddItem.c)
 *     WheapWorkQueueAddItem @ 0x140646270 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x140862800 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x140A84180 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140A843D0 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  __int16 v3; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  bool v8; // bp
  _DWORD *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int16 v20; // [rsp+40h] [rbp-8h]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = v20;
  v21 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (v3 & 0x200) != 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v16 = SchedulerAssist[6];
      SchedulerAssist[6] = v16 + 1;
      if ( v16 == -1 )
LABEL_18:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v14[6] - 1;
        v14[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( v8 )
      _enable();
    do
      KeYieldProcessorEx(&v21);
    while ( *Lock );
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v15[6];
        v15[6] = v18 + 1;
        if ( v18 == -1 )
          goto LABEL_18;
      }
    }
  }
  Blink = ListHead->Blink;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v19 = v12[6] - 1;
      v12[6] = v19;
      if ( !v19 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( v8 )
    _enable();
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
