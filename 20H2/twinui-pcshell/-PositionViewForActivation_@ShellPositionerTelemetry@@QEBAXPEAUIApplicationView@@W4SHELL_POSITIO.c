/*
 * XREFs of ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18005196C
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x18001CD48 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x180051C24 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180051D24 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0322_0005@@@Z @ 0x1800B7740 (-DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall ShellPositionerTelemetry::PositionViewForActivation_(__int64 a1, __int64 a2, int a3)
{
  BOOL inited; // eax
  unsigned __int64 *v6; // r8
  char result; // al
  void (__fastcall *v8)(__int64, LPCWSTR *); // rbx
  __int64 v9; // rdi
  __int64 v10; // rbx
  bool v11; // zf
  char v12; // al
  const unsigned __int16 *v13; // rdx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rax
  int v16; // ecx
  void (*v17)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v18)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v19; // [rsp+38h] [rbp-89h] BYREF
  char HaveQuirk; // [rsp+39h] [rbp-88h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-85h] BYREF
  WINBOOL v22; // [rsp+40h] [rbp-81h] BYREF
  int v23; // [rsp+44h] [rbp-7Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-79h] BYREF
  LPVOID v25; // [rsp+50h] [rbp-71h] BYREF
  LPCWSTR pszPath; // [rsp+58h] [rbp-69h] BYREF
  __int64 v27; // [rsp+60h] [rbp-61h]
  __int64 v28; // [rsp+68h] [rbp-59h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-51h] BYREF
  const WCHAR *v30; // [rsp+80h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-39h] BYREF
  void *v32; // [rsp+98h] [rbp-29h]
  int v33; // [rsp+A0h] [rbp-21h]
  int v34; // [rsp+A4h] [rbp-1Dh]
  const WCHAR *v35; // [rsp+A8h] [rbp-19h]
  int v36; // [rsp+B0h] [rbp-11h]
  int v37; // [rsp+B4h] [rbp-Dh]
  int *v38; // [rsp+B8h] [rbp-9h]
  __int64 v39; // [rsp+C0h] [rbp-1h]
  char *p_HaveQuirk; // [rsp+C8h] [rbp+7h]
  __int64 v41; // [rsp+D0h] [rbp+Fh]
  char *v42; // [rsp+D8h] [rbp+17h]
  __int64 v43; // [rsp+E0h] [rbp+1Fh]

  Context = 0LL;
  inited = InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v6 = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending )
  {
    Context = qword_1805CC298;
    qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
    qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v17);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
  }
  result = wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 0, (unsigned __int64)v6);
  if ( result )
  {
    pszPath = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v8 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
    v9 = -1LL;
    v27 = -1LL;
    v28 = -1LL;
    v8(a2, &pszPath);
    v25 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v22, &v25) && v22 )
    {
      v25 = qword_1805CC298;
      qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
      qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v18);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
    }
    v10 = *((_QWORD *)v25 + 1);
    if ( *(_DWORD *)v10 > 5u
      && (*(_QWORD *)(v10 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v10 + 24) & 0x400000000000LL) == *(_QWORD *)(v10 + 24) )
    {
      if ( (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 0LL)
        || (v11 = (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 5LL) == 0, v12 = 0, !v11) )
      {
        v12 = 1;
      }
      v19 = v12;
      HaveQuirk = ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 4LL);
      v23 = a3;
      v14 = &szAgent;
      if ( pszPath )
        v14 = pszPath;
      v15 = SQM::CensorAppID(v14, v13);
      v30 = v15;
      v42 = &v19;
      v43 = 1LL;
      p_HaveQuirk = &HaveQuirk;
      v41 = 1LL;
      v38 = &v23;
      v39 = 4LL;
      if ( v15 )
      {
        do
          ++v9;
        while ( v15[v9] );
        v16 = 2 * v9 + 2;
      }
      else
      {
        v15 = &szAgent;
        v16 = 2;
      }
      v35 = v15;
      v36 = v16;
      v37 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v32 = &unk_18051E843;
      v33 = 84;
      v34 = 1;
      fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
  }
  return result;
}
