/*
 * XREFs of KeQueryCpuSetsThread @ 0x14051C9D0
 * Callers:
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x14029D008 (KiGetThreadCpuSetMaskPointer.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 ThreadCpuSetMaskPointer; // r12
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v23; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+60h] [rbp+18h] BYREF

  v24 = 0;
  v4 = 20;
  ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v24);
  if ( v24 <= 0x14 )
    v4 = v24;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v5 = (-1LL << (CurrentIrql + 1)) & 4;
    v6 = (unsigned int)v5 | SchedulerAssist[5];
    SchedulerAssist[5] = v6;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v11[6];
        v11[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[6] - 1;
        v13[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23, v5, v6, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( v4 )
  {
    v15 = ThreadCpuSetMaskPointer - (_QWORD)a2;
    v16 = v4;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v15);
      ++a2;
      --v16;
    }
    while ( v16 );
  }
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
  __writecr8(CurrentIrql);
  return v24;
}
