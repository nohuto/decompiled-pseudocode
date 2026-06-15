/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x14001D850
 * Callers:
 *     __scrt_common_main_seh @ 0x14001CE18 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}
