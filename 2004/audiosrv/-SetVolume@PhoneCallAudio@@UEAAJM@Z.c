/*
 * XREFs of ?SetVolume@PhoneCallAudio@@UEAAJM@Z @ 0x180110B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetVolume(PhoneCallAudio *this, float a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]

  v3 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
  *((float *)this + 16) = a2;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    if ( *((_DWORD *)this + 14) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      if ( v5 < 0 )
        v3 = v5;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
