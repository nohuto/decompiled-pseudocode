/*
 * XREFs of ??1?$com_ptr_t@VApplicationViewBackedViewHostItem@@Uerr_failfast_policy@wil@@@wil@@QEAA@XZ @ 0x180235C94
 * Callers:
 *     _Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView_::_1_::dtor$5 @ 0x180235F9A (_Windows--Internal--Shell--Holographic--ViewHostItemFactory--CreateForView_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180236000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180236000.c)
 */

__int64 __fastcall wil::com_ptr_t<ApplicationViewBackedViewHostItem,wil::err_failfast_policy>::~com_ptr_t<ApplicationViewBackedViewHostItem,wil::err_failfast_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
