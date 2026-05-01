/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@WRL@Microsoft@@@Details@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022B8E0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022B9D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewHostItemAppViewIn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022B968 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_18022B968.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10
  __int64 v11; // r11
  _QWORD *v12; // r8

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_a0c468da_f582_42e8_886b_d3cc317a5fcb);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v4 = v5;
  }
  else
  {
    v7 = v5 + 8;
    if ( InlineIsEqualGUID(v3, &GUID_0a755d7a_42b9_45ce_b3f2_398496c2378d) )
    {
      *v9 = v7;
    }
    else if ( InlineIsEqualGUID(v8, &GUID_2d10b4a2_7c09_4621_b36f_9a62ecbac6cb) )
    {
      *v12 = v7 + 8;
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v6 == -2147467262 )
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::CanCastTo(
                             v10 + 112,
                             v11);
  }
  return v6;
}
