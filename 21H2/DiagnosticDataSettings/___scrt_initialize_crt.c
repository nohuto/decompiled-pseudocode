/*
 * XREFs of ___scrt_initialize_crt @ 0x100044A5
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 * Callees:
 *     ___isa_available_init @ 0x100049DD (___isa_available_init.c)
 *     ___scrt_stub_for_acrt_initialize @ 0x10004C47 (___scrt_stub_for_acrt_initialize.c)
 */

char __cdecl __scrt_initialize_crt(int a1)
{
  if ( !a1 )
    byte_100050C1 = 1;
  __isa_available_init();
  if ( !(unsigned __int8)__scrt_stub_for_acrt_initialize() )
    return 0;
  if ( !(unsigned __int8)__scrt_stub_for_acrt_initialize() )
  {
    __scrt_stub_for_acrt_initialize();
    return 0;
  }
  return 1;
}
