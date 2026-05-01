/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18003BEF0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B410 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18003B410.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18016A97C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCI.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b)
    || (unsigned int)InlineIsEqualGUID(v2, &GUID_e0fe7384_5482_4659_ab2c_4ff038948779)
    || (unsigned int)InlineIsEqualGUID(v5, &GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88)
    || (unsigned int)InlineIsEqualGUID(v6, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
  {
    goto LABEL_15;
  }
  v8 = v3 + 8;
  if ( *v7 == 794127247
    && v7[1] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data2
    && v7[2] == *(_DWORD *)GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4
    && v7[3] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4[4]
    || (v8 = v3 + 16, *v7 == -499699522)
    && v7[1] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data2
    && v7[2] == *(_DWORD *)GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4
    && v7[3] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4[4] )
  {
    *v4 = v8;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_374fdd79_cca2_4be4_a49d_0508c29743bc)
    || (unsigned int)InlineIsEqualGUID(v9, &GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6) )
  {
LABEL_15:
    *v4 = v3;
    return 0LL;
  }
  else if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_3d2acb9f_0690_4569_b33a_da2d10adff4f) )
  {
    *v12 = v11 + 8;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
