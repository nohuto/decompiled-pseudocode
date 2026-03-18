/*
 * XREFs of IsMouseIVEnabled @ 0x1C003694C
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0028B18 (RIMChildInputTypeIsVirtualized.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034CE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0035550 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BB1D0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BB53C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C00369A4 (UseVelocityToEnableIV.c)
 */

char IsMouseIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MouseInputVirtualization__private_reporting,
      0x11EC2FEu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C0252543 )
  {
    return 0;
  }
  return v0;
}
