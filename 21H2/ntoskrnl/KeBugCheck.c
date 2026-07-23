/*
 * XREFs of KeBugCheck @ 0x1403FE0B0
 * Callers:
 *     PspSystemThreadStartup @ 0x14029D480 (PspSystemThreadStartup.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140334D40 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiLockServiceTable @ 0x14039F2E4 (KiLockServiceTable.c)
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     KxStartSystemThread @ 0x1404070B0 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140683580 (PspThreadDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6AA0 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x1407B3C40 (Phase1Initialization.c)
 *     EtwDeleteSiloState @ 0x140937EF4 (EtwDeleteSiloState.c)
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x14099F66C (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x1409A0058 (KeWriteProtectProcessorState.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 *     PspInitPhase1 @ 0x140A4C338 (PspInitPhase1.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 *     BvgaSaveResources @ 0x140A6C7D8 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A7321C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
