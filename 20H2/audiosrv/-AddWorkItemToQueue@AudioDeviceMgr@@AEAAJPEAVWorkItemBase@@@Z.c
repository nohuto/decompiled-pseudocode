/*
 * XREFs of ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x18013D180
 * Callers:
 *     ?OnDefaultDeviceChangedForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18013D710 (-OnDefaultDeviceChangedForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z @ 0x18013D7C0 (-OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z @ 0x18013D870 (-OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180066B10 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@PEAV312@1@Z @ 0x1800F3C50 (-NewNode@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::AddWorkItemToQueue(AudioDeviceMgr *this, struct WorkItemBase *a2)
{
  __int64 *v4; // rax
  __int64 **v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct WorkItemBase *v9; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 168));
  v9 = a2;
  v4 = ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::NewNode(
         (__int64)this + 120,
         (__int64 *)&v9,
         *((_QWORD *)this + 16));
  v5 = (__int64 **)*((_QWORD *)this + 16);
  if ( v5 )
    *v5 = v4;
  else
    *((_QWORD *)this + 15) = v4;
  *((_QWORD *)this + 16) = v4;
  SetEvent(*((HANDLE *)this + 26));
  if ( v9 )
    (*(void (__fastcall **)(struct WorkItemBase *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
