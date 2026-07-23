/*
 * XREFs of KeRundownQueueEx @ 0x140227E38
 * Callers:
 *     KeRundownQueue @ 0x140227CB0 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x140227CC8 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x1406EC060 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x1408BD848 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KeRundownQueueCommon @ 0x140227F1C (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140228354 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, char a2)
{
  char CurrentIrql; // si
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v8; // rcx
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiAcquireKobjectLockSafe(a1);
  v5 = (_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 == a1 + 24 )
  {
    v6 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v8 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v8 != v5 )
      __fastfail(3u);
    *v8 = v6;
    *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v5 = v5;
  }
  KeRundownQueueCommon(a1, a1 + 48, a1 + 40, 1, a2);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( a2 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  return v6;
}
