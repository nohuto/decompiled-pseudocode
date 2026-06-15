/*
 * XREFs of ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1801104F0
 * Callers:
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180110BD0 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180110148 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180111E2C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180113B0C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::OnPhoneCallStarted(PhoneCallAudio *this)
{
  int v2; // eax
  unsigned int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-158h] BYREF
  char v6; // [rsp+28h] [rbp-150h]
  PhoneCallAudio *v7; // [rsp+30h] [rbp-148h]
  char v8; // [rsp+38h] [rbp-140h]
  _DWORD v9[4]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v10[272]; // [rsp+50h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( !(unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)this) )
    goto LABEL_5;
  memset_0(v10, 0, 0x104uLL);
  v9[0] = 0;
  v9[3] = 2;
  v9[2] = 3;
  v9[1] = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
  v7 = this;
  v8 = 1;
  if ( *((_QWORD *)this + 18)
    || (v2 = DynamicAudioEndpointManager::AddRule(
               g_DynamicAudioEndpointManager,
               *((struct IAudioProcess **)this + 17),
               (struct _DynamicRoutingRule *)v9,
               (__int64 *)this + 18),
        v3 = v2,
        v2 >= 0) )
  {
LABEL_5:
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x399,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v2);
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *((struct IAudioProcess **)this + 17),
      *((_QWORD *)this + 18));
    *((_QWORD *)this + 18) = 0LL;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
