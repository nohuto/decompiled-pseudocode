/*
 * XREFs of IsTouchIVEnabled @ 0x1C01BCF70
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C009E37C (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0065790 (UseVelocityToEnableIV.c)
 */

char IsTouchIVEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl

  v2 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_TouchInputVirtualization__private_reporting,
      0x11EB519u,
      0,
      0,
      (__int64)&Feature_KeyboardInputVirtualization_logged_traits,
      1u,
      3);
  }
  else if ( !isChildPartition(v1, v0) || !byte_1C025A519 )
  {
    return 0;
  }
  return v2;
}
