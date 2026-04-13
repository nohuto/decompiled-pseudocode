/*
 * XREFs of ___scrt_get_dyn_tls_init_callback @ 0x1000465B
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void *__scrt_get_dyn_tls_init_callback()
{
  return &__dyn_tls_init_callback;
}
