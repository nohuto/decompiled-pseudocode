/*
 * XREFs of ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1801F5834
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1801F4990 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1801F4FB0 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180013444 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801357D0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801F42D4 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1801F4690 (--1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1801F57A0 (-StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServ.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801F5ABC (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::StartDirectorThread(void **this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  unsigned int LastError; // ebx
  int v5; // eax
  HANDLE EventW; // rax
  const char *v7; // r9
  __int64 v8; // rdx
  void *v9; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rax
  char *v12; // rcx
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  void **v15; // [rsp+50h] [rbp-B8h] BYREF
  void **v16; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity");
  v17[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity *)v17);
  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_22;
  }
  v16 = this;
  if ( this )
    (*((void (__fastcall **)(void **))*this + 1))(this);
  LODWORD(v14) = 2;
  v15 = this;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         v3,
         (__int64)&GUID_c853771a_f336_4cf8_9a27_1570293ab52d,
         &v15,
         (unsigned int *)&v14);
  LastError = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_18;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 16,
    EventW);
  if ( !this[16] )
  {
    v8 = 195LL;
LABEL_16:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v8,
                  (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
                  v7);
    goto LABEL_18;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)v3 + 1,
    0LL);
  v9 = this[16];
  CurrentProcess = GetCurrentProcess();
  v11 = GetCurrentProcess();
  if ( !DuplicateHandle(v11, v9, CurrentProcess, (LPHANDLE)v3 + 1, 0, 0, 2u) )
  {
    v8 = 196LL;
    goto LABEL_16;
  }
  if ( !SHCreateThread(LockScreenDirectorServiceProviderImpl::s_RunDirectorThread, v3, 8u, 0LL) )
  {
    v8 = 199LL;
    goto LABEL_16;
  }
  *((_BYTE *)this + 160) = 1;
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
  LastError = 0;
  v3 = 0LL;
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  if ( v3 )
  {
    v12 = (char *)v3[1];
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3);
    operator delete(v3, (const struct std::nothrow_t *)0x10);
  }
LABEL_22:
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::~LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity *)v17);
  return LastError;
}
