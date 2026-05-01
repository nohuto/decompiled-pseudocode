/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1800731F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     IsDwmSetWindowAttributePresent @ 0x180091094 (IsDwmSetWindowAttributePresent.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18014D9E0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014D9E0.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180229148 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  unsigned int v10; // esi
  volatile int *v11; // rdx
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-18h] BYREF
  BOOL pvAttribute[4]; // [rsp+30h] [rbp-10h] BYREF
  HWND v15; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp+38h] BYREF

  v15 = a2;
  if ( !(unsigned __int8)IsDwmSetWindowAttributePresent() )
    return 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805CDF30;
    qword_1805CDF30[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CDF48 = (struct _tlgProvider_t *)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CDF30, qword_1805CDF48, v7);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, qword_1805CDF30);
  }
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v8 && *v8 )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(a2, (LPDWORD)&fPending);
    LODWORD(Context) = a3 == 1;
    ((void (__fastcall *)(LPVOID *, HWND *, DWORD *, WINBOOL *))PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>)(
      &Context,
      &v15,
      &WindowThreadProcessId,
      &fPending);
  }
  v9 = *(RTL_SRWLOCK **)(a1 + 48);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v9);
  AcquireSRWLockExclusive(v9 + 6);
  EnableIAMAccess(v9[5].Ptr, 1LL);
  pvAttribute[0] = a3 != 0;
  v10 = DwmSetWindowAttribute(a2, 0xDu, pvAttribute, 4u);
  EnableIAMAccess(v9[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v9 + 6);
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)&v9[4].Ptr + 4), v11) )
  {
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v9->Ptr + 9))(v9, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v10;
}
