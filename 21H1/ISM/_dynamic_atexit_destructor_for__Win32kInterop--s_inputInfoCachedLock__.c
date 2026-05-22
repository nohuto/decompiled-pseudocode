/*
 * XREFs of _dynamic_atexit_destructor_for__Win32kInterop::s_inputInfoCachedLock__ @ 0x180051EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__Win32kInterop::s_inputInfoCachedLock__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
}
