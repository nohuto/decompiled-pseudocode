/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C0059380
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C0058CEC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058F78 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0059198 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C00619AC (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F770 (WPP_RECORDER_SF_q.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C0025860 (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  if ( *a4 == a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x1Du,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        a4);
  }
  else
  {
    ACPIWakeCompleteRequestQueue(a4, a2);
  }
  ExFreePoolWithTag(a4, 0);
}
