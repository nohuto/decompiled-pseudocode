/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x18017302C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_b8a2c2963ca37ae1393345016090a377___1_long_::Invoke @ 0x18016B2B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18016B2B0.c)
 * Callees:
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000A7D0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_a89968ff9a0d2ae258e0bdafe075d942___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a89968ff9a0d2ae258e0bdafe075d942___1_long_ @ 0x1801671C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1801671C0.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18016FB88 (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180171090 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  const struct _GUID *v3; // rsi
  char v5; // r12
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  char v10; // r13
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, const struct _GUID *, _BYTE *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)); // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  HWND v17; // rdi
  void *v18; // rax
  int v19; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64); // [rsp+30h] [rbp-69h] BYREF
  const struct _GUID *v22; // [rsp+38h] [rbp-61h]
  struct IImmersiveApplicationInternal *v23; // [rsp+40h] [rbp-59h] BYREF
  HWND v24; // [rsp+48h] [rbp-51h] BYREF
  int v25; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v26[4]; // [rsp+54h] [rbp-45h] BYREF
  __int64 v27[4]; // [rsp+58h] [rbp-41h] BYREF
  char v28; // [rsp+78h] [rbp-21h]
  CAppViewManager *v29; // [rsp+80h] [rbp-19h] BYREF
  char v30; // [rsp+88h] [rbp-11h]
  struct _GUID v31; // [rsp+8Ch] [rbp-Dh]
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64); // [rsp+A0h] [rbp+7h] BYREF
  _BYTE v33[16]; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v24 = a3;
  v3 = a2;
  v22 = a2;
  v27[2] = (__int64)this;
  v27[3] = (__int64)a2;
  v5 = 1;
  v28 = 1;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v27[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         v3,
         &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1297LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_26;
  }
  if ( v25 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _BYTE *))(**((_QWORD **)this + 23) + 48LL))(
           *((_QWORD *)this + 23),
           v3,
           v26);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1301LL;
      goto LABEL_6;
    }
    if ( (v26[0] & 1) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v10 = 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
              *((_QWORD *)this + 23),
              v3,
              2LL,
              2LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x51C,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    v21 = 0LL;
    v12 = *((_QWORD *)this + 23);
    v13 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _BYTE *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)))(*(_QWORD *)v12 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v14 = v13(v12, v22, v33, &v21);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x522,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      v3 = v22;
LABEL_26:
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      goto LABEL_34;
    }
    v23 = 0LL;
    if ( v21 )
    {
      v15 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v21, (__int64)&v23);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 1320LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v15);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        goto LABEL_25;
      }
      v15 = CAppViewManager::UnensureApplication(this, v24, v23);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 1322LL;
        goto LABEL_18;
      }
    }
    if ( v10 )
    {
      v27[0] = (__int64)this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v27);
      v29 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
      v30 = v10;
      v3 = v22;
      v31 = *v22;
      v32 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
      v17 = 0LL;
      v18 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v18 )
        v17 = (HWND)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_a89968ff9a0d2ae258e0bdafe075d942___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a89968ff9a0d2ae258e0bdafe075d942___1_long_(
                      (__int64)v18,
                      (__int64)&v29);
      v24 = v17;
      v19 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 15) + 72LL))(
              *((_QWORD *)this + 15),
              v17,
              1LL);
      v8 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x53F,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
        goto LABEL_24;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
    }
    else
    {
      v3 = v22;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v5 = 0;
  v8 = 0;
LABEL_34:
  if ( v5 )
    CAppViewManager::_ObliterateOperation(this, v3);
  return v8;
}
