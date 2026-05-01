/*
 * XREFs of ?CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@AEAVAsyncEventSerialInvocationContextToken@7@PEAUIServiceProvider@@@Z @ 0x18025745C
 * Callers:
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802434CC (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180245690 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AC5E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Hol.c)
 *     ??$query@UIViewHostItem@Holographic@Shell@Internal@Windows@@@?$com_ptr_t@VApplicationViewBackedViewHostItem@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1800ACAE0 (--$query@UIViewHostItem@Holographic@Shell@Internal@Windows@@@-$com_ptr_t@VApplicationViewBackedV.c)
 *     ??$query@UIViewHostItem@Holographic@Shell@Internal@Windows@@@?$com_ptr_t@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1800ACB2C (--$query@UIViewHostItem@Holographic@Shell@Internal@Windows@@@-$com_ptr_t@VWin32BackedViewHostIte.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x1802514BC (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 *     ??$MakeOrThrow@VApplicationViewBackedViewHostItem@@AEAVAsyncEventSerialInvocationContextToken@wil@@@wil@@YA?AV?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@AEAVAsyncEventSerialInvocationContextToken@0@@Z @ 0x180257154 (--$MakeOrThrow@VApplicationViewBackedViewHostItem@@AEAVAsyncEventSerialInvocationContextToken@wi.c)
 *     ??$MakeOrThrow@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAVAsyncEventSerialInvocationContextToken@wil@@@wil@@YA?AV?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@AEAVAsyncEventSerialInvocationContextToken@0@@Z @ 0x180257208 (--$MakeOrThrow@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAVAsyncEventSerial.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180257680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180257680.c)
 *     ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x180259F80 (-RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView(
        _QWORD *a1,
        struct IApplicationView *a2,
        struct wil::AsyncEventSerialInvocationContextToken *a3,
        struct IServiceProvider *a4)
{
  __int64 *v8; // rax
  ApplicationViewBackedViewHostItem *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rcx
  const char *v14; // r9
  _QWORD *result; // rax
  ApplicationViewBackedViewHostItem **v16; // rax
  ApplicationViewBackedViewHostItem *v17; // rbx
  ApplicationViewBackedViewHostItem *v18; // rcx
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rcx
  int v22[2]; // [rsp+20h] [rbp-28h] BYREF
  ApplicationViewBackedViewHostItem *v23[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v26; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    (**(void (***)(void))a2)();
    if ( v26 )
    {
      v23[0] = 0LL;
      v8 = wil::MakeOrThrow<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem,wil::AsyncEventSerialInvocationContextToken &>(
             (__int64 *)v22,
             a3);
      v9 = (ApplicationViewBackedViewHostItem *)*v8;
      *v8 = 0LL;
      v23[0] = v9;
      v10 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 )
      {
        *(_QWORD *)v22 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(v10);
      }
      v11 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RuntimeClassInitialize(v9, a2, a4);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          28LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\viewhostitemfactory.cpp",
          (const char *)(unsigned int)v11);
      v12 = wil::com_ptr_t<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem,wil::err_failfast_policy>::query<Windows::Internal::Shell::Holographic::IViewHostItem>(
              (__int64 *)v23,
              v22);
      v13 = *v12;
      *v12 = 0LL;
      *a1 = v13;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release((__int64)v9);
    }
    else
    {
      *(_QWORD *)v22 = 0LL;
      v16 = wil::MakeOrThrow<ApplicationViewBackedViewHostItem,wil::AsyncEventSerialInvocationContextToken &>(v23, a3);
      v17 = *v16;
      *v16 = 0LL;
      *(_QWORD *)v22 = v17;
      v18 = v23[0];
      if ( v23[0] )
      {
        v23[0] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v18);
      }
      v19 = ApplicationViewBackedViewHostItem::RuntimeClassInitialize(v17, a2);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          37LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\viewhostitemfactory.cpp",
          (const char *)(unsigned int)v19);
      v20 = (__int64 *)wil::com_ptr_t<ApplicationViewBackedViewHostItem,wil::err_failfast_policy>::query<Windows::Internal::Shell::Holographic::IViewHostItem>(
                         v22,
                         (__int64)v23);
      v21 = *v20;
      *v20 = 0LL;
      *a1 = v21;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v17);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\viewhostitemfactory.cpp",
      v14);
    *a1 = 0LL;
    return a1;
  }
  return result;
}
