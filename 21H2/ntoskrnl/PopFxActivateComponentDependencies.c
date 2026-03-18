/*
 * XREFs of PopFxActivateComponentDependencies @ 0x1403551C8
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140355144 (PopFxActivateComponentWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1403BA340 (PopFxActivateComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxNextComponentParentRelationSafe @ 0x1404199A4 (PopFxNextComponentParentRelationSafe.c)
 */

bool __fastcall PopFxActivateComponentDependencies(__int64 a1, char a2)
{
  __int64 v2; // r13
  KSPIN_LOCK *v3; // r14
  KIRQL v6; // al
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  bool v14; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v3 = (KSPIN_LOCK *)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v8 = *(_DWORD *)(a1 + 172);
  v9 = 0LL;
  v10 = v6;
  *(_DWORD *)(a1 + 184) = v8;
  if ( v8 )
  {
    do
    {
      LOBYTE(v7) = a2;
      v11 = *(_QWORD *)(*(_QWORD *)(v2 + 832) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 8 * v9));
      PopFxActivateComponent(v2, v11, 2LL, v7);
      *(_BYTE *)(*(_QWORD *)(a1 + 176) + 8 * v9 + 4) = 1;
      if ( *(int *)(v11 + 88) < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 176) + 8 * v9 + 4) = 0;
        --*(_DWORD *)(a1 + 184);
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)(a1 + 172) );
  }
  v21 = 0LL;
  v12 = 0LL;
  while ( (unsigned __int8)PopFxNextComponentParentRelationSafe(a1, v12, &v21) )
  {
    v13 = *(_QWORD *)(v21 + 24);
    PopFxActivateComponent(*(_QWORD *)(v13 + 80), v13, 2LL, 0LL);
    v12 = v21;
    if ( *(int *)(v13 + 88) < 0 )
    {
      *(_DWORD *)(v21 + 16) |= 2u;
    }
    else
    {
      *(_DWORD *)(v21 + 16) |= 1u;
      ++*(_DWORD *)(a1 + 184);
    }
  }
  v14 = *(_DWORD *)(a1 + 184) == 0;
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return v14;
}
