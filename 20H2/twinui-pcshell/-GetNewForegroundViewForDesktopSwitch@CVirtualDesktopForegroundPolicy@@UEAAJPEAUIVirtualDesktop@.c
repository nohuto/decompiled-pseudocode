/*
 * XREFs of ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x180437B10
 * Callers:
 *     ?DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180437A40 (-DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     _lambda_339bd16c3bf2f170c9c715b0f15241a4_::operator() @ 0x180437788 (_lambda_339bd16c3bf2f170c9c715b0f15241a4_--operator().c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktop *a2,
        struct IApplicationView **a3,
        bool *a4)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct IApplicationView **); // rbx
  int v11; // eax
  int v12; // ebx
  struct IApplicationView *v13; // rdx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rdx
  struct IApplicationView *v25; // rax
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  struct IApplicationView *v27; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v28[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v30; // [rsp+A0h] [rbp+40h] BYREF
  struct IVirtualDesktop *v31; // [rsp+A8h] [rbp+48h] BYREF
  struct IApplicationView *v32; // [rsp+B0h] [rbp+50h] BYREF
  struct IApplicationView *v33; // [rsp+B8h] [rbp+58h] BYREF

  v31 = a2;
  v7 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v8 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL);
    return v8;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4)) )
  {
    v32 = 0LL;
    v9 = *((_QWORD *)this + 5);
    v10 = *(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v9 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v11 = v10(v9, &v32);
    v12 = v11;
    if ( v11 == -2147023728 )
    {
LABEL_8:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      return v7;
    }
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v11);
      v7 = v12;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    v13 = v32;
    *a3 = v32;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           v13,
           v31) )
    {
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  }
  *a4 = 1;
  v26 = 0LL;
  v15 = *((_QWORD *)this + 5);
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v17 = v16(v15, &v26);
  v8 = v17;
  if ( v17 < 0 )
  {
    v18 = 84LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_26;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 24LL))(v26, &v30);
  v8 = v17;
  if ( v17 < 0 )
  {
    v18 = 87LL;
    goto LABEL_14;
  }
  v27 = 0LL;
  v33 = 0LL;
  v28[0] = this;
  v28[1] = &v31;
  v28[2] = &v27;
  v28[3] = &v33;
  v19 = 0;
  if ( !v30 )
    goto LABEL_24;
  do
  {
    v32 = 0LL;
    v20 = v26;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v26 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v22 = v21(v20, v19, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v32);
    v23 = retaddr;
    if ( v22 >= 0 )
    {
      v22 = lambda_339bd16c3bf2f170c9c715b0f15241a4_::operator()((__int64)v28, (__int64)v32);
      v23 = retaddr;
      if ( v22 >= 0 )
        goto LABEL_21;
      v24 = 130LL;
    }
    else
    {
      v24 = 128LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v23,
      (void *)v24,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v22);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    ++v19;
  }
  while ( v19 < v30 );
  if ( v33 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
    v25 = v33;
    goto LABEL_25;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
  v25 = v27;
LABEL_25:
  *a3 = v25;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  v8 = 0;
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  return v8;
}
