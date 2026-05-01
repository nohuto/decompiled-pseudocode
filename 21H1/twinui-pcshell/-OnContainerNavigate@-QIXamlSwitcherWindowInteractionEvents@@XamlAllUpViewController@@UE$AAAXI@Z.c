/*
 * XREFs of ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z @ 0x1802F9CE8
 * Callers:
 *     ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXI@Z @ 0x1800D59D0 (-OnContainerNavigate@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1802D2B68 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x1802F4F90 (CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall _OnContainerNavigate__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXI_Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int v4; // r12d
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  __int64 v23; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v25; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v4 = a2;
  v25 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))Windows::UI::Core::CoreWindow::GetForCurrentThread(
                                                              a1,
                                                              a2,
                                                              a3,
                                                              a4);
  v7 = **v6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v8 = v7(v6, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, &v25);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      358LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v8);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL))(v25, &v26);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      360LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = __abi_winrt_ptr_ctor(a1);
  v11 = __abi_winrt_ptr_ctor(a1);
  v20 = v11;
  v12 = __abi_winrt_ptr_ctor(v10);
  v21 = v12;
  v22 = v4;
  v13 = v26;
  v23 = v26;
  v14 = *(_QWORD *)(a1 + 88);
  v17[0] = __abi_winrt_ptr_ctor(v11);
  v17[1] = __abi_winrt_ptr_ctor(v12);
  v18 = v4;
  v19 = v13;
  v15 = CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(v14, (volatile int *)v17);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      369LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v15);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
}
