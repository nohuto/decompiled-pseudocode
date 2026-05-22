/*
 * XREFs of IsGetMPCInputPostProcessorPresent @ 0x18003D04C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001F1C8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18001F860 (-IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180027264 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18003ADD0 (-IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x18010454C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18003D580 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetMPCInputPostProcessorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180209168 == 1 )
    return 1;
  if ( dword_180209168 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L">@", &v1) < 0 )
    return 0;
  result = v1;
  dword_180209168 = 2 - (v1 != 0);
  return result;
}
