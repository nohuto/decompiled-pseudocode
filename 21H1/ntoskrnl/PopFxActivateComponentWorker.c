/*
 * XREFs of PopFxActivateComponentWorker @ 0x140237664
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140236E70 (PopFxIdleWorkerTail.c)
 *     PoFxActivateComponent @ 0x1402374C0 (PoFxActivateComponent.c)
 *     PopFxActivateComponent @ 0x1403BA820 (PopFxActivateComponent.c)
 * Callees:
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1402370B4 (PopFxCompleteComponentActivation.c)
 *     PopFxAddRefDevice @ 0x140237700 (PopFxAddRefDevice.c)
 *     PopPluginComponentActive @ 0x14023BC58 (PopPluginComponentActive.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1403BA820 (PopFxActivateComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, int *a4)
{
  char v5; // r13
  LONG result; // eax
  __int64 v9; // r8
  char v10; // bl
  __int64 v11; // r8
  KSPIN_LOCK *v12; // r12
  KIRQL v13; // al
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rbp
  unsigned __int64 v17; // r14
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v5 = a3;
  result = PopFxAddRefDevice(a1);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v12 = (KSPIN_LOCK *)(a2 + 128);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v15 = *(_DWORD *)(a2 + 172);
    v16 = 0LL;
    v17 = v13;
    *(_DWORD *)(a2 + 184) = v15;
    v18 = v15 == 0;
    if ( v15 )
    {
      do
      {
        v19 = *(_QWORD *)(a2 + 176);
        LOBYTE(v14) = a3;
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * *(unsigned int *)(v19 + 8 * v16));
        *(_BYTE *)(v19 + 8 * v16 + 4) = 1;
        PopFxActivateComponent(a1, v20, 2LL, v14);
        if ( *(int *)(v20 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v16 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < *(_DWORD *)(a2 + 172) );
      v5 = a3;
      v12 = (KSPIN_LOCK *)(a2 + 128);
      v18 = *(_DWORD *)(a2 + 184) == 0;
    }
    v10 = v18;
    KxReleaseSpinLock(v12);
    result = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v17 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v18 = (result & SchedulerAssist[5]) == 0;
          v9 = (unsigned int)result & SchedulerAssist[5];
          SchedulerAssist[5] = v9;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
  }
  else
  {
    v10 = 1;
  }
  if ( v5 )
    return PopFxCompleteComponentActivation(a1, a2, 0);
  if ( v10 )
  {
    LOBYTE(v9) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v9, a4);
    if ( (_BYTE)result == 1 )
      return PopFxProcessWork(0LL, a4, v11);
  }
  return result;
}
