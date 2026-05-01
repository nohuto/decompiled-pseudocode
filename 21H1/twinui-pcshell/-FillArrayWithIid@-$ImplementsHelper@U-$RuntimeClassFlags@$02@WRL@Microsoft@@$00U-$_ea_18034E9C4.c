/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18034E9C4
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18034EEE0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18034EEE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlAdapterOwner,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_4d5f4ab7_9a4f_4e25_aafc_e1231c13e905;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_fbd5d9e9_e560_4560_8b72_872e1d434569;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
  result = (unsigned int)(v3 + 11);
  *a2 = result;
  return result;
}
