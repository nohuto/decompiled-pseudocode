/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@0@Z @ 0x180321D1C
 * Callers:
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x18031FA60 (--1AltTabWindowHook@@QEAA@XZ.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802169EC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18021E1C8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<AltTabWindowHookData>>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  __int64 *v5; // rsi
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  v4 = *((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1);
  v5 = a4;
  v8 = a3;
  if ( a4 != *((__int64 **)&AltTabWindowHook::s_altTabHooks + 1) )
  {
    do
    {
      std::shared_ptr<KBViewInfo>::operator=(v8, v5);
      v8 += 2;
      v5 += 2;
    }
    while ( v5 != (__int64 *)v4 );
    v4 = *((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1);
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>((__int64)v8, v4);
  result = a2;
  *((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1) = v8;
  *a2 = a3;
  return result;
}
