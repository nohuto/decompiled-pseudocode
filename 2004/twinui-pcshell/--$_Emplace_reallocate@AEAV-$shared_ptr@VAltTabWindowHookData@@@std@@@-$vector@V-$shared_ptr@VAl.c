/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@VAltTabWindowHookData@@@std@@@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VAltTabWindowHookData@@@1@QEAV21@AEAV21@@Z @ 0x18031EF90
 * Callers:
 *     ??0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z @ 0x18031F324 (--0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x18021F030 (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@PEAV12@V-$allocator@V-$sha.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VAltTabWindowHookData@@@2@_K1@Z @ 0x1803215E4 (-_Change_array@-$vector@V-$shared_ptr@VAltTabWindowHookData@@@std@@V-$allocator@V-$shared_ptr@VA.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<AltTabWindowHookData>>::_Emplace_reallocate<std::shared_ptr<AltTabWindowHookData> &>(
        __int64 a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  size_t v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  char *v18; // rdx
  _QWORD *v19; // r8
  char *v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  _QWORD *v23; // [rsp+20h] [rbp-48h]
  void *v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+70h] [rbp+8h]

  v5 = (unsigned __int64)&a2[-AltTabWindowHook::s_altTabHooks];
  v6 = (__int64)(*((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1) - AltTabWindowHook::s_altTabHooks) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (qword_1805CD938 - (__int64)AltTabWindowHook::s_altTabHooks) >> 4;
  v9 = v8 >> 1;
  if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  else
  {
    v10 = v6 + 1;
  }
  v11 = 16 * v10;
  if ( v10 > 0xFFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = v12;
  v23 = v12;
  v14 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (_QWORD *)((char *)v12 + v14);
  v16 = (__int64)v12 + v14 + 16;
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v17 = a3[1];
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    *v15 = *a3;
    v15[1] = a3[1];
    v25 = (__int64)v15;
    v18 = (char *)*((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1);
    v19 = v13;
    v20 = (char *)AltTabWindowHook::s_altTabHooks;
    if ( a2 != *((char **)&AltTabWindowHook::s_altTabHooks + 1) )
    {
      std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        (char *)AltTabWindowHook::s_altTabHooks,
        a2,
        v13);
      v25 = (__int64)v13;
      v19 = (_QWORD *)v16;
      v18 = (char *)*((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1);
      v20 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
      v20,
      v18,
      v19);
    std::vector<std::shared_ptr<AltTabWindowHookData>>::_Change_array(v21, v13, v7, v10, v23);
    result = v14 + AltTabWindowHook::s_altTabHooks;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(v25, v16);
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(16 * v10));
    throw;
  }
  return result;
}
