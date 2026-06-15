/*
 * XREFs of ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1801102A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800675D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180110738 (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PhoneCallAudio::OnEndpointDeviceRemoved(struct _RTL_CRITICAL_SECTION *this, struct IEndpointDevice *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)&this[1].LockCount + 24LL))(*(_QWORD *)&this[1].LockCount) )
    PhoneCallAudio::ReleasePhoneTopology((PhoneCallAudio *)this);
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
