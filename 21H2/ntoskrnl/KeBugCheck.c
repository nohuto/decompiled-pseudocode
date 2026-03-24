/*
 * XREFs of KeBugCheck @ 0x1403FDED0
 * Callers:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     PspSystemThreadStartup @ 0x1402EC130 (PspSystemThreadStartup.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140329FF0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiLockServiceTable @ 0x14039F194 (KiLockServiceTable.c)
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 *     KxStartSystemThread @ 0x140406ED0 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140619920 (PspThreadDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A68A0 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x1407B3AA0 (Phase1Initialization.c)
 *     EtwDeleteSiloState @ 0x140937D24 (EtwDeleteSiloState.c)
 *     KiInitializeKernel @ 0x14099D7C0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x14099E73C (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x14099F128 (KeWriteProtectProcessorState.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 *     PspInitPhase1 @ 0x140A4B338 (PspInitPhase1.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 *     BvgaSaveResources @ 0x140A6B7D8 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A7221C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
