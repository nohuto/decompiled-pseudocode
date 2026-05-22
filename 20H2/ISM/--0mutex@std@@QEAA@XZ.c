/*
 * XREFs of ??0mutex@std@@QEAA@XZ @ 0x18003AE7C
 * Callers:
 *     _dynamic_initializer_for__Win32kInterop::s_inputInfoCachedLock__ @ 0x180001710 (_dynamic_initializer_for__Win32kInterop--s_inputInfoCachedLock__.c)
 * Callees:
 *     <none>
 */

std::mutex *__fastcall std::mutex::mutex(std::mutex *this)
{
  _Mtx_init_in_situ(this, 2);
  return this;
}
