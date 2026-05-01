/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x1800450CC
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x18004439C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x1800443DC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180044480 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800444E8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x18004458C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x1800446E4 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_18005A420 != 0;
}
