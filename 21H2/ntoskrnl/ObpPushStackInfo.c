/*
 * XREFs of ObpPushStackInfo @ 0x140564D28
 * Callers:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     IopCallDriverReference @ 0x14022BD00 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x14022CA10 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     NtCancelTimer @ 0x140248B00 (NtCancelTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14024A170 (ObpTraceObjectDereferenceIfActive.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140286C70 (ExpSetResourceOwnerPointerEx.c)
 *     PsGetThreadProperty @ 0x140292580 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x140293860 (IopQueueIrpToFileObject.c)
 *     ObReferenceObjectSafe @ 0x14029B150 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x14029E140 (ObReferenceObjectExWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140342370 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectSafeWithTag @ 0x140348AA0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140351F10 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140356710 (ObReferenceObjectByPointerWithTag.c)
 *     ObReferenceObjectByPointer @ 0x1403600E0 (ObReferenceObjectByPointer.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     PspReferenceCidTableEntry @ 0x140625A50 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x140650510 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406855C0 (ObpReferenceProcessObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CE20 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x14025F510 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140564C28 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1405A79B0 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x1408DEB70 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  BOOL CanThreadFault; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140CFC490 & 0x80u) != 0LL )
  {
    LOWORD(v8) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(v8, a1, a3, a4);
  }
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 && ObGetCurrentIrql() <= 2u )
  {
    v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    if ( v9 )
    {
      if ( v9 < 0x10u )
        memset(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
      v10 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
      CanThreadFault = MmCanThreadFault();
      v12 = v10 + 1;
      LOBYTE(v13) = a2;
      if ( CanThreadFault )
        ObpPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(a1, a2, a3, v12, (struct _SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
