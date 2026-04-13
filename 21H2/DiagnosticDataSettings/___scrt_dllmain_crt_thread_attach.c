/*
 * XREFs of ___scrt_dllmain_crt_thread_attach @ 0x10004413
 * Callers:
 *     dllmain_crt_dispatch @ 0x10003F30 (dllmain_crt_dispatch.c)
 * Callees:
 *     ___scrt_stub_for_acrt_initialize @ 0x10004C47 (___scrt_stub_for_acrt_initialize.c)
 */

char __scrt_dllmain_crt_thread_attach()
{
  if ( !(unsigned __int8)__scrt_stub_for_acrt_initialize() )
    return 0;
  if ( !(unsigned __int8)__scrt_stub_for_acrt_initialize() )
  {
    __scrt_stub_for_acrt_initialize();
    return 0;
  }
  return 1;
}
