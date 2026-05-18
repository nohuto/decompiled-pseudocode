/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x180124B2C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x180123A84 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180123AC0 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180123B4C (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180123BAC (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180123C3C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x180123D84 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_180214F40 != 0;
}
