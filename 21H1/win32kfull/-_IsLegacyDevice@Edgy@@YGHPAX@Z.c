/*
 * XREFs of ?_IsLegacyDevice@Edgy@@YGHPAX@Z @ 0x16EC06
 * Callers:
 *     ?_GetArcData@Edgy@@YG?AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z @ 0x16E34D (-_GetArcData@Edgy@@YG-AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z @ 0x16EFD9 (-_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __GetTouchValidationStatus@4 @ 0x14B414 (__GetTouchValidationStatus@4.c)
 *     ?_GetForceLegacyModeFromRegistry@Edgy@@YGHXZ @ 0x16E899 (-_GetForceLegacyModeFromRegistry@Edgy@@YGHXZ.c)
 */

BOOL __thiscall Edgy::_IsLegacyDevice(void *ecx0)
{
  int v1; // edx
  int v3; // eax
  BOOL result; // eax

  v1 = gForceLegacyMode;
  if ( !gForceLegacyMode )
  {
    v1 = (Edgy::_GetForceLegacyModeFromRegistry() != 1) + 1;
    gForceLegacyMode = v1;
  }
  result = 1;
  if ( v1 != 1 )
  {
    v3 = HMValidateHandleNoSecure((unsigned int)ecx0, 19);
    if ( !v3 || _GetTouchValidationStatus(v3) == 1 )
      return 0;
  }
  return result;
}
