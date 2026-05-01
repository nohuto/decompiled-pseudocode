/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180038FCC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038EC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180038EC0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803D4208 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_1803D4208.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerInternal,ITabletModePositionerPriv,IStartDismissalPolicy,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IImmersiveMonitorNotification,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerWindowingDelegationHandler,IImmersiveShellHookNotification,IMultitaskingViewVisibilityNotification,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int CanCastTo; // r9d
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r10

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_a8e97fa4_540d_48a9_aac2_3b6140069a32) )
  {
    if ( !(unsigned int)InlineIsEqualGUID(v2, &GUID_ef2ef97b_ee1b_47a0_ad0c_8478ec6c722f)
      && !(unsigned int)InlineIsEqualGUID(v5, &GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2)
      && !(unsigned int)InlineIsEqualGUID(v9, &GUID_ee010e17_919a_4068_868b_675acf787303)
      && !(unsigned int)InlineIsEqualGUID(v10, &GUID_727f9e97_76ee_497b_a942_b6371328485c) )
    {
      v12 = v8 + 8;
      if ( *v11 == -2030348378
        && v11[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
        && v11[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
        && v11[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4]
        || (v12 = v8 + 16, *v11 == -1811144131)
        && v11[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        && v11[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        && v11[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        *v6 = v12;
        return CanCastTo;
      }
      if ( !(unsigned int)InlineIsEqualGUID(v11, &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IMultitaskingViewVisibilityNotification,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>::CanCastTo(
                      v8 + 8,
                      v13);
        if ( CanCastTo == -2147467262 )
          return (unsigned int)-2147467262;
        return CanCastTo;
      }
    }
    *v6 = v8;
    return CanCastTo;
  }
  *v3 = v4;
  return 0LL;
}
