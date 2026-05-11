/*
 * XREFs of ?Feature_Servicing_2101c_29879707__private_IsEnabled@@YAHXZ @ 0x1C00099D0
 * Callers:
 *     ?IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000D2C0 (-IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000D420 (-IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000DD14 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0009184 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00095A4 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

__int64 Feature_Servicing_2101c_29879707__private_IsEnabled(void)
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  if ( (Feature_Servicing_2101c_29879707__private_featureState & 1) != 0 )
    v0 = Feature_Servicing_2101c_29879707__private_featureState;
  else
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_Servicing_2101c_29879707__private_featureState,
           (unsigned int)Feature_Servicing_2101c_29879707__private_featureState,
           (__int64)&wil_details_featureDescriptors_a);
  v1 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService((v0 >> 8) & 1, (v0 >> 9) & 1, v1, 3);
  return v1;
}
