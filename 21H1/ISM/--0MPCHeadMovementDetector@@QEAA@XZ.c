/*
 * XREFs of ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x18008C1D0
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x18008ADC0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180011DA4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@@wil@@YA?AV?$com_ptr_t@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18007F928 (--$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@.c)
 *     ?ScheduleNextTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008CDD4 (-ScheduleNextTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008CFA4 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=6
MPCHeadMovementDetector *__fastcall MPCHeadMovementDetector::MPCHeadMovementDetector(MPCHeadMovementDetector *this)
{
  struct _TP_TIMER **v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  const WCHAR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v11; // r9
  DWORD v12; // eax
  _QWORD Recipient[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  v2 = (struct _TP_TIMER **)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 17;
  *((_DWORD *)this + 5) = 3;
  *((_QWORD *)this + 3) = -170000LL;
  *((_QWORD *)this + 4) = -600000000LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 1;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 1023410176;
  *((_DWORD *)this + 35) = 10000;
  *((_OWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 60000;
  v3 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = CoreUICreate(this);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v7 = wil::GetActivationFactory<Windows::Perception::Internal::IPerceptionTimestampHelperStaticsInternal>(
         (const WCHAR *)&v16,
         v5,
         v6);
  v8 = *(_QWORD *)v7;
  *(_QWORD *)v7 = 0LL;
  v9 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_,
                      this,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    v2,
    ThreadpoolTimer);
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      56LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      v11);
    __debugbreak();
  }
  Recipient[0] = MPCHeadMovementDetector::DisplayStateNotification;
  Recipient[1] = this;
  v12 = PowerSettingRegisterNotification(&GUID_CONSOLE_DISPLAY_STATE, 2u, Recipient, (PHPOWERNOTIFY)this + 7);
  if ( v12 )
  {
    wil::details::in1diag3::_FailFast_Win32(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)v12,
      Recipient[0]);
    __debugbreak();
  }
  MPCHeadMovementDetector::ScheduleNextTimerCallback(this);
  return this;
}
