/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x18006AA1C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x180069D2C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180069D6C (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180069E10 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180069E78 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180069F1C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x18006A074 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_18019D220 != 0;
}
