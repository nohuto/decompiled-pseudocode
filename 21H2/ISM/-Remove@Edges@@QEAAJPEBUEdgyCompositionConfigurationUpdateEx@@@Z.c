/*
 * XREFs of ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180179B7C
 * Callers:
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180177AD0 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B7B4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003641C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x180178FDC (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x18017966C (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180179F50 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  int Edge; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _BYTE v8[8]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-30h] BYREF

  Edge = Edges::FindEdge(this, (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
    return 2147942487LL;
  v4 = (__int64)Edge << 7;
  if ( Edge::IsClientPresent(v4 + *(_QWORD *)this, 1) )
  {
    *(_DWORD *)(v5 + 64) = 0;
  }
  else
  {
    v6 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v5 + 32) >= 8uLL )
      v6 = (_QWORD *)*v6;
    std::wstring::wstring(v9, (__int64)v6);
    std::vector<Edge>::erase(this, v8, v4 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate((__int64)v9);
  }
  return 0LL;
}
