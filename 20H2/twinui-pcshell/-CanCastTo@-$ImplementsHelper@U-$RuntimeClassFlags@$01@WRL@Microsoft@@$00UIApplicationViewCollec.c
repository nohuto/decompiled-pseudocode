/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800337B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032CD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180032CD0.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18018E4DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCI.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r11

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b) )
  {
    *v2 = v4;
    return 0LL;
  }
  else
  {
    v5 = v4 + 8;
    if ( *v3 == -520195196
      && v3[1] == *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data2
      && v3[2] == *(_DWORD *)GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4
      && v3[3] == *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4[4]
      || (v5 = v4 + 16, *v3 == 1830563296)
      && v3[1] == *(_DWORD *)&GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data2
      && v3[2] == *(_DWORD *)GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data4
      && v3[3] == *(_DWORD *)&GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data4[4] )
    {
      *v2 = v5;
      return 0LL;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db)
           || (unsigned int)InlineIsEqualGUID(v6, &GUID_2f556b8f_7278_41ef_b868_3152588db186)
           || (unsigned int)InlineIsEqualGUID(v9, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7)
           || (unsigned int)InlineIsEqualGUID(v10, &GUID_374fdd79_cca2_4be4_a49d_0508c29743bc)
           || (unsigned int)InlineIsEqualGUID(v11, &GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6) )
    {
      *v8 = v7;
      return 0LL;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_3d2acb9f_0690_4569_b33a_da2d10adff4f) )
    {
      *v14 = v13 + 8;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
}
