/*
 * XREFs of NotifyHandler @ 0x1C0031890
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C005C300 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0031440 (WPP_RECORDER_SF_DDD.c)
 *     DispatchNotification @ 0x1C0031624 (DispatchNotification.c)
 *     OSNotifyDeviceCheck @ 0x1C0059804 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C005998C (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C0059A20 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceWake @ 0x1C0059B80 (OSNotifyDeviceWake.c)
 */

__int64 __fastcall NotifyHandler(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // r8

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_e371268d4ba533618df9ec56b8c4a796_Traceguids,
      a3,
      a2,
      *(unsigned __int16 *)(*(_QWORD *)a3 + 66LL));
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        OSNotifyDeviceCheck(a3);
        break;
      case 2:
        OSNotifyDeviceWake(a3);
        break;
      case 3:
        OSNotifyDeviceEject(a3);
        break;
    }
  }
  else
  {
    OSNotifyDeviceEnum(a3);
  }
  v5 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 104LL);
  if ( v7 && *(_DWORD *)(v7 + 16) == 1599293264 )
    v5 = v7 + 376;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  if ( v5 )
    DispatchNotification(v5 - 376, a2);
  return 0LL;
}
