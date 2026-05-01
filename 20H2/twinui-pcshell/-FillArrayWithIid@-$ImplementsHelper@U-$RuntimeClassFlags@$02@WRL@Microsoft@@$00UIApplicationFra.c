/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180348C3C
 * Callers:
 *     ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@VFtmBase@23@@123@PEAKPEAPEAU_GUID@@@Z @ 0x18034443C (--$GetImplementedIIDS@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$_ea_18034443C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_9516d866_ca0f_40ca_8997_efa618b50f99;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_86fb57a6_3c81_4f40_a971_6280be4e526e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_b755e6e0_b048_49cc_8911_11a041216f5f;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_22ba7cc0_8e75_484f_844e_0b6d74105413;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7;
  result = (unsigned int)(v3 + 11);
  *a2 = result;
  return result;
}
