/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00BE980
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B685C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
    (__int64)&Feature_InputVirtualization__private_reporting,
    0xF89686u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
    1,
    3);
  if ( isRootPartition() && *((_DWORD *)this + 314) )
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
