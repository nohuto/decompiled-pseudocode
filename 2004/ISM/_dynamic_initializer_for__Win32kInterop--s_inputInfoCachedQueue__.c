/*
 * XREFs of _dynamic_initializer_for__Win32kInterop::s_inputInfoCachedQueue__ @ 0x180001740
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$queue@UCachedInputInfo@@V?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x18003B1B4 (--0-$queue@UCachedInputInfo@@V-$deque@UCachedInputInfo@@V-$allocator@UCachedInputInfo@@@std@@@st.c)
 */

int dynamic_initializer_for__Win32kInterop::s_inputInfoCachedQueue__()
{
  std::queue<CachedInputInfo>::queue<CachedInputInfo,std::deque<CachedInputInfo>>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Win32kInterop::s_inputInfoCachedQueue__);
}
