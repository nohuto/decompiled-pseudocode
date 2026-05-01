/*
 * XREFs of ??1?$com_ptr_t@VParentEdge@TreeNodeBase@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18024C744
 * Callers:
 *     _Windows::Internal::ComposableShell::TreeNodeBase::TreeNodeBase_::_1_::dtor$0 @ 0x18024C0B5 (_Windows--Internal--ComposableShell--TreeNodeBase--TreeNodeBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007E0A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewT.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::ComposableShell::TreeNodeBase::ParentEdge,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::ComposableShell::TreeNodeBase::ParentEdge,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
