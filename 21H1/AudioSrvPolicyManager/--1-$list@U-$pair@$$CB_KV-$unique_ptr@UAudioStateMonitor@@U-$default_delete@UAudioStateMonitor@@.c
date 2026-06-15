/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAA@XZ @ 0x18001F4DC
 * Callers:
 *     _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$4 @ 0x180041A33 (_AudioStateMonitorManager--AudioStateMonitorManager_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x18001F448 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::~list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>(
        void **a1)
{
  void **v1; // rdx
  void **v3; // rdi
  void **v4; // rbx

  v1 = (void **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = (void **)*v1;
  if ( *v1 )
  {
    do
    {
      v4 = (void **)*v3;
      wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(v3 + 3);
      operator delete(v3, (const struct std::nothrow_t *)0x20);
      v3 = v4;
    }
    while ( v4 );
  }
  operator delete(*a1, (const struct std::nothrow_t *)0x20);
}
