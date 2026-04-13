/*
 * XREFs of ___scrt_dllmain_uninitialize_c @ 0x10004475
 * Callers:
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 * Callees:
 *     ___scrt_is_ucrt_dll_in_use @ 0x10004B7E (___scrt_is_ucrt_dll_in_use.c)
 *     __o__execute_onexit_table @ 0x10004BAE (__o__execute_onexit_table.c)
 *     __is_c_termination_complete @ 0x10004C4A (__is_c_termination_complete.c)
 */

void __scrt_dllmain_uninitialize_c()
{
  if ( __scrt_is_ucrt_dll_in_use() )
  {
    _o__execute_onexit_table(&Table);
  }
  else if ( !_is_c_termination_complete() )
  {
    _cexit();
  }
}
