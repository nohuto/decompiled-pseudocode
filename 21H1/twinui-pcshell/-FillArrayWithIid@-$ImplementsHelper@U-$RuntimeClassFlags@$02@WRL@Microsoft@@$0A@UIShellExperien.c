/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1801E87B8
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801E9480 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShe_ea_1801E9480.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IWeakReferenceSource,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9;
  result = (unsigned int)(v3 + 11);
  *a2 = result;
  return result;
}
