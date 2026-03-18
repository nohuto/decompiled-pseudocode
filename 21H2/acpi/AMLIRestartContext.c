/*
 * XREFs of AMLIRestartContext @ 0x1C00648F4
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C004B5A0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C004B5E0 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C004ED30 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C005C200 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C00609D0 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C00646F8 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C0066590 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C000DCC0 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext(a1);
}
