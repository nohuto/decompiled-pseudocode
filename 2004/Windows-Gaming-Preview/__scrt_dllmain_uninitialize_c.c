/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x1800444E8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180043EB4 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x1800450CC (-__uncaught_exception@@YA_NXZ.c)
 *     _o__cexit @ 0x180045306 (_o__cexit.c)
 *     sub_180045A74 @ 0x180045A74 (sub_180045A74.c)
 */

__int64 _scrt_dllmain_uninitialize_c()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table(&qword_18005AA50);
  result = sub_180045A74();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
