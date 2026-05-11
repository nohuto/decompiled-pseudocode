/*
 * XREFs of DeviceRequestPowerUp @ 0x1C002316C
 * Callers:
 *     PinAddPinToList @ 0x1C0002EEC (PinAddPinToList.c)
 *     IncrementActivePinCount @ 0x1C00247D0 (IncrementActivePinCount.c)
 *     PropertySetFeatureValue @ 0x1C00285F0 (PropertySetFeatureValue.c)
 *     PropertySetBooleanSideband @ 0x1C00286C8 (PropertySetBooleanSideband.c)
 *     PropertySetBoolean @ 0x1C00287D0 (PropertySetBoolean.c)
 *     PropertySetDbLevelSideband @ 0x1C0028D54 (PropertySetDbLevelSideband.c)
 *     PropertySetDbLevel @ 0x1C0028E70 (PropertySetDbLevel.c)
 *     PropertyGetSetMuxSource @ 0x1C0029BA0 (PropertyGetSetMuxSource.c)
 *     PropertySetMixerLevels @ 0x1C0029FD0 (PropertySetMixerLevels.c)
 *     PropertyGetSetChannelConfiguration @ 0x1C002A2A0 (PropertyGetSetChannelConfiguration.c)
 *     PropertySetTopologyNodeEnable @ 0x1C002A4D0 (PropertySetTopologyNodeEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001670 (WPP_RECORDER_SF_qq.c)
 */

NTSTATUS __fastcall DeviceRequestPowerUp(PIRP *Irp, __int64 a2, __int64 a3, __int64 a4)
{
  PIRP v4; // rdi
  _DWORD *CancelRoutine; // rax
  int Context; // [rsp+20h] [rbp-28h]

  v4 = Irp[2];
  CancelRoutine = v4[2].CancelRoutine;
  if ( CancelRoutine )
    *CancelRoutine = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, Context);
  return PoRequestPowerIrp(
           (PDEVICE_OBJECT)Irp[4],
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)PowerIrpComplete,
           v4,
           0LL);
}
