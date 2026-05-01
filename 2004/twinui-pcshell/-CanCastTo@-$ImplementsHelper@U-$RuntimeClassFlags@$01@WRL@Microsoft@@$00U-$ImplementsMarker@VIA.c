/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VIActiveZBandNotificationServicePrivate@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18016041C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveSystemModeInternal@@UIActiveZBand@@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801604A8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveSystemModeIn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  unsigned int v6; // r9d
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r11
  _QWORD *v11; // r8
  __int64 v12; // r11

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84);
  v6 = 0;
  if ( IsEqualGUID || InlineIsEqualGUID(v3, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270) )
  {
    *v4 = v5;
  }
  else
  {
    if ( InlineIsEqualGUID(v7, &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84) )
    {
      *v9 = v10;
    }
    else if ( InlineIsEqualGUID(v8, &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84) )
    {
      *v11 = v12 + 8;
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v6 == -2147467262 )
      return (unsigned int)-2147467262;
  }
  return v6;
}
