/*
 * XREFs of McGenEventRegister_EventRegister @ 0x180031314
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800310FC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !Microsoft_Windows_Dwm_Core_Provider_Context )
    return EventRegister(
             &Microsoft_Windows_Dwm_Core_Provider,
             McGenControlCallbackV2,
             &Microsoft_Windows_Dwm_Core_Provider_Context,
             &Microsoft_Windows_Dwm_Core_Provider_Context);
  return result;
}
