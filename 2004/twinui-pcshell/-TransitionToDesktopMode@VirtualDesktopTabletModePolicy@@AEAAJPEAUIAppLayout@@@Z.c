/*
 * XREFs of ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x18043F60C
 * Callers:
 *     ?TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z @ 0x18043F420 (-TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z.c)
 *     ?TabletModePositionerControlLost@VirtualDesktopTabletModePolicy@@UEAAJPEAUIAppLayout@@@Z @ 0x18043F580 (-TabletModePositionerControlLost@VirtualDesktopTabletModePolicy@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopTabletModePolicy::TransitionToDesktopMode(
        VirtualDesktopTabletModePolicy *this,
        struct IAppLayout *a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(struct IAppLayout *, _QWORD, __int64); // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(struct IAppLayout *, _QWORD, __int64); // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v17[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v18; // [rsp+38h] [rbp-31h] BYREF
  __int64 v19; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  v4 = *((_QWORD *)this + 10);
  v19 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  if ( !a2 )
    goto LABEL_19;
  *(_QWORD *)v17 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64))(*(_QWORD *)a2 + 136LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  v6 = v5(a2, 0LL, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = 0LL;
    while ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)v17 + 24LL))(*(_QWORD *)v17, 1LL, v21) >= 0 )
    {
      v18 = 0LL;
      v10 = *((_QWORD *)this + 8);
      v11 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 80LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      if ( v11(v10, v22, *((_QWORD *)this + 6), &v18) >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v22 + 184LL))(v22, &v20);
        if ( v12 >= 0 )
        {
          if ( v20 > v9 )
          {
            v9 = v20;
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v19, &v18);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x64,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
            (const char *)(unsigned int)v12);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    v13 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    v6 = v13(a2, 0LL, 1LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 111LL;
      goto LABEL_14;
    }
    v4 = v19;
    while ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)v17 + 24LL))(*(_QWORD *)v17, 1LL, v21) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 208LL))(
        *((_QWORD *)this + 7),
        v22,
        v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
LABEL_19:
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 296LL))(*((_QWORD *)this + 7), v4);
    v7 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 248LL))(*((_QWORD *)this + 7), v4);
      v7 = v14;
      if ( v14 >= 0 )
        goto LABEL_24;
      v15 = 122LL;
    }
    else
    {
      v15 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_24;
  }
  v8 = 89LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
    (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v7;
}
