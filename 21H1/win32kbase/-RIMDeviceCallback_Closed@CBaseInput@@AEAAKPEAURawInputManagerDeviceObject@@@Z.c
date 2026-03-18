/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0050B20
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BE92C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rax
  const struct CONTAINER_ID *v5; // r9
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 155);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v2 = *((_QWORD *)this + 155);
  }
  *((_QWORD *)this + 155) = v2 - 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_reporting,
    16291462,
    0,
    0,
    (__int64)&Feature_InputVirtualization_logged_traits,
    1,
    3);
  if ( (unsigned __int8)isRootPartition() && *((_DWORD *)this + 314) )
  {
    v7 = 0;
    IVRootDeliver::PnP::SendRootPnp(
      (struct RawInputManagerDeviceObject *)((char *)a2 + 88),
      (struct DEVICEINFO *)3,
      (unsigned int)&v7,
      v5);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 96LL))(this, (char *)a2 + 88);
}
