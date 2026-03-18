/*
 * XREFs of UsbdHubArmBusForWake @ 0x1C003B9F4
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 */

__int64 (__fastcall *__fastcall UsbdHubArmBusForWake(__int64 a1))(_QWORD, __int64)
{
  _DWORD *v1; // rbx
  __int64 (__fastcall *result)(_QWORD, __int64); // rax

  v1 = FdoExt(a1);
  result = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v1 + 552);
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xAu,
          (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
        result = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v1 + 552);
      }
    }
    result = (__int64 (__fastcall *)(_QWORD, __int64))result(*((_QWORD *)v1 + 529), 1LL);
    v1[640] |= 0x40000u;
  }
  return result;
}
