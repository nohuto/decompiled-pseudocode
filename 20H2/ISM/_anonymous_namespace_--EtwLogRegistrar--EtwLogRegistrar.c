/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x18003ACD0
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x180001AF0 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger__.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180037278 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x18003ACFC (McGenEventRegister_EventRegister.c)
 */

void *anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180205478, 0LL);
  McGenEventRegister_EventRegister();
  return &`anonymous namespace'::g_EtwLogger;
}
