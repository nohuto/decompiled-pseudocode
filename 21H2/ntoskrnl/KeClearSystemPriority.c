/*
 * XREFs of KeClearSystemPriority @ 0x14022FFB0
 * Callers:
 *     PspRevertContainerImpersonation @ 0x14021FAE0 (PspRevertContainerImpersonation.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x140230BD0 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeClearSystemPriority(ULONG_PTR BugCheckParameter1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  char v6; // al
  char v7; // al
  unsigned int v8; // edx
  char v9; // dl
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  v4 = CurrentPrcb->SchedulerAssist;
  if ( v4 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v16 = v4[6];
      v4[6] = v16 + 1;
      if ( v16 == -1 )
LABEL_21:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v13[6] - 1;
        v13[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v14[6];
        v14[6] = v18 + 1;
        if ( v18 == -1 )
          goto LABEL_21;
      }
    }
  }
  v5 = *(char *)(BugCheckParameter1 + 795);
  v6 = *(_BYTE *)(v5 + BugCheckParameter1 + 824);
  if ( !v6 )
    KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 795), 2uLL, 0LL);
  v7 = v6 - 1;
  *(_BYTE *)(v5 + BugCheckParameter1 + 824) = v7;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v5);
    *(_DWORD *)(BugCheckParameter1 + 856) = v8;
    if ( v8 < 1 << v5 )
    {
      v9 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v9 < 16
        && (char)(*(_BYTE *)(BugCheckParameter1 + 563)
                + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
                + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4)) < v9 )
      {
        KiSetPriorityThread(BugCheckParameter1, &v21);
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v19 = v11[6] - 1;
      v11[6] = v19;
      if ( !v19 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v21, CurrentIrql);
}
