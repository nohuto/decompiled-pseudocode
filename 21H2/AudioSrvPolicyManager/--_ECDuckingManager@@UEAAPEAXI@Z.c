/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180008E98 (--1-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRende.c)
 *     ??1?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ @ 0x180009064 (--1-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v5; // rbx
  struct _TP_POOL *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 60);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 58);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (struct _TP_POOL *)*((_QWORD *)this + 35);
  if ( v6 )
  {
    CloseThreadpool(v6);
    *((_QWORD *)this + 35) = 0LL;
  }
  _Mtx_destroy_in_situ((CDuckingManager *)((char *)this + 368));
  std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::~_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>((char *)this + 216);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  CLockedList<CDuckingNotification,1,0>::~CLockedList<CDuckingNotification,1,0>((LPCRITICAL_SECTION)((char *)this + 72));
  v7 = (_QWORD *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      operator delete(v7, (const struct std::nothrow_t *)0x10);
      v7 = v8;
    }
    while ( v8 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
