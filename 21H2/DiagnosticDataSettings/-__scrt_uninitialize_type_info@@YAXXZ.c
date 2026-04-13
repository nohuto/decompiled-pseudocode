/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x10004337
 * Callers:
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 * Callees:
 *     ___std_type_info_destroy_list @ 0x10004B96 (___std_type_info_destroy_list.c)
 */

void __cdecl __scrt_uninitialize_type_info()
{
  __std_type_info_destroy_list(&__type_info_root_node);
}
