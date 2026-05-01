/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800577C8
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002AC04 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabbingAwarePositione.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005783C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsC.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // r10

  if ( InlineIsEqualGUID(a2, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_727f9e97_76ee_497b_a942_b6371328485c)
      || InlineIsEqualGUID(v5, &GUID_86fb57a6_3c81_4f40_a971_6280be4e526e) )
    {
      *v6 = v8;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer>::CanCastTo(
                             v8 + 8,
                             v9,
                             v6);
    }
    return v7;
  }
}
