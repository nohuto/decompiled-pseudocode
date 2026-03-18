/*
 * XREFs of isChildPartition @ 0x1C0036370
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     UnInitializeInputComponents @ 0x1C0007ED8 (UnInitializeInputComponents.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0008DFC (--0CTouchProcessor@@QEAA@XZ.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C0021C50 (RIMHandlePowerDeviceArrival.c)
 *     RawInputManagerObjectCreate @ 0x1C0022E7C (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0023168 (RawInputManagerDeviceObjectCreate.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0028B18 (RIMChildInputTypeIsVirtualized.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C002DBC4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0035550 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     IsMouseIVEnabled @ 0x1C003694C (IsMouseIVEnabled.c)
 *     InitializeInputComponents @ 0x1C009C80C (InitializeInputComponents.c)
 *     IsPTPIVEnabled @ 0x1C00AF270 (IsPTPIVEnabled.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00BF580 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00BF790 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     NtUserGetInputContainerId @ 0x1C0131440 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165588 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01670C0 (RIMIDECreateDeviceInstancePath.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0189B24 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A5090 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C01B4DB8 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01B4E20 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B4EA0 (IsTouchIVEnabled.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B79E8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BB53C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0036AA0 (isInputVirtualizationEnabled.c)
 */

bool isChildPartition()
{
  char v0; // al
  char v1; // cl

  v0 = isInputVirtualizationEnabled();
  v1 = 0;
  if ( v0 )
    return gbRootPartition == 0;
  return v1;
}
