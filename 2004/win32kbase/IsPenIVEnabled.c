/*
 * XREFs of IsPenIVEnabled @ 0x1C01B7190
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01896FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0071160 (UseVelocityToEnableIV.c)
 */

char IsPenIVEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl

  v2 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_PenInputVirtualization__private_reporting,
      0x126C043u,
      0,
      0,
      (__int64)&Feature_KeyboardInputVirtualization_logged_traits,
      1u,
      3);
  }
  else if ( !isChildPartition(v1, v0) || !byte_1C0254550 )
  {
    return 0;
  }
  return v2;
}
