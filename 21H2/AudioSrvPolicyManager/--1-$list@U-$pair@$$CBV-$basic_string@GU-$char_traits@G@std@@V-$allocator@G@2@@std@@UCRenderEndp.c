/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA@XZ @ 0x180008FFC
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$13 @ 0x18003B245 (_CDuckingManager--CDuckingManager_--_1_--dtor$13.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180009CF0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>::~list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::wstring::~wstring(v3 + 2);
      operator delete(v3, (const struct std::nothrow_t *)0x38);
      v3 = v4;
    }
    while ( v4 );
  }
  operator delete(*a1, (const struct std::nothrow_t *)0x38);
}
