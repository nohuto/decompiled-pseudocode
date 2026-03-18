/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x1C001E898 (ShouldEnableInputVirtualization.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00421B8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0050B20 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005A970 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AA30 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AE30 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     IsPTPIVEnabled @ 0x1C005F440 (IsPTPIVEnabled.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0063334 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C00646B4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?Feature_Servicing_2103c_31321304__private_IsEnabled@@YAHXZ @ 0x1C00CE514 (-Feature_Servicing_2103c_31321304__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_2102c_30001498__private_IsEnabled@@YAHXZ @ 0x1C00D0940 (-Feature_Servicing_2102c_30001498__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C0186E90 (-Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C01BCE88 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BCEF0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BCF70 (IsTouchIVEnabled.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01BF8B0 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01C1734 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0065680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
