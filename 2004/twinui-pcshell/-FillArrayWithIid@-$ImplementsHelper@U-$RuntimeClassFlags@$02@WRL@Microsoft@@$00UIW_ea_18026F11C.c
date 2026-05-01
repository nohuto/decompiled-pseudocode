/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18026F11C
 * Callers:
 *     ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@123@PEAKPEAPEAU_GUID@@@Z @ 0x180263C44 (--$GetImplementedIIDS@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$_ea_180263C44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabDragHandler,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_727f9e97_76ee_497b_a942_b6371328485c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_d1710073_c814_4a0c_9685_00e44547418f;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_50f69da0_d009_4299_9e32_c39657f57ce3;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_9bb49088_bb21_4f25_a95d_3c4f97b21ace;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_0cf8429a_8037_4ebd_83fd_6471d78ca4eb;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  result = (unsigned int)(v3 + 11);
  *a2 = result;
  return result;
}
