/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A3C0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B8BCC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(
        CBaseInput *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  const struct CONTAINER_ID *v7; // r9
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 155);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    v4 = *((_QWORD *)this + 155);
  }
  *((_QWORD *)this + 155) = v4 - 1;
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
    v9 = 0;
    IVRootDeliver::PnP::SendRootPnp(
      (struct RawInputManagerDeviceObject *)((char *)a2 + 88),
      (struct DEVICEINFO *)3,
      (unsigned int)&v9,
      v7);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 96LL))(this, (char *)a2 + 88);
}
