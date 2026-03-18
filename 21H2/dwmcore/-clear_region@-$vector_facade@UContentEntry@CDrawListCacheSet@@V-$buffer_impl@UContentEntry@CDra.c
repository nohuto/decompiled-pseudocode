/*
 * XREFs of ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C8050
 * Callers:
 *     ?erase@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@2@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@2@@Z @ 0x1800C7FBC (-erase@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C8020 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 * Callees:
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800C854C (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800C86BC (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rbx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 3);
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_12;
  }
  v3 = v4 + 24 * v9;
  if ( a2 + a3 != v9 )
  {
    *(_QWORD *)&v12 = v4;
    *((_QWORD *)&v12 + 1) = v9;
    if ( !a2 )
    {
LABEL_8:
      v13 = a2;
      v14 = v12;
      v15 = a2;
      std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        &v12,
        v4 + 24 * v7,
        v3,
        &v14);
      goto LABEL_3;
    }
    if ( !v4 )
    {
LABEL_9:
      _o__invalid_parameter_noinfo_noreturn(v7);
      __debugbreak();
      JUMPOUT(0x1800C812ELL);
    }
    if ( a2 >= 0 )
    {
      if ( v9 >= a2 )
        goto LABEL_8;
      goto LABEL_9;
    }
LABEL_12:
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_9;
  }
LABEL_3:
  v10 = 24 * a3;
  result = detail::destruct_range<CDrawListCacheSet::ContentEntry>(v3 - v10, v3);
  a1[1] -= v10;
  return result;
}
