/*
 * XREFs of ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1802BF244
 * Callers:
 *     _lambda_f2f8653dbdef2d27cb8873abae1874da_::_lambda_invoker_cdecl_ @ 0x1802BB010 (_lambda_f2f8653dbdef2d27cb8873abae1874da_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop(wil::details **this)
{
  ViewManagerBridge *v1; // r14
  _QWORD *v2; // r15
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rsi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, const wchar_t *, _QWORD, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, GUID *, char *); // rsi
  int v20; // eax
  int v21; // eax
  wil *v22; // rcx
  void *v23; // rdx
  __int64 v24[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v28; // [rsp+78h] [rbp+10h] BYREF
  __int64 v29; // [rsp+80h] [rbp+18h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, char *); // [rsp+88h] [rbp+20h] BYREF

  v1 = (ViewManagerBridge *)this;
  v2 = this + 11;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  v3 = CoreUICreate(v2);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1373LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(ViewManagerBridge *), ViewManagerBridge *))(*(_QWORD *)*v2 + 256LL))(
           *v2,
           *((_QWORD *)v1 + 17),
           lambda_decf04464874cb5401550835ac55dd28_::_lambda_invoker_cdecl_,
           v1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1382LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v5 = CoreUIFactoryCreate(&v29);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1386LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v29 + 24LL))(
           v29,
           &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
           (__int64)v1 + 96);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1389LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v30 = 0LL;
    v7 = v29;
    v8 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v29 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v9 = v8(
           v7,
           L"System\\NavigationServer_ShellViewManager",
           *((unsigned int *)v1 + 24),
           (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v30);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1391LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), __int64))(*v30)[7])(
            v30,
            (__int64)v1 + 8);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1394LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
    v12 = **v30;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 13);
    v13 = v12(v11, &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d, (char *)v1 + 104);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1397LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v29 + 24LL))(
            v29,
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            &v28);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1401LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v24[0] = 0LL;
    v15 = v29;
    v16 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v29 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
    v17 = v16(v15, L"System\\NavigationServer_ClientViewCreator", v28, v24);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1403LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v17);
    v18 = v24[0];
    v19 = **(__int64 (__fastcall ***)(__int64, GUID *, char *))v24[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 14);
    v20 = v19(v18, &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9, (char *)v1 + 112);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1404LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v20);
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 216LL))(*v2);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1407LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  }
  catch ( ... )
  {
    *((_DWORD *)this + 37) = wil::ResultFromCaughtException(v22);
    wil::details::SetEvent(this[16], v23);
    v1 = (ViewManagerBridge *)this;
  }
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease((__int64 *)v1 + 10);
}
