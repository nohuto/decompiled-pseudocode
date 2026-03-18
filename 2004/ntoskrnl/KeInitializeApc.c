/*
 * XREFs of KeInitializeApc @ 0x1402F94B0
 * Callers:
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     MiStoreModifiedWriteDereference @ 0x1402CDA7C (MiStoreModifiedWriteDereference.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140360CAC (MiQueueSyncModifiedWriterApc.c)
 *     IoRaiseHardError @ 0x140500820 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140500AE0 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1770 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A63DC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405A98E0 (EtwpCovSampCaptureQueueApc.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x1406B3AEC (PerfLogImageUnload.c)
 *     NtQueueApcThreadEx @ 0x1406B3E30 (NtQueueApcThreadEx.c)
 *     IopCancelIrpsInThreadList @ 0x1406EEBA8 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140885264 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408B96E0 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090B7EC (PspRundownUmsThreadForApcDelivery.c)
 *     KeInitThread @ 0x14098C548 (KeInitThread.c)
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
