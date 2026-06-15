/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x18006B190
 * Callers:
 *     dllmain_crt_process_attach @ 0x18006A248 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}
