/*
 * XREFs of RaidAdapterRemoveUnit @ 0x1C0014D64
 * Callers:
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0014D10 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C0016FFC (RaidUnitConvertToZombieUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0019CD0 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00064E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C000666C (RaidAdapterReleaseInterruptLock.c)
 *     StorRemoveDictionary @ 0x1C0014E34 (StorRemoveDictionary.c)
 */

void __fastcall RaidAdapterRemoveUnit(__int64 a1, __int64 a2)
{
  KIRQL v4; // bl
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = RaidAdapterAcquireInterruptLock(a1);
  StorRemoveDictionary(
    a1 + 144,
    (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a2 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a2 + 96))) << 8));
  RaidAdapterReleaseInterruptLock(a1, v4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v5 = (_QWORD *)(a2 + 56);
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*(_DWORD *)(a1 + 136);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
