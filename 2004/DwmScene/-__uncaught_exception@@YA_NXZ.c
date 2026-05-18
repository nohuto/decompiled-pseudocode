/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x18011F25C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x18011E1B4 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18011E1F0 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x18011E27C (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18011E2DC (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x18011E36C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x18011E4B4 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_18020DED0 != 0;
}
