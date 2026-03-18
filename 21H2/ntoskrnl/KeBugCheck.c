/*
 * XREFs of KeBugCheck @ 0x14041F3B0
 * Callers:
 *     KiLockServiceTable @ 0x14024B4DC (KiLockServiceTable.c)
 *     PspSystemThreadStartup @ 0x1402513D0 (PspSystemThreadStartup.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA8D0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     KxStartSystemThread @ 0x1404244D0 (KxStartSystemThread.c)
 *     PspThreadDelete @ 0x1407A41E0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140837688 (CmpAddProcessorConfigurationEntry.c)
 *     EtwCleanupSiloState @ 0x1409DEDF8 (EtwCleanupSiloState.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140A59724 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x140A59A7C (KeWriteProtectProcessorState.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 *     VslRegisterBootDrivers @ 0x140B129C4 (VslRegisterBootDrivers.c)
 *     PspInitPhase1 @ 0x140B1E0A8 (PspInitPhase1.c)
 *     BvgaSaveResources @ 0x140B25AE4 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140B2EB08 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
