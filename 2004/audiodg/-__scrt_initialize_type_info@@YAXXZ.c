/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x14001D4A0
 * Callers:
 *     pre_c_initialization @ 0x14001C9C0 (pre_c_initialization.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
