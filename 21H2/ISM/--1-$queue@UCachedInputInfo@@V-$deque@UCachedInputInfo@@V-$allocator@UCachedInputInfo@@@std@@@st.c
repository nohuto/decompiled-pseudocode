/*
 * XREFs of ??1?$queue@UCachedInputInfo@@V?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x18003B244
 * Callers:
 *     _dynamic_atexit_destructor_for__Win32kInterop::s_inputInfoCachedQueue__ @ 0x1800524F0 (_dynamic_atexit_destructor_for__Win32kInterop--s_inputInfoCachedQueue__.c)
 * Callees:
 *     ?_Tidy@?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@AEAAXXZ @ 0x1800B3D44 (-_Tidy@-$deque@UCachedInputInfo@@V-$allocator@UCachedInputInfo@@@std@@@std@@AEAAXXZ.c)
 */

void std::queue<CachedInputInfo>::~queue<CachedInputInfo,std::deque<CachedInputInfo>>()
{
  void *v0; // rcx

  std::deque<CachedInputInfo>::_Tidy();
  v0 = (void *)Win32kInterop::s_inputInfoCachedQueue;
  *(_QWORD *)&Win32kInterop::s_inputInfoCachedQueue = 0LL;
  std::_Deallocate<16,0>(v0, (const struct std::nothrow_t *)0x10);
}
