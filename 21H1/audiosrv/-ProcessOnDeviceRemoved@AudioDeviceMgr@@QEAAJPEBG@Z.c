/*
 * XREFs of ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x18013EA18
 * Callers:
 *     ?Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x18013E930 (-Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x18013EB80 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800675D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18013E26C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2)
{
  unsigned int v4; // esi
  int EndpointDeviceInCollection; // eax
  struct IEndpointCollection *v6; // rbx
  ULONG_PTR SpinCount; // rcx
  int v8; // eax
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+28h] [rbp-8h]
  int v14; // [rsp+50h] [rbp+20h] BYREF
  struct IEndpointDevice *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IEndpointCollection *v16; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v14 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  EndpointDeviceInCollection = AudioDeviceMgr::FindEndpointDeviceInCollection((AudioDeviceMgr *)this, a2, &v15, &v16);
  v6 = v16;
  if ( EndpointDeviceInCollection < 0
    || (EndpointDeviceInCollection = (*(__int64 (__fastcall **)(struct IEndpointCollection *, struct IEndpointDevice *))(*(_QWORD *)v16 + 40LL))(
                                       v16,
                                       v15),
        EndpointDeviceInCollection < 0) )
  {
    v4 = EndpointDeviceInCollection;
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    SpinCount = this[1].SpinCount;
    if ( SpinCount )
    {
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, struct IEndpointDevice *, int *))(*(_QWORD *)SpinCount + 128LL))(
             SpinCount,
             v15,
             &v14);
      if ( v8 < 0 )
      {
        v4 = v8;
        goto LABEL_15;
      }
      if ( v14 )
      {
        v9 = this[1].SpinCount;
        if ( v9 )
        {
          this[1].SpinCount = 0LL;
          (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
    v10 = this->SpinCount;
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, struct IEndpointDevice *))(*(_QWORD *)v10 + 32LL))(v10, v15);
  }
LABEL_15:
  if ( v6 )
    (*(void (__fastcall **)(struct IEndpointCollection *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v15 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
