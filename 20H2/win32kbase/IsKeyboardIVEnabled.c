/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C01B4DB8
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0028B18 (RIMChildInputTypeIsVirtualized.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B78B4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C00369A4 (UseVelocityToEnableIV.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_KeyboardInputVirtualization__private_reporting,
      0x11F7129u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C0252544 )
  {
    return 0;
  }
  return v0;
}
