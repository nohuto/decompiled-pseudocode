/*
 * XREFs of KeInitializeApc @ 0x1402D69A0
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     MiStoreModifiedWriteDereference @ 0x1402582F0 (MiStoreModifiedWriteDereference.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140331A5C (MiQueueSyncModifiedWriterApc.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0900 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x1405040F0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1405043B0 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A5210 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A9E7C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AD440 (EtwpCovSampCaptureQueueApc.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     NtQueueApcThreadEx @ 0x140699390 (NtQueueApcThreadEx.c)
 *     PerfLogImageUnload @ 0x140699AB0 (PerfLogImageUnload.c)
 *     IopCancelIrpsInThreadList @ 0x1406C2AC8 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x1407734E4 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14088ADB4 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408BF440 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 *     KeInitThread @ 0x1409922E0 (KeInitThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  char result; // al

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 32) = a4;
  result = a6 != 0 ? a7 : 0;
  *(_BYTE *)(a1 + 81) = result;
  *(_QWORD *)(a1 + 56) = a8 & -(__int64)(a6 != 0);
  *(_BYTE *)(a1 + 82) = 0;
  return result;
}
