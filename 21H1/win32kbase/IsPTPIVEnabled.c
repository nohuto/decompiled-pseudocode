/*
 * XREFs of IsPTPIVEnabled @ 0x1C005F440
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C009E37C (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0065790 (UseVelocityToEnableIV.c)
 */

char IsPTPIVEnabled()
{
  __int64 v0; // rcx
  char v1; // bl

  v1 = 1;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (unsigned int)&Feature_PTPInputVirtualization__private_reporting,
      19330045,
      0,
      0,
      (__int64)&Feature_InputVirtualization_logged_traits,
      1,
      3);
  }
  else if ( !(unsigned __int8)isChildPartition(v0) || !byte_1C025A518 )
  {
    return 0;
  }
  return v1;
}
