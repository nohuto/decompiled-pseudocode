/*
 * XREFs of RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0012490
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     WPP_SF_qq @ 0x1C00320D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0032120 (WPP_SF_qqD.c)
 */

void __fastcall RaidAdapterQueryDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *DeviceExtension; // rdi
  int v7; // esi

  DeviceExtension = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      36LL,
      &WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids,
      DeviceExtension,
      Context);
  }
  v7 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  ExReleaseRundownProtectionCacheAware(DeviceExtension[33]);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      37LL,
      &WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids,
      DeviceExtension,
      Context,
      v7);
  }
}
