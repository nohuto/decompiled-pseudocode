/*
 * XREFs of ViPendingCompleteAfterWait @ 0x1409D8B34
 * Callers:
 *     ViPendingCompleteAtDPC @ 0x1409D8C70 (ViPendingCompleteAtDPC.c)
 *     ViPendingWorkerThread @ 0x1409D8EB0 (ViPendingWorkerThread.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A0BDC (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1405A0C24 (ViIrpDatabaseReleaseLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x1409C93C0 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E393C (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall ViPendingCompleteAfterWait(char *P)
{
  _QWORD *v2; // rdi
  KIRQL v3; // al
  IRP *v4; // r14
  __int64 v5; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _DMA_ADAPTER *v7; // rbp
  bool v8; // zf
  unsigned __int64 v9; // rbx
  unsigned int (__fastcall *CompletionRoutine)(_QWORD, _QWORD, _QWORD); // rax
  KIRQL v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)P + 42) == 1 )
    KeWaitForSingleObject(P + 104, Executive, 0, 0, 0LL);
  v2 = *(_QWORD **)P;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)P + 8LL));
  v4 = (IRP *)*v2;
  v5 = v2[27];
  *((_BYTE *)v2 + 16) = v3;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  *((_DWORD *)v2 + 14) &= ~0x10u;
  if ( !v5 || (v7 = *(struct _DMA_ADAPTER **)(v5 + 40)) == 0LL )
    v7 = 0LL;
  v8 = (*((_DWORD *)v2 + 6))-- == 1;
  v11 = 0;
  if ( v8 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v11);
    v9 = *v2;
    ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v2[6])(v2, *v2, 1LL);
    *v2 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v9 >> 12))),
      v9);
    ViIrpDatabaseReleaseLockExclusive(v11);
  }
  _InterlockedDecrement((volatile signed __int32 *)v2 + 5);
  VfIrpDatabaseEntryReleaseLock(v2);
  CompletionRoutine = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))CurrentStackLocation[-1].CompletionRoutine;
  if ( !CompletionRoutine || CompletionRoutine(*((_QWORD *)P + 1), v4, CurrentStackLocation[-1].Context) != -1073741802 )
    IofCompleteRequest(v4, P[172]);
  if ( v7 )
    HalPutDmaAdapter(v7);
  ExFreePoolWithTag(P, 0);
}
