/*
 * XREFs of ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18041ABE0
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804176E0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18041AAF0 (-SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800799AC (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801856AC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180415F5C (--1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1804182B0 (-StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x1804191D8 (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopInternal(struct IUnknown **this, struct IUnknown *a2)
{
  struct IApplicationView **v4; // r15
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct IUnknown *v8; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  int updated; // eax
  struct IVirtualDesktop *v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  struct IApplicationView *v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v4 = (struct IApplicationView **)(this + 19);
  if ( (unsigned int)SHIsSameObject(a2, this[19]) )
    return 0LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"VirtualDesktopSwitchedActivity");
  v24[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v24);
  if ( !*((_DWORD *)this + 40) )
  {
    if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *, struct IUnknown *))this[10]->lpVtbl[1].AddRef)(
            this[10],
            a2) )
    {
      v6 = -2147024809;
      v7 = 250LL;
      goto LABEL_9;
    }
    v8 = this[11];
    if ( !v8 )
    {
      v6 = -2147417848;
      v7 = 251LL;
      goto LABEL_9;
    }
    v23[0] = 0LL;
    QueryInterface = v8->lpVtbl[1].QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(v8, v23);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23[0] + 24LL))(v23[0], &v22);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v12 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            v21 = 0LL;
            v13 = v23[0];
            v14 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v23[0]
                                                                                                + 32LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
            updated = v14(v13, v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v21);
            v6 = updated;
            if ( updated < 0 )
              break;
            updated = CVirtualDesktopManager::_UpdateViewVisibility(
                        (CVirtualDesktopManager *)(this - 1),
                        v21,
                        (struct IVirtualDesktop *)a2);
            v6 = updated;
            if ( updated < 0 )
            {
              v20 = 262LL;
              goto LABEL_30;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
            if ( ++v12 >= v22 )
              goto LABEL_19;
          }
          v20 = 261LL;
LABEL_30:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)updated);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        }
        else
        {
LABEL_19:
          v16 = *v4;
          v21 = *v4;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v4, (__int64)a2);
          v17 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *))this[14]->lpVtbl[1].QueryInterface)(
                  this[14],
                  *v4);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10D,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v17);
          v18 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *))this[15]->lpVtbl[1].AddRef)(
                  this[15],
                  *v4);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10E,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v18);
          v19 = ((__int64 (__fastcall *)(struct IUnknown *, struct IVirtualDesktop *, struct IApplicationView *))this[13]->lpVtbl[2].Release)(
                  this[13],
                  v16,
                  *v4);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10F,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v19);
          VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
            (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v24,
            v16,
            *v4);
          v6 = 0;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        }
        goto LABEL_26;
      }
      v11 = 257LL;
    }
    else
    {
      v11 = 254LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_26:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    goto LABEL_27;
  }
  v6 = -2147019873;
  v7 = 249LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v6);
LABEL_27:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v24);
  return v6;
}
