/*
 * XREFs of ?IsAnyOOBE@@YA_NXZ @ 0x18034B95C
 * Callers:
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180353378 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803558A4 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180355984 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x1801F994C (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsHolographicOOBE@@YA_NXZ @ 0x18034BB64 (-IsHolographicOOBE@@YA_NXZ.c)
 *     ?IsMobileOOBE@@YA_NXZ @ 0x18034BD2C (-IsMobileOOBE@@YA_NXZ.c)
 */

char IsAnyOOBE(void)
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( IsUserOOBE() || v2 || (unsigned int)OOBEComplete(&v2) && !v2 || IsMobileOOBE() || IsHolographicOOBE() )
    return 1;
  return v0;
}
