/*
 * XREFs of KeClearSystemPriority @ 0x1402D4800
 * Callers:
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  char v10; // cl
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v22 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  v4 = CurrentPrcb->SchedulerAssist;
  if ( v4 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v17 = v4[6];
      v4[6] = v17 + 1;
      if ( v17 == -1 )
LABEL_21:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v14[6] - 1;
        v14[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v15[6];
        v15[6] = v19 + 1;
        if ( v19 == -1 )
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
      if ( v9 < 16 )
      {
        v10 = *(_BYTE *)(BugCheckParameter1 + 563)
            + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
            + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
        if ( v10 < v9 )
          KiSetPriorityThread(BugCheckParameter1, &v22, (unsigned int)v10);
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v20 = v12[6] - 1;
      v12[6] = v20;
      if ( !v20 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v22, CurrentIrql);
}
