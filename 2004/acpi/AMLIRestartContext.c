/*
 * XREFs of AMLIRestartContext @ 0x1C00634E0
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C004C6E0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C004C720 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C004FD70 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C005B1B0 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C005FA50 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C00632BC (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C00651A0 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C0023B90 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext(a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
