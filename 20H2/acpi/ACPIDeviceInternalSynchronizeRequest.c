/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x1C001C688
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x1C001C480 (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x1C0030100 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x1C004C738 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0052838 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C784 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D858 (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // r11
  void *v5; // rcx
  void *v7; // r10
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = &unk_1C00701BA;
  v7 = &unk_1C00701BA;
  v8 = a2;
  if ( a1 )
  {
    v9 = a1[1];
    LODWORD(a2) = 0;
    v4 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)a1[71];
      LODWORD(a2) = 0;
      if ( (v9 & 0x400000000000LL) != 0 )
        v7 = (void *)a1[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      25,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      v4,
      (__int64)v5,
      (__int64)v7);
  }
  result = ACPIDeviceInitializePowerRequest(a1, 0LL, v8, a3, 0, 4, 256);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
