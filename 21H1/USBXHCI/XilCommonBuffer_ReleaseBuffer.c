/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x1C0018E88
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C006CAF8 (Interrupter_PrepareInterrupter.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0075C50 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C00765E4 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C0018AA0 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  CommonBuffer_ReleaseBuffer(a1, a2);
}
