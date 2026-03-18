/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016D70
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B8BCC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP *v2; // rdi
  const struct CONTAINER_ID *v4; // r9
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 155);
  v2 = (struct RawInputManagerDeviceObject *)((char *)a2 + 88);
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
    v6 = 0;
    IVRootDeliver::PnP::SendRootPnp(v2, (struct DEVICEINFO *)2, (unsigned int)&v6, v4);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 88LL))(this, v2);
}
