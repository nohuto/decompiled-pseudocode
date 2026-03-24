/*
 * XREFs of KeSetSchedulingGroupCycleNotification @ 0x1402C1378
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 *v7; // r13
  _QWORD *v8; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rbp
  _DWORD *v11; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]

  v23 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = a3;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v7 = KiProcessorBlock;
      v24 = (unsigned int)KeNumberProcessors_0;
      v8 = (_QWORD *)(a1 + 128);
      do
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = 0;
        v10 = *v7;
        while ( 1 )
        {
          v11 = CurrentPrcb->SchedulerAssist;
          if ( v11 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v14 = v11[6];
              v11[6] = v14 + 1;
              if ( v14 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
            break;
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = v13[6] - 1;
              v13[6] = v15;
              if ( !v15 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v22, a2, a3, (__int64)SchedulerAssist);
          while ( *(_QWORD *)(v10 + 48) );
        }
        v8[5] = *v8;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
        v12 = KeGetCurrentPrcb();
        a2 = (__int64)v12->SchedulerAssist;
        if ( a2 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v16 = *(_DWORD *)(a2 + 24) - 1;
            *(_DWORD *)(a2 + 24) = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        ++v7;
        v8 += 53;
        --v24;
      }
      while ( v24 );
    }
    *(_QWORD *)(a1 + 72) = v23;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), v4);
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
  }
}
