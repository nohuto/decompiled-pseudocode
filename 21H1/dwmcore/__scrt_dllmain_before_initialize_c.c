/*
 * XREFs of __scrt_dllmain_before_initialize_c @ 0x1800E145C
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800E1858 (dllmain_crt_process_attach.c)
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1800E15D0 (__scrt_initialize_onexit_tables.c)
 */

bool _scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)_scrt_initialize_onexit_tables(0LL) != 0;
}
