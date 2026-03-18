/*
 * XREFs of KeClearSystemPriority @ 0x14026B280
 * Callers:
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall KeClearSystemPriority(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  char v10; // al
  unsigned int v11; // edx
  char v12; // dl
  char v13; // cl
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+50h] [rbp+8h] BYREF
  __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v24 = 0LL;
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
  v23 = 0;
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v19 = v7[6];
      v7[6] = v19 + 1;
      if ( v19 == -1 )
LABEL_21:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v17[6] - 1;
        v17[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v18[6];
        v18[6] = v21 + 1;
        if ( v21 == -1 )
          goto LABEL_21;
      }
    }
  }
  v8 = *(char *)(BugCheckParameter1 + 795);
  v9 = *(_BYTE *)(v8 + BugCheckParameter1 + 824);
  if ( !v9 )
    KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 795), 2uLL, 0LL);
  v10 = v9 - 1;
  *(_BYTE *)(v8 + BugCheckParameter1 + 824) = v10;
  if ( !v10 )
  {
    v11 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v8);
    *(_DWORD *)(BugCheckParameter1 + 856) = v11;
    if ( v11 < 1 << v8 )
    {
      v12 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v12 < 16 )
      {
        v13 = *(_BYTE *)(BugCheckParameter1 + 563)
            + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
            + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
        if ( v13 < v12 )
          KiSetPriorityThread(BugCheckParameter1, &v24, (unsigned int)v13);
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v22 = v15[6] - 1;
      v15[6] = v22;
      if ( !v22 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v24, CurrentIrql, SchedulerAssist);
}
