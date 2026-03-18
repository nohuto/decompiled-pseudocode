/*
 * XREFs of isChildPartition @ 0x1C0070954
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     UnInitializeInputComponents @ 0x1C00078C8 (UnInitializeInputComponents.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000AEDC (--0CTouchProcessor@@QEAA@XZ.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00161A8 (RIMHandlePowerDeviceArrival.c)
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 *     RawInputManagerObjectCreate @ 0x1C0055770 (RawInputManagerObjectCreate.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C005F240 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C005F420 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     IsPTPIVEnabled @ 0x1C0068F50 (IsPTPIVEnabled.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C006A854 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     IsMouseIVEnabled @ 0x1C0070FEC (IsMouseIVEnabled.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00AB114 (RawInputManagerDeviceObjectCreate.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8 (RIMChildInputTypeIsVirtualized.c)
 *     NtUserGetInputContainerId @ 0x1C0133790 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0167AE8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0169620 (RIMIDECreateDeviceInstancePath.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C04C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A7410 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C01B7128 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01B7190 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B7210 (IsTouchIVEnabled.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B9D58 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BD8AC (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C007125C (isInputVirtualizationEnabled.c)
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
