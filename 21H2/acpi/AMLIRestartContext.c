/*
 * XREFs of AMLIRestartContext @ 0x1C0063670
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C004C850 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C004C890 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C004FF00 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C005B340 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C005FBE0 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C006344C (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C0065330 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C0023DF0 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext(a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
