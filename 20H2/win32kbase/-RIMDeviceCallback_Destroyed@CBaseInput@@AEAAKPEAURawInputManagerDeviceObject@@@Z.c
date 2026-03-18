/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021140
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0021884 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C00218C0 (HMRemoveHandleForObject.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B685C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v2; // rax
  struct DEVICEINFO **v5; // rdx
  const struct CONTAINER_ID *v6; // r9
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF

  v2 = CBaseInput::_spDevList;
  v5 = &CBaseInput::_spDevList;
  while ( v2 )
  {
    if ( v2 == (struct RawInputManagerDeviceObject *)((char *)a2 + 88) )
    {
      *v5 = (struct DEVICEINFO *)*((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 18) = 0LL;
      ObfDereferenceObject(a2);
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_InputVirtualization__private_reporting,
        0xF89686u,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
        1,
        3);
      if ( (unsigned __int8)isRootPartition() && *((_DWORD *)this + 314) )
      {
        v9 = 0;
        IVRootDeliver::PnP::SendRootPnp(
          (struct RawInputManagerDeviceObject *)((char *)a2 + 88),
          (struct DEVICEINFO *)4,
          (unsigned int)&v9,
          v6);
      }
      if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, char *))(*(_QWORD *)this + 104LL))(
             this,
             a2,
             (char *)a2 + 88) )
      {
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v8);
        if ( (unsigned int)HMMarkObjectDestroyWorker((char *)a2 + 88) )
          HMRemoveHandleForObject();
      }
      return 0LL;
    }
    v5 = (struct DEVICEINFO **)((char *)v2 + 56);
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)v5,
      3,
      19,
      (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
      (char)a2);
  }
  return 0LL;
}
