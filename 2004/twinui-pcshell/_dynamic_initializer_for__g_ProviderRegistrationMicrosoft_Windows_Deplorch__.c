/*
 * XREFs of _dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x18000A350
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoProviderRegistrar@@QEAA@P6AXXZ0@Z @ 0x18008C8E4 (--0AutoProviderRegistrar@@QEAA@P6AXXZ0@Z.c)
 */

int __fastcall dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__(
        AutoProviderRegistrar *a1,
        void (*a2)(void),
        void (*a3)(void))
{
  AutoProviderRegistrar::AutoProviderRegistrar(a1, a2, a3);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__);
}
