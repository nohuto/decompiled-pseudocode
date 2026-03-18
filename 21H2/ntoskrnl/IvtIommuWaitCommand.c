/*
 * XREFs of IvtIommuWaitCommand @ 0x14052F618
 * Callers:
 *     IvtInvalidateRemappingTableEntries @ 0x1404598B2 (IvtInvalidateRemappingTableEntries.c)
 *     IvtFlushTbInternal @ 0x14052E568 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x14052F1C8 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x14052F224 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14052F29C (IvtInvalidateScalableModePasidCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IvtIommuSendCommand @ 0x14052F378 (IvtIommuSendCommand.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 result; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 208);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
  }
  v17[0] = *(_QWORD *)(a1 + 192);
  v17[1] = *(_QWORD *)(a1 + 200);
  *(_DWORD *)(a1 + 176) = 1;
  IvtIommuSendCommand(a1, (unsigned __int64)v17, 1LL);
  v9 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 176);
    if ( !(_DWORD)result )
      break;
    if ( (++v9 & dword_140C4C47C) != 0 || !qword_140C4C480 )
      _mm_pause();
    else
      qword_140C4C480(v9, v7, v8);
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
