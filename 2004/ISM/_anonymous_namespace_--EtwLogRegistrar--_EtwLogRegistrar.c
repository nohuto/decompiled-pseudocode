/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar @ 0x18003B2B0
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__ @ 0x180051A20 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_EtwLogger__.c)
 * Callees:
 *     <none>
 */

__int64 anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar()
{
  REGHANDLE v0; // rcx

  v0 = qword_180205498;
  qword_180205498 = 0LL;
  dword_180205478 = 0;
  EventUnregister(v0);
  return McGenEventUnregister_EventUnregister();
}
