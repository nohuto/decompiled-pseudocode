/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180019BE4
 * Callers:
 *     ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x180019A90 (--_GAudioStateMonitorManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180019AE8 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>(
        __int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx
  __int64 v6; // rcx
  void **v7; // rsi
  void **v8; // rbx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        __debugbreak();
        JUMPOUT(0x180019C9ELL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 8);
  **(_QWORD **)(v6 + 8) = 0LL;
  v7 = *(void ***)v6;
  if ( *(_QWORD *)v6 )
  {
    do
    {
      v8 = (void **)*v7;
      wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(v7 + 3);
      operator delete(v7, (const struct std::nothrow_t *)0x20);
      v7 = v8;
    }
    while ( v8 );
  }
  operator delete(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
