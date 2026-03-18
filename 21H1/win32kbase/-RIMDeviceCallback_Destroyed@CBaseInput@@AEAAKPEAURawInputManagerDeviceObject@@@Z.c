/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AE30
 * Callers:
 *     <none>
 * Callees:
 *     HMRemoveHandleForObject @ 0x1C005AAB0 (HMRemoveHandleForObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BE92C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v2; // rax
  struct DEVICEINFO **v5; // rdx
  const struct CONTAINER_ID *v6; // r9
  _DWORD *v7; // rcx
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF

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
        (unsigned int)&Feature_InputVirtualization__private_reporting,
        16291462,
        0,
        0,
        (__int64)&Feature_InputVirtualization_logged_traits,
        1,
        3);
      if ( (unsigned __int8)isRootPartition() && *((_DWORD *)this + 314) )
      {
        v10 = 0;
        IVRootDeliver::PnP::SendRootPnp(
          (struct RawInputManagerDeviceObject *)((char *)a2 + 88),
          (struct DEVICEINFO *)4,
          (unsigned int)&v10,
          v6);
      }
      if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, char *))(*(_QWORD *)this + 104LL))(
             this,
             a2,
             (char *)a2 + 88) )
      {
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v9);
        if ( (unsigned int)HMMarkObjectDestroyWorker((_DWORD *)a2 + 22) )
          HMRemoveHandleForObject(v7);
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
