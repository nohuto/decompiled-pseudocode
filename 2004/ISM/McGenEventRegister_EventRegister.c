/*
 * XREFs of McGenEventRegister_EventRegister @ 0x18003AC7C
 * Callers:
 *     _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x18003AC50 (_anonymous_namespace_--EtwLogRegistrar--EtwLogRegistrar.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !MICROSOFT_WINDOWSPHONE_INPUT_Context )
    return EventRegister(
             &MICROSOFT_WINDOWSPHONE_INPUT,
             McGenControlCallbackV2,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context);
  return result;
}
