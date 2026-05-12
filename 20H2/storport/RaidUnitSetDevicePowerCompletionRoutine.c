/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0015620
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D480 (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 */

void __fastcall RaidUnitSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  volatile signed __int32 *DeviceExtension; // rbx
  int v7; // esi

  DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      55LL,
      &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids,
      DeviceExtension,
      Context);
  }
  if ( *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 5088LL)
    && _InterlockedCompareExchange(DeviceExtension + 840, 0, 1) == 1 )
  {
    RaidAdapterPoFxIdleComponent(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
  }
  *((_BYTE *)DeviceExtension + 449) &= ~1u;
  v7 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids,
      DeviceExtension,
      Context,
      v7);
  }
}
