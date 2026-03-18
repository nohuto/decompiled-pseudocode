/*
 * XREFs of ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C03686A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005BFAC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted(struct VMBCHANNEL__ *a1)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted", (wchar_t *)L"%p", a1);
}
