/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C002E62C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0009690 (UsbhPdoInternalDeviceControl.c)
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C000E210 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0014C0C (UsbhSyncSuspendPdoPort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C001C580 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A7DC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0030934 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhWaitForBootDevice @ 0x1C003A0A8 (UsbhWaitForBootDevice.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003A2BC (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x1C003D000 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FF9C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C0043AE0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0043C9C (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x1C0045AD0 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0045CE0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C00469A4 (UsbhSetPdoRegistryParameter.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0048A24 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhCreatePdo @ 0x1C0053F94 (UsbhCreatePdo.c)
 *     UsbhDeletePdo @ 0x1C0054AFC (UsbhDeletePdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0055FD0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057020 (UsbhPdoPnp_StartDevice.c)
 *     UsbhQueryUxdDevice @ 0x1C005B530 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
