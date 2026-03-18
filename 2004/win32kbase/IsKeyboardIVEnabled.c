/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C01B7128
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8 (RIMChildInputTypeIsVirtualized.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B9C24 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0071160 (UseVelocityToEnableIV.c)
 */

char IsKeyboardIVEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl

  v2 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_KeyboardInputVirtualization__private_reporting,
      0x11F7129u,
      0,
      0,
      (__int64)&Feature_KeyboardInputVirtualization_logged_traits,
      1u,
      3);
  }
  else if ( !isChildPartition(v1, v0) || !byte_1C0254552 )
  {
    return 0;
  }
  return v2;
}
