/*
 * XREFs of ??0Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z @ 0x18024CA7C
 * Callers:
 *     ??$MakeOrThrow@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAVAsyncEventSerialInvocationContextToken@wil@@@wil@@YA?AV?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@AEAVAsyncEventSerialInvocationContextToken@0@@Z @ 0x180257B28 (--$MakeOrThrow@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAVAsyncEventSerial.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800A9C58 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@AEBVAsyncEventSerialInvocationContextToken@1@@Z @ 0x18024BE84 (--0-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 */

Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *__fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::Win32BackedViewHostItem(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct wil::AsyncEventSerialInvocationContextToken *a2)
{
  __int64 v4; // rcx
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItem'};
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal'};
  *((_QWORD *)this + 3) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `IApplicationViewBackedViewHostItemPrivate'};
  *((_QWORD *)this + 5) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Windows::Internal::ComposableShell::IForegroundTarget'};
  *((_QWORD *)this + 6) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>'};
  *((_QWORD *)this + 7) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Windows::Internal::ComposableShell::IKeepAliveView'};
  *((_QWORD *)this + 8) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::ComposableShell::TreeNodeBase>>'};
  *((_QWORD *)this + 20) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 21) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 22) = &Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 7LL;
  *((_WORD *)this + 116) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *(_OWORD *)((char *)this + 536) = 0LL;
  *((_WORD *)this + 276) = 0;
  *((_BYTE *)this + 554) = 0;
  *((_DWORD *)this + 139) = 0;
  *((_DWORD *)this + 140) = 6;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
    (__int64)this + 640,
    (__int64 *)a2);
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
    (__int64)this + 712,
    (__int64 *)a2);
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
    (__int64)this + 784,
    (__int64 *)a2);
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
    (__int64)this + 856,
    (__int64 *)a2);
  *((_QWORD *)this + 116) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 117);
  InitializeSRWLock((PSRWLOCK)this + 118);
  *((_QWORD *)this + 119) = 0LL;
  *((_BYTE *)this + 960) = 1;
  v4 = *(_QWORD *)a2;
  *((_QWORD *)this + 121) = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = this;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_BYTE *)this + 992) = 0;
  *((_DWORD *)this + 247) = 1;
  return result;
}
