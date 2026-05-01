/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIFullScreenPositionerNotificationService@@UIFullScreenPositionerTestHandler@@UITransitionStateChangeHandler@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180181FCC
 * Callers:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIWeakReferenceSource@@U?$ChainInterfaces@UIFullScreenPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIFullScreenPositionerNotificationService@@UIFullScreenPositionerTestHandler@@UITransitionStateChangeHandler@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180181F0C (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,IApplicationViewChangeListener,ITabletModeChangeListener,IFullScreenPositionerNotificationService,IFullScreenPositionerTestHandler,ITransitionStateChangeHandler,IPrivilegedOperationsConsumer>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_ee010e17_919a_4068_868b_675acf787303;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_727f9e97_76ee_497b_a942_b6371328485c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_86fb57a6_3c81_4f40_a971_6280be4e526e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_5ec05508_a594_4da2_9999_16c34bd9808f;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_0d772b29_0f8e_42f2_b679_2f71c58e6d21;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
  result = (unsigned int)(v3 + 10);
  *a2 = result;
  return result;
}
