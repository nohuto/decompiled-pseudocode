/*
 * XREFs of ?ConfigureForegroundOnActivationObject@ForegroundManager@@AEAAXAEBU_LUID@@_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x18004652C
 * Callers:
 *     ?SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180046550 (-SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ForegroundManager::ConfigureForegroundOnActivationObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  return ConfigureActivationObject(a2, a4, 4LL);
}
