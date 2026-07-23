/*
 * XREFs of ObpPushStackInfo @ 0x14055F888
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     IopCallDriverReference @ 0x140221CF0 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x1402244D0 (IoGetAttachedDeviceReference.c)
 *     ObReferenceObjectByPointer @ 0x14026E130 (ObReferenceObjectByPointer.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140279730 (ExpSetResourceOwnerPointerEx.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14027D9C0 (ObReferenceObjectByPointerWithTag.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14028F420 (IopVerifierExAllocatePoolWithQuota.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 *     PsGetThreadProperty @ 0x1403271E0 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x140327990 (IopQueueIrpToFileObject.c)
 *     ObReferenceObjectSafe @ 0x140328360 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E8650 (ObpReferenceProcessObjectByHandle.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObReferenceFileObjectForWrite @ 0x14068BE80 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402C8EE8 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     RtlCaptureStackBackTrace @ 0x1402E77B0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x14055F788 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1405A24E0 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x1408DB570 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int32 v12; // ebx
  BOOL CanThreadFault; // eax
  int v14; // r9d
  int v15; // edx
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
      v12 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
      CanThreadFault = MmCanThreadFault(v11, v10);
      v14 = v12 + 1;
      LOBYTE(v15) = a2;
      if ( CanThreadFault )
        ObpPushRefDerefInfo(a1, v15, (unsigned __int16)a3, v14, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(a1, a2, a3, v14, (_SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
