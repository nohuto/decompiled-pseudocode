/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140A1A060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A1A080 @ 0x140A1A080 (sub_140A1A080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140A1A080();
  __debugbreak();
}
