/*
 * XREFs of EngMulDiv @ 0x1C006C3E0
 * Callers:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C00227E8 (RIMUpdatePointerDeviceScalingInfo.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006C050 (PhysicalToLogicalDPIPoint.c)
 *     ScaleDPIRect @ 0x1C006C1B8 (ScaleDPIRect.c)
 *     GetMonitorRectForDpiContext @ 0x1C006C298 (GetMonitorRectForDpiContext.c)
 *     NtUserGetDpiForMonitor @ 0x1C006DA80 (NtUserGetDpiForMonitor.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00A6ECC (ExpandMonitorSpaceVertex.c)
 *     InitLoadResources @ 0x1C00AAC44 (InitLoadResources.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF0B4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C014C300 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C016C7D4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMTransformCoordinates @ 0x1C016D79C (RIMTransformCoordinates.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A8198 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C01AAA70 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C01AF7C4 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01B15B0 (GetNormalizedMouseSensitivityFactor.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  signed int v3; // r11d
  unsigned int v4; // ecx
  int v5; // r10d
  signed int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rax

  v3 = abs32(a);
  v4 = ((a >> 31) & 0xFFFFFFFE) + 1;
  v5 = -v4;
  v6 = abs32(b);
  if ( b >= 0 )
    v5 = v4;
  if ( !c )
  {
    if ( v5 <= 0 )
      goto LABEL_14;
    goto LABEL_16;
  }
  if ( c < 0 )
  {
    v5 = -v5;
    c = -c;
  }
  v7 = c;
  v8 = c / 2 + v3 * (__int64)v6;
  if ( v7 == 96 )
    v9 = v8 / 96;
  else
    v9 = v8 / v7;
  if ( v9 > 0x7FFFFFFF )
  {
    if ( v5 <= 0 )
    {
LABEL_14:
      LODWORD(v9) = 0x80000000;
      return v9;
    }
LABEL_16:
    LODWORD(v9) = 0x7FFFFFFF;
    return v9;
  }
  if ( v5 <= 0 )
    LODWORD(v9) = -(int)v9;
  return v9;
}
