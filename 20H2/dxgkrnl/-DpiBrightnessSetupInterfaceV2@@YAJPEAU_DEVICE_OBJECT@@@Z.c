/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017DB9C
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017DD1C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02D032C (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DpiQueryMiniportInterface @ 0x1C01808E0 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetupInterfaceV2(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int MiniportInterface; // ebp
  __int64 v5; // xmm1_8
  int v6; // [rsp+30h] [rbp-28h]

  DeviceExtension = (char *)a1->DeviceExtension;
  MiniportInterface = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1184) = 131160;
  *((_QWORD *)DeviceExtension + 587) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 586) = a1;
  *((_QWORD *)DeviceExtension + 588) = DXGGLOBAL::DereferenceObjectWork;
  *((_DWORD *)DeviceExtension + 1170) = 65592;
  *((_QWORD *)DeviceExtension + 589) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 590) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 591) = DpiBrightnessIfGet;
  *((_OWORD *)DeviceExtension + 287) = *(_OWORD *)(DeviceExtension + 4680);
  *((_OWORD *)DeviceExtension + 288) = *(_OWORD *)(DeviceExtension + 4696);
  *((_OWORD *)DeviceExtension + 289) = *(_OWORD *)(DeviceExtension + 4712);
  v5 = *((_QWORD *)DeviceExtension + 591);
  *((_QWORD *)DeviceExtension + 581) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 582) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 583) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 584) = DpiBrightnessIfGetBacklightReduction;
  *((_QWORD *)DeviceExtension + 580) = v5;
  *((_DWORD *)DeviceExtension + 1148) = 131160;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_OemPanelDriverSupport__private_reporting,
    0x801B31u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
    1,
    v6);
  return (unsigned int)MiniportInterface;
}
