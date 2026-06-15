/*
 * XREFs of _dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__ @ 0x18007D800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__()
{
  return wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>(&g_SingletonAudioSessionManagerProvider);
}
