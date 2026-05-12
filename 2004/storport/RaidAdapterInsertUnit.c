/*
 * XREFs of RaidAdapterInsertUnit @ 0x1C0017C90
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C0017734 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0018FCC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0019698 (RaidUnitConvertToNormalUnit.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00069A8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006B2C (RaidAdapterReleaseInterruptLock.c)
 *     StorInsertDictionary @ 0x1C0017D40 (StorInsertDictionary.c)
 */

void __fastcall RaidAdapterInsertUnit(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  KIRQL v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v4 = *(_QWORD **)(a1 + 128);
  v5 = (_QWORD *)(a2 + 56);
  if ( *v4 != a1 + 120 )
    __fastfail(3u);
  *v5 = a1 + 120;
  *(_QWORD *)(a2 + 64) = v4;
  *v4 = v5;
  *(_QWORD *)(a1 + 128) = v5;
  ++*(_DWORD *)(a1 + 136);
  v6 = RaidAdapterAcquireInterruptLock(a1);
  StorInsertDictionary(a1 + 144, a2 + 72);
  RaidAdapterReleaseInterruptLock(a1, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
