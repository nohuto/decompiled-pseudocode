/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x1800E39F4
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x1800E2B90 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x1800E2BD0 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x1800E2C74 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800E2CDC (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x1800E2D80 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x1800E2ED8 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
