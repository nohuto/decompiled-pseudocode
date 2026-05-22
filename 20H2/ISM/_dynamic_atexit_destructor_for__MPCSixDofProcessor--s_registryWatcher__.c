/*
 * XREFs of _dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x1800519E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$invoke@P6AXPEAUregistry_watcher_state@details@wil@@@ZAEAPEAU123@@wistd@@YAX$$QEAP6AXPEAUregistry_watcher_state@details@wil@@@ZAEAPEAU123@@Z @ 0x18003B64C (--$invoke@P6AXPEAUregistry_watcher_state@details@wil@@@ZAEAPEAU123@@wistd@@YAX$$QEAP6AXPEAUregis.c)
 */

__int64 dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v2)(wil::details *__hidden, struct wil::details::registry_watcher_state *); // [rsp+38h] [rbp+10h] BYREF

  result = MPCSixDofProcessor::s_registryWatcher;
  if ( MPCSixDofProcessor::s_registryWatcher )
  {
    v1 = MPCSixDofProcessor::s_registryWatcher;
    v2 = wil::details::delete_registry_watcher_state;
    return wistd::invoke<void (*)(wil::details::registry_watcher_state *),wil::details::registry_watcher_state * &>(
             (__int64 (__fastcall **)(_QWORD))&v2,
             &v1);
  }
  return result;
}
