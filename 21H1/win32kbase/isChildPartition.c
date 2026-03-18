/*
 * XREFs of isChildPartition @ 0x1C0064F84
 * Callers:
 *     UnInitializeInputComponents @ 0x1C001EB24 (UnInitializeInputComponents.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C00212A8 (--0CTouchProcessor@@QEAA@XZ.c)
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0036760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00485FC (RIMHandlePowerDeviceArrival.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00515D0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C0051910 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     IsPTPIVEnabled @ 0x1C005F440 (IsPTPIVEnabled.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0061924 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C009E37C (RIMChildInputTypeIsVirtualized.c)
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 *     RawInputManagerObjectCreate @ 0x1C00A3C50 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00A3F48 (RawInputManagerDeviceObjectCreate.c)
 *     NtUserGetInputContainerId @ 0x1C0139430 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C016F970 (RIMIDECreateDeviceInstancePath.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0191D4C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AD170 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C01BCE88 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BCEF0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BCF70 (IsTouchIVEnabled.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BFAB8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C360C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C006588C (isInputVirtualizationEnabled.c)
 */

bool __fastcall isChildPartition(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // cl

  v2 = isInputVirtualizationEnabled(a1, a2);
  v3 = 0;
  if ( v2 )
    return gbRootPartition == 0;
  return v3;
}
