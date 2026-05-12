/*
 * XREFs of RaidAdapterInsertUnit @ 0x1C0018128
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C0017BCC (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0019CA0 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C001A17C (RaidUnitConvertToNormalUnit.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00059E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B6C (RaidAdapterReleaseInterruptLock.c)
 *     StorInsertDictionary @ 0x1C00181D8 (StorInsertDictionary.c)
 */

void __fastcall RaidAdapterInsertUnit(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  KIRQL v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v4 = *(_QWORD **)(a1 + 144);
  v5 = (_QWORD *)(a2 + 56);
  if ( *v4 != a1 + 136 )
    __fastfail(3u);
  *v5 = a1 + 136;
  *(_QWORD *)(a2 + 64) = v4;
  *v4 = v5;
  *(_QWORD *)(a1 + 144) = v5;
  ++*(_DWORD *)(a1 + 152);
  v6 = RaidAdapterAcquireInterruptLock(a1);
  StorInsertDictionary(a1 + 160, a2 + 72);
  RaidAdapterReleaseInterruptLock(a1, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
