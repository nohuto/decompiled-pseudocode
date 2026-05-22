/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x18003BCAC
 * Callers:
 *     dllmain_crt_process_detach @ 0x18003B824 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x18003C31C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x18003C3BA (_o__cexit_0.c)
 *     __scrt_stub_for_is_c_termination_complete @ 0x18003DC34 (__scrt_stub_for_is_c_termination_complete.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = _scrt_stub_for_is_c_termination_complete();
  if ( !result )
    return o__cexit_0();
  return result;
}
