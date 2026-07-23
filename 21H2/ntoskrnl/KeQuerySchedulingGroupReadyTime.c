/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x140237934
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406813CC (PspQueryJobHierarchyAccountingInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v2; // rbp
  __int64 *v3; // r15
  __int64 v4; // rdi
  __int64 v5; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // r14
  _DWORD *v8; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // edx
  bool v21; // zf
  int v22; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = KiProcessorBlock;
    v4 = a1 + 128;
    v5 = (unsigned int)KeNumberProcessors_0;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = 0;
      v7 = *v3;
      while ( 1 )
      {
        v8 = CurrentPrcb->SchedulerAssist;
        if ( v8 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v8[6];
            v8[6] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v12[6] - 1;
            v12[6] = v15;
            if ( !v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v22);
        while ( *(_QWORD *)(v7 + 48) );
      }
      v2 += *(_QWORD *)(v4 + 56);
      if ( (*(_BYTE *)(v4 + 112) & 1) != 0 )
        v2 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v4 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v9 = KeGetCurrentPrcb();
      v10 = v9->SchedulerAssist;
      if ( v10 )
      {
        if ( v9->NestingLevel <= 1u )
        {
          v16 = v10[6] - 1;
          v10[6] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
      ++v3;
      v4 += 424LL;
      --v5;
    }
    while ( v5 );
  }
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
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
