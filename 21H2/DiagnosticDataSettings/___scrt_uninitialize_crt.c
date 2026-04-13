/*
 * XREFs of ___scrt_uninitialize_crt @ 0x10004631
 * Callers:
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 * Callees:
 *     ___scrt_stub_for_acrt_initialize @ 0x10004C47 (___scrt_stub_for_acrt_initialize.c)
 */

char __cdecl __scrt_uninitialize_crt(int a1, char a2)
{
  if ( !byte_100050C1 || !a2 )
  {
    __scrt_stub_for_acrt_initialize();
    __scrt_stub_for_acrt_initialize();
  }
  return 1;
}
