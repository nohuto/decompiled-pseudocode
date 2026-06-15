/*
 * XREFs of ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1801102D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800675D4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PhoneCallAudio::OnEndpointDeviceAdded(struct _RTL_CRITICAL_SECTION *this, struct IEndpointDevice *a2)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( (int)PhoneCallAudio::InitPhoneTopology((PhoneCallAudio *)this) >= 0 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      this + 2);
    DebugInfo = this[1].DebugInfo;
    if ( DebugInfo )
    {
      this[1].DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
    }
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION *))(**(_QWORD **)&this[1].LockCount + 32LL))(
      *(_QWORD *)&this[1].LockCount,
      this + 1);
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
