/*
 * XREFs of ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x18016616C
 * Callers:
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x18016725C (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801BFD18 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x18026736C (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 *     ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x1803B0B8C (-GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetScaleFactorForWindow(HWND a1, unsigned int *a2)
{
  int SystemScaleFactorForWindow; // r8d
  int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 100;
  SystemScaleFactorForWindow = GetSystemScaleFactorForWindow(a1, &v7);
  if ( SystemScaleFactorForWindow >= 0 )
  {
    SystemScaleFactorForWindow = GetOverrideScaleFactorForWindow(a1, &v6);
    if ( SystemScaleFactorForWindow >= 0 )
      *a2 = v7 * v6 / 0x64u;
  }
  return (unsigned int)SystemScaleFactorForWindow;
}
