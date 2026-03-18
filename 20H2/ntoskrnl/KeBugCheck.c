/*
 * XREFs of KeBugCheck @ 0x1403FBC80
 * Callers:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AD400 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     PspSystemThreadStartup @ 0x1403265A0 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x14039F554 (KiLockServiceTable.c)
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     KxStartSystemThread @ 0x1404048B0 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140666EA0 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x140793E90 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14079C7E8 (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x14093A554 (EtwDeleteSiloState.c)
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1409A0A7C (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x1409A24B0 (KeWriteProtectProcessorState.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 *     PspInitPhase1 @ 0x140A654A0 (PspInitPhase1.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x140A6E858 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A7529C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
