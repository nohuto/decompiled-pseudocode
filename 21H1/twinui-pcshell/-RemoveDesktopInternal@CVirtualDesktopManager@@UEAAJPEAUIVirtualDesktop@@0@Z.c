/*
 * XREFs of ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804176E0
 * Callers:
 *     ?RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180417580 (-RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C860 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800799AC (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     wil::details::ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___::_ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___ @ 0x1800A840C (wil--details--ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___--_ScopeExitFn__lambda_a519.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801856AC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180415EE4 (--1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180418018 (-StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x180418970 (-Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualD.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18041ABE0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18041B034 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::RemoveDesktopInternal(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  bool v8; // r15
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  int updated; // eax
  struct IVirtualDesktop *v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  struct IUnknown *v23; // [rsp+30h] [rbp-D0h] BYREF
  struct IVirtualDesktop *v24; // [rsp+38h] [rbp-C8h] BYREF
  struct IApplicationView *v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-A8h] BYREF
  char v29; // [rsp+70h] [rbp-90h]
  _QWORD v30[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v23 = a2;
  v24 = a3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"VirtualDesktopDestroyedActivity");
  v30[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v30);
  v4 = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
         (CVirtualDesktopManager *)((char *)this - 8),
         (struct IVirtualDesktop *)v23,
         v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !*((_QWORD *)this + 11) )
    {
      v5 = -2147417848;
      v6 = 2147549448LL;
      v7 = 444LL;
      goto LABEL_5;
    }
    v8 = (unsigned int)SHIsSameObject(v23, *((struct IUnknown **)this + 19)) != 0;
    v27 = 0LL;
    v9 = *((_QWORD *)this + 11);
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v11 = v10(v9, &v27);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 449LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_38;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 13)
                                                                                         + 32LL))(
            *((_QWORD *)this + 13),
            v23,
            v24);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 451LL;
      goto LABEL_10;
    }
    v28[0] = (char *)this - 8;
    v28[1] = &v23;
    v28[2] = &v24;
    v29 = 1;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 24LL))(v27, &v26);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v15 = 0;
      if ( v26 )
      {
        while ( 1 )
        {
          v25 = 0LL;
          v16 = v27;
          v17 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v27 + 32LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
          updated = v17(v16, v15, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v25);
          v5 = updated;
          if ( updated < 0 )
            break;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IUnknown *))(**((_QWORD **)this + 12) + 32LL))(
                 *((_QWORD *)this + 12),
                 v25,
                 v23) )
          {
            updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 40LL))(
                        *((_QWORD *)this + 12),
                        v25,
                        v24);
            v5 = updated;
            if ( updated < 0 )
            {
              v20 = 464LL;
              goto LABEL_27;
            }
            v19 = v24;
            if ( !v8 )
              v19 = (struct IVirtualDesktop *)*((_QWORD *)this + 19);
            updated = CVirtualDesktopManager::_UpdateViewVisibility(
                        (CVirtualDesktopManager *)((char *)this - 8),
                        v25,
                        v19);
            v5 = updated;
            if ( updated < 0 )
            {
              v20 = 465LL;
              goto LABEL_27;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
          if ( ++v15 >= v26 )
            goto LABEL_21;
        }
        v20 = 461LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)updated);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        goto LABEL_36;
      }
LABEL_21:
      if ( v8 && (v13 = CVirtualDesktopManager::SwitchDesktopInternal(this, v24), v5 = v13, v13 < 0) )
      {
        v14 = 471LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 10) + 64LL))(
                *((_QWORD *)this + 10),
                v23);
        v5 = v13;
        if ( v13 >= 0 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
            1u);
          v21 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 15) + 56LL))(
                  *((_QWORD *)this + 15),
                  v23);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1E0,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v21);
          v29 = 0;
          v13 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 13)
                                                                                               + 48LL))(
                  *((_QWORD *)this + 13),
                  v23,
                  v24);
          v5 = v13;
          if ( v13 >= 0 )
          {
            VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
              (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v30,
              (struct IVirtualDesktop *)v23,
              v24);
            v5 = 0;
            goto LABEL_36;
          }
          v14 = 484LL;
        }
        else
        {
          v14 = 474LL;
        }
      }
    }
    else
    {
      v14 = 457LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_36:
    wil::details::ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___::_ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___((__int64)v28);
    goto LABEL_37;
  }
  v6 = (unsigned int)v4;
  v7 = 443LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v6);
LABEL_38:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::~VirtualDesktopDestroyedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v30);
  return v5;
}
