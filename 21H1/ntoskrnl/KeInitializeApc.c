/*
 * XREFs of KeInitializeApc @ 0x140355490
 * Callers:
 *     MiStoreModifiedWriteDereference @ 0x14023AC4C (MiStoreModifiedWriteDereference.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1403231BC (MiQueueSyncModifiedWriterApc.c)
 *     IoRaiseHardError @ 0x1405001D0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140500490 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1080 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A5CEC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405A91F0 (EtwpCovSampCaptureQueueApc.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     IopCancelIrpsInThreadList @ 0x1406CD8A8 (IopCancelIrpsInThreadList.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x14070993C (PerfLogImageUnload.c)
 *     NtQueueApcThreadEx @ 0x140709C80 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140883F44 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408B83C0 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 *     KeInitThread @ 0x14098BDA4 (KeInitThread.c)
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
