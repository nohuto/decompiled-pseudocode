/*
 * XREFs of ??1AutoProviderRegistrar@@QEAA@XZ @ 0x18008C9C0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x180104EF0 (_dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AutoProviderRegistrar::~AutoProviderRegistrar(AutoProviderRegistrar *this)
{
  if ( g_ProviderRegistrationMicrosoft_Windows_Deplorch )
    g_ProviderRegistrationMicrosoft_Windows_Deplorch(this);
}
