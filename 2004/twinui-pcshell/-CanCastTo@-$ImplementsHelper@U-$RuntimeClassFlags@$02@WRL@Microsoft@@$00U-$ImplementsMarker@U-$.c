/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@WRL@Microsoft@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180257C74
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180257D08 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewHostItemAppViewIn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003CE10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  unsigned int CanCastTo; // r9d
  _DWORD *v7; // rcx
  void **v8; // r8
  void *v9; // r10
  const struct _GUID *v10; // r11
  __int64 v11; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_a0c468da_f582_42e8_886b_d3cc317a5fcb);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v5 = a1;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, &GUID_0a755d7a_42b9_45ce_b3f2_398496c2378d) )
    {
      *v8 = v9;
    }
    else if ( InlineIsEqualGUID(v7, &GUID_2d10b4a2_7c09_4621_b36f_9a62ecbac6cb) )
    {
      *v8 = (void *)(v11 + 8);
    }
    else
    {
      CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 112), v10, v8);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
  }
  return CanCastTo;
}
