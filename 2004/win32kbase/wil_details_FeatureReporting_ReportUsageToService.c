/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016D70 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016DF0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A3C0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ShouldEnableInputVirtualization @ 0x1C003457C (ShouldEnableInputVirtualization.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C004EE78 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     IsPTPIVEnabled @ 0x1C0068F50 (IsPTPIVEnabled.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E208 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C006FC64 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C00CE7D8 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled @ 0x1C00CE948 (Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled.c)
 *     Feature_Servicing_FixExtraSuppression_26190189__private_IsEnabled @ 0x1C00CE9B8 (Feature_Servicing_FixExtraSuppression_26190189__private_IsEnabled.c)
 *     Feature_Servicing_2108c_32183379__private_IsEnabled @ 0x1C00D1108 (Feature_Servicing_2108c_32183379__private_IsEnabled.c)
 *     Feature_Servicing_2108c_32449232__private_IsEnabled @ 0x1C00D1670 (Feature_Servicing_2108c_32449232__private_IsEnabled.c)
 *     Feature_Servicing_2105c_32092283__private_IsEnabled @ 0x1C00D23BC (Feature_Servicing_2105c_32092283__private_IsEnabled.c)
 *     ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C0181190 (-Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01896FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C01B7128 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01B7190 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B7210 (IsTouchIVEnabled.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01B9B50 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01BB9D4 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0071050 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall wil_details_FeatureReporting_ReportUsageToService(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  _UNKNOWN **result; // rax
  int v10; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v10 = a6 == 0 ? 4 : 0;
        break;
      case 2:
        v10 = a6 != 0 ? 1 : 5;
        break;
      case 3:
        v10 = a6 != 0 ? 2 : 6;
        break;
      case 4:
        v10 = a6 != 0 ? 3 : 7;
        break;
      case 5:
        v10 = a6 != 0 ? 8 : 10;
        break;
      case 6:
        v10 = a6 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a7 - 100) > 0x31u )
          v10 = 255;
        else
          v10 = (unsigned __int8)(a7 - 100) + (a6 != 0 ? 100 : 150);
        break;
    }
    result = (_UNKNOWN **)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, a3, a4, v10);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
        return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, 0, 1LL);
    }
  }
  return result;
}
