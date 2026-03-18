/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0017334 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C0017370 (HMRemoveHandleForObject.c)
 *     HMCreateHandleForObject @ 0x1C0017550 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C00176A0 (RawInputManagerDeviceObjectReference.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B8E6C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // rbx
  char *v4; // rcx
  __int64 v5; // rdi
  const struct CONTAINER_ID *v6; // r8
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  v4 = (char *)a2 + 88;
  LOBYTE(a2) = 19;
  v5 = HMCreateHandleForObject(v4, a2);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           v3,
           v5) )
    {
      *(_QWORD *)(v5 + 56) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = (struct DEVICEINFO *)v5;
      RawInputManagerDeviceObjectReference(v3);
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
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)v3 + 53) + 40LL) )
        {
          v9 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(v3, (struct RawInputManagerDeviceObject *)&v9, v6);
        }
        else
        {
          *((_DWORD *)v3 + 68) |= 0x20000000u;
        }
      }
    }
    else
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v8);
      HMMarkObjectDestroyWorker((void *)v5);
      HMRemoveHandleForObject();
    }
  }
  return 0LL;
}
