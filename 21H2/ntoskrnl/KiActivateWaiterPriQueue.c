/*
 * XREFs of KiActivateWaiterPriQueue @ 0x14021CC24
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x14021C900 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 * Callees:
 *     KiAttemptFastRemovePriQueue @ 0x14021CCA0 (KiAttemptFastRemovePriQueue.c)
 *     KiWakePriQueueWaiter @ 0x14021CD7C (KiWakePriQueueWaiter.c)
 */

_QWORD *__fastcall KiActivateWaiterPriQueue(ULONG_PTR a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  ULONG_PTR v4; // rcx

  result = (_QWORD *)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      result = (_QWORD *)KiAttemptFastRemovePriQueue(a1);
      v3 = result;
      if ( result )
      {
        result = (_QWORD *)KiWakePriQueueWaiter(KeGetCurrentPrcb(), a1, result, 0LL);
        if ( !(_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 4);
          v4 = a1 + 24;
          result = *(_QWORD **)(a1 + 24);
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
            __fastfail(3u);
          *v3 = result;
          v3[1] = v4;
          result[1] = v3;
          *(_QWORD *)v4 = v3;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
