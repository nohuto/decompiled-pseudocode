/*
 * XREFs of PopFxActivateComponentWorker @ 0x140281BAC
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140282390 (PopFxIdleWorkerTail.c)
 *     PoFxActivateComponent @ 0x140283CB0 (PoFxActivateComponent.c)
 *     PopFxActivateComponent @ 0x1403BEC70 (PopFxActivateComponent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopFxAddRefDevice @ 0x140281C48 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1402825D4 (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x140282E50 (PopPluginComponentActive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1403BEC70 (PopFxActivateComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, __int64 a4)
{
  char v5; // r13
  __int64 result; // rax
  __int64 v9; // r8
  char v10; // bl
  KSPIN_LOCK *v11; // r12
  KIRQL v12; // al
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // rbp
  unsigned __int64 v16; // r14
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v5 = a3;
  result = PopFxAddRefDevice(a1);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v11 = (KSPIN_LOCK *)(a2 + 128);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v14 = *(_DWORD *)(a2 + 172);
    v15 = 0LL;
    v16 = v12;
    *(_DWORD *)(a2 + 184) = v14;
    v17 = v14 == 0;
    if ( v14 )
    {
      do
      {
        v18 = *(_QWORD *)(a2 + 176);
        LOBYTE(v13) = a3;
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * *(unsigned int *)(v18 + 8 * v15));
        *(_BYTE *)(v18 + 8 * v15 + 4) = 1;
        PopFxActivateComponent(a1, v19, 2LL, v13);
        if ( *(int *)(v19 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v15 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *(_DWORD *)(a2 + 172) );
      v5 = a3;
      v11 = (KSPIN_LOCK *)(a2 + 128);
      v17 = *(_DWORD *)(a2 + 184) == 0;
    }
    v10 = v17;
    KxReleaseSpinLock(v11);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v16 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          v9 = (unsigned int)result & SchedulerAssist[5];
          SchedulerAssist[5] = v9;
          if ( v17 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v16);
  }
  else
  {
    v10 = 1;
  }
  if ( v5 )
    return PopFxCompleteComponentActivation(a1);
  if ( v10 )
  {
    LOBYTE(v9) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v9, a4);
    if ( (_BYTE)result == 1 )
      return PopFxProcessWork(0LL);
  }
  return result;
}
