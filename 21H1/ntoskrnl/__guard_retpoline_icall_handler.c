/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140A14060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A14080 @ 0x140A14080 (sub_140A14080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140A14080();
  __debugbreak();
}
