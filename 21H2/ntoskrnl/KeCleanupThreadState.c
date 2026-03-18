/*
 * XREFs of KeCleanupThreadState @ 0x1402334D8
 * Callers:
 *     PspThreadDelete @ 0x1407A41E0 (PspThreadDelete.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v3; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v6; // rcx
  unsigned int v7; // edx
  ULONG_PTR v8; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  char v11; // al
  char v12; // al
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  int v21; // [rsp+60h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 4LL;
  BugCheckParameter4 = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  while ( 1 )
  {
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v6[6];
        v6[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[6] - 1;
        v14[6] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  if ( *(_DWORD *)(BugCheckParameter1 + 1028) != 32 )
  {
    v10 = *(char *)(BugCheckParameter1 + 1028);
    v11 = *(_BYTE *)(v10 + BugCheckParameter1 + 824);
    if ( !v11 )
      KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 1028), 2uLL, 0LL);
    v12 = v11 - 1;
    *(_BYTE *)(v10 + BugCheckParameter1 + 824) = v12;
    if ( !v12 )
      *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v10;
    *(_DWORD *)(BugCheckParameter1 + 1028) = 32;
  }
  KiReleaseThreadLockSafe(BugCheckParameter1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 1) != 0 )
  {
    v7 = 0;
    v8 = BugCheckParameter1 + 1696;
    while ( !*(_QWORD *)v8 )
    {
      if ( *(_DWORD *)(v8 + 16) >= 0x100u )
      {
        v3 = 2LL;
        goto LABEL_42;
      }
      if ( BugCheckParameter1 != v8 - 96LL * *(unsigned __int8 *)(v8 + 16) - 1696 )
      {
        v3 = 3LL;
        goto LABEL_42;
      }
      if ( *(_DWORD *)(v8 + 88) )
        goto LABEL_42;
      ++v7;
      v8 += 96LL;
      if ( v7 >= 6 )
        goto LABEL_14;
    }
    v3 = 1LL;
    BugCheckParameter4 = *(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL;
LABEL_42:
    KeBugCheckEx(0x153u, BugCheckParameter1, v8, v3, BugCheckParameter4);
  }
LABEL_14:
  if ( *(_WORD *)(BugCheckParameter1 + 868) )
    KeFlushQueuedDpcs();
}
