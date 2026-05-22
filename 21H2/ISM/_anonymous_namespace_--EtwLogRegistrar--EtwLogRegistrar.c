/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x18003A990
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x180001AF0 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger__.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180036EF4 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x18003A9BC (McGenEventRegister_EventRegister.c)
 */

void *anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180206478, 0LL);
  McGenEventRegister_EventRegister();
  return &`anonymous namespace'::g_EtwLogger;
}
