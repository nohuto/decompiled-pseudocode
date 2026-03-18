/*
 * XREFs of KeInitializeApc @ 0x1402F47B0
 * Callers:
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     MiStoreModifiedWriteDereference @ 0x14037AF3C (MiStoreModifiedWriteDereference.c)
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14059CFBC (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406330FC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406362D0 (EtwpCovSampCaptureQueueApc.c)
 *     NtQueueApcThreadEx2 @ 0x1406A1F70 (NtQueueApcThreadEx2.c)
 *     IopCancelIrpsInThreadList @ 0x1406A4C58 (IopCancelIrpsInThreadList.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140701B0C (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x14079D948 (PerfLogImageUnload.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14092B264 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140962BA0 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AD99C (PspEnableProcessOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140A48020 (KeInitThread.c)
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
  *(_BYTE *)(a1 + 1) = 0;
  return result;
}
