/*
 * XREFs of _dynamic_initializer_for__Win32kInterop::s_inputInfoCachedLock__ @ 0x180001720
 * Callers:
 *     <none>
 * Callees:
 *     ??0mutex@std@@QEAA@XZ @ 0x18003AD9C (--0mutex@std@@QEAA@XZ.c)
 */

int dynamic_initializer_for__Win32kInterop::s_inputInfoCachedLock__()
{
  std::mutex::mutex((std::mutex *)&Win32kInterop::s_inputInfoCachedLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Win32kInterop::s_inputInfoCachedLock__);
}
