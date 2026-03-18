/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005A970
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x1C005A7C0 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C005A910 (RawInputManagerDeviceObjectReference.c)
 *     HMRemoveHandleForObject @ 0x1C005AAB0 (HMRemoveHandleForObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BEBCC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v4; // rdi
  const struct CONTAINER_ID *v5; // r8
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v4 = HMCreateHandleForObject((unsigned __int64 *)a2 + 11, 19);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           a2,
           v4) )
    {
      *(_QWORD *)(v4 + 56) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = (struct DEVICEINFO *)v4;
      RawInputManagerDeviceObjectReference(a2);
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
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)a2 + 53) + 40LL) )
        {
          v8 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(a2, (struct RawInputManagerDeviceObject *)&v8, v5);
        }
        else
        {
          *((_DWORD *)a2 + 68) |= 0x20000000u;
        }
      }
    }
    else
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v7);
      HMMarkObjectDestroyWorker((void *)v4);
      HMRemoveHandleForObject();
    }
  }
  return 0LL;
}
