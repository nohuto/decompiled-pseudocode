/*
 * XREFs of ??1DialogSession@@EEAA@XZ @ 0x1800F7ADC
 * Callers:
 *     ??_GDialogSession@@EEAAPEAXI@Z @ 0x1800F7C00 (--_GDialogSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Stop@CVirtualAudioStream@@QEAAXXZ @ 0x180072724 (-Stop@CVirtualAudioStream@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800DB284 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 */

void __fastcall DialogSession::~DialogSession(DialogSession *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &DialogSession::`vftable';
  if ( *((_DWORD *)this + 8) == 1 )
  {
    v2 = 0LL;
    wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>((__int64)this, (__int64)&v2);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, *((_QWORD *)this + 3), 0LL);
    *((_DWORD *)this + 8) = 0;
    CVirtualAudioStream::Stop(*((CVirtualAudioStream **)this + 2));
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v2);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
