/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x18011E2DC
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18011E918 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_180010A90 @ 0x180010A90 (sub_180010A90.c)
 *     _o__cexit @ 0x18011DFFF (_o__cexit.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18011F25C (-__uncaught_exception@@YA_NXZ.c)
 */

__int64 _scrt_dllmain_uninitialize_c()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table();
  result = sub_180010A90();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
