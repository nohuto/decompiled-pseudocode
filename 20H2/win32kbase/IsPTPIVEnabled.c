/*
 * XREFs of IsPTPIVEnabled @ 0x1C00AF270
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0028B18 (RIMChildInputTypeIsVirtualized.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01871BC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C00369A4 (UseVelocityToEnableIV.c)
 */

char IsPTPIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PTPInputVirtualization__private_reporting,
      0x126F3FDu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C0252540 )
  {
    return 0;
  }
  return v0;
}
