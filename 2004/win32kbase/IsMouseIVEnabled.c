/*
 * XREFs of IsMouseIVEnabled @ 0x1C0070FEC
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C006FC64 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00709D4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8 (RIMChildInputTypeIsVirtualized.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BD8AC (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0071050 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     UseVelocityToEnableIV @ 0x1C0071160 (UseVelocityToEnableIV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

char IsMouseIVEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+60h] [rbp+8h] BYREF

  v2 = 1;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    v5 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         (unsigned int)&Feature_MouseInputVirtualization__private_reporting,
                         18793214,
                         0,
                         0,
                         2)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      v4 = 0;
      g_wil_details_pfnFeatureLoggingHook(
        18793214LL,
        &Feature_InputVirtualization_logged_traits,
        0LL,
        1LL,
        &v5,
        0LL,
        v4,
        1LL);
    }
  }
  else if ( !isChildPartition(v1, v0) || !byte_1C0254554 )
  {
    return 0;
  }
  return v2;
}
