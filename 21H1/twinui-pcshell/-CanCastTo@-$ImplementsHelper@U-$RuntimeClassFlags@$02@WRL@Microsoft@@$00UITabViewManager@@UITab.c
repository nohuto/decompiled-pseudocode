/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18024AEBC
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18024AF30 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18024AF30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18024ADDC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIBrokeredViewTabConver.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabViewManager,ITabDragHandler,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_d1710073_c814_4a0c_9685_00e44547418f) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_50f69da0_d009_4299_9e32_c39657f57ce3)
      || InlineIsEqualGUID(v6, &GUID_9bb49088_bb21_4f25_a95d_3c4f97b21ace) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
