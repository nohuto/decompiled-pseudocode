/*
 * XREFs of IsPTPIVEnabled @ 0x1C0068F50
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01896FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0071160 (UseVelocityToEnableIV.c)
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
  else if ( !(unsigned __int8)isChildPartition(v0) || !byte_1C0254551 )
  {
    return 0;
  }
  return v1;
}
