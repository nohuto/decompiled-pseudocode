/*
 * XREFs of KeBugCheck @ 0x1403F5E20
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     PspSystemThreadStartup @ 0x140317E30 (PspSystemThreadStartup.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1403544A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiLockServiceTable @ 0x14039BC74 (KiLockServiceTable.c)
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     KxStartSystemThread @ 0x1403FD470 (KxStartSystemThread.c)
 *     PspThreadDelete @ 0x1405F1620 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078DF60 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x14079B780 (Phase1Initialization.c)
 *     EtwDeleteSiloState @ 0x140933484 (EtwDeleteSiloState.c)
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140999910 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x14099AC10 (KeWriteProtectProcessorState.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 *     PspInitPhase1 @ 0x140A60C8C (PspInitPhase1.c)
 *     BvgaSaveResources @ 0x140A67BA8 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A6E3C4 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
