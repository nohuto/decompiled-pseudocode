/*
 * XREFs of ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180110148
 * Callers:
 *     ?GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x18010FC30 (-GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z.c)
 *     ?GetRoutingPolicy@PhoneCallAudio@@UEAAJPEAW4_TelephonyRoutingPolicy@@@Z @ 0x180110020 (-GetRoutingPolicy@PhoneCallAudio@@UEAAJPEAW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1801103DC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x180110488 (-OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1801104F0 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x1801108B0 (-SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z.c)
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180110AA0 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800E2070 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::IsInCall(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  v2 = 0;
  if ( HIDWORD(this[1].LockSemaphore)
    || (*(unsigned int (__fastcall **)(HANDLE))(*(_QWORD *)this[1].OwningThread + 16LL))(this[1].OwningThread) )
  {
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return 1;
  }
  else if ( v5 )
  {
    LeaveCriticalSection(lpCriticalSection);
  }
  return v2;
}
