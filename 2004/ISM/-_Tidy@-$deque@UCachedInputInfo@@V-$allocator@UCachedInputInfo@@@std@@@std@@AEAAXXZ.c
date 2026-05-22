/*
 * XREFs of ?_Tidy@?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@AEAAXXZ @ 0x1800B3984
 * Callers:
 *     ??1?$queue@UCachedInputInfo@@V?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x18003B504 (--1-$queue@UCachedInputInfo@@V-$deque@UCachedInputInfo@@V-$allocator@UCachedInputInfo@@@std@@@st.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void std::deque<CachedInputInfo>::_Tidy()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  const struct std::nothrow_t *v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx

  v0 = qword_180208BD0;
  while ( v0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1)
                   + 8 * ((qword_180208BC0 - 1) & (v0 + qword_180208BC8 - 1)));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v1 + 8));
    if ( *(_QWORD *)v1 )
      operator delete(*(void **)v1, v2);
    v0 = --qword_180208BD0;
    if ( !qword_180208BD0 )
      qword_180208BC8 = 0LL;
  }
  v3 = qword_180208BC0;
  if ( qword_180208BC0 )
  {
    do
    {
      --v3;
      v4 = *(void **)(*((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) + 8 * v3);
      if ( v4 )
        std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x10);
    }
    while ( v3 );
    v3 = qword_180208BC0;
  }
  if ( *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) )
    std::_Deallocate<16,0>(
      *((void **)&Win32kInterop::s_inputInfoCachedQueue + 1),
      (const struct std::nothrow_t *)(8 * v3));
  qword_180208BC0 = 0LL;
  *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) = 0LL;
}
