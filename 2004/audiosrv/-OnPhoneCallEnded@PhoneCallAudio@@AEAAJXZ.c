/*
 * XREFs of ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x180110488
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18010FAC0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180110148 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::OnPhoneCallEnded(struct _RTL_CRITICAL_SECTION *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( !(unsigned int)PhoneCallAudio::IsInCall(this) )
    (**(void (__fastcall ***)(HANDLE))this[1].OwningThread)(this[1].OwningThread);
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
