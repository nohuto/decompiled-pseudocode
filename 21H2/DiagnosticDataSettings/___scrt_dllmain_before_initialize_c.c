/*
 * XREFs of ___scrt_dllmain_before_initialize_c @ 0x10004405
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 * Callees:
 *     ___scrt_initialize_onexit_tables @ 0x100044E0 (___scrt_initialize_onexit_tables.c)
 */

bool __scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)__scrt_initialize_onexit_tables(0) != 0;
}
