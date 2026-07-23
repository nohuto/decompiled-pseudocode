/*
 * XREFs of KeSetSchedulingGroupCycleNotification @ 0x14023F818
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 *v6; // r13
  _QWORD *v7; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rbp
  _DWORD *v10; // rcx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+70h] [rbp+18h]

  v24 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v6 = KiProcessorBlock;
      v25 = (unsigned int)KeNumberProcessors_0;
      v7 = (_QWORD *)(a1 + 128);
      do
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = 0;
        v9 = *v6;
        while ( 1 )
        {
          v10 = CurrentPrcb->SchedulerAssist;
          if ( v10 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = v10[6];
              v10[6] = v15 + 1;
              if ( v15 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
            break;
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
          do
            KeYieldProcessorEx(&v23);
          while ( *(_QWORD *)(v9 + 48) );
        }
        v7[5] = *v7;
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v17 = v12[6] - 1;
            v12[6] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        ++v6;
        v7 += 53;
        --v25;
      }
      while ( v25 );
    }
    *(_QWORD *)(a1 + 72) = v24;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), a3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
