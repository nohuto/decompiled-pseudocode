/*
 * XREFs of KeBugCheck @ 0x1403F70B0
 * Callers:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402F84C0 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x1403558E0 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x14039C404 (KiLockServiceTable.c)
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     KxStartSystemThread @ 0x1403FE700 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x14069AB30 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x140786180 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078FE30 (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x140934724 (EtwDeleteSiloState.c)
 *     KiInitializeKernel @ 0x1409999E0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x14099A970 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x14099C3B0 (KeWriteProtectProcessorState.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 *     PspInitPhase1 @ 0x140A5E140 (PspInitPhase1.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x140A68028 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A6EABC (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
