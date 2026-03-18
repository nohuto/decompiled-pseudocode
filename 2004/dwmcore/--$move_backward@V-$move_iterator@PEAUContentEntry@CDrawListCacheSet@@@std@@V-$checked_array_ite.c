/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x180266B44
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18005750C (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ??4ContentEntry@CDrawListCacheSet@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C5678 (--4ContentEntry@CDrawListCacheSet@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v6 = a3;
  v8 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)(__int64)0xD555555555555555uLL) >> 64) >> 2;
  v9 = (v8 >> 63) + v8;
  if ( v9 < 0 && a4[2] < (unsigned __int64)-v9 || v9 > 0 && a4[1] - a4[2] < (unsigned __int64)v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v9);
    __debugbreak();
  }
  v10 = *a4;
  v11 = *a4 + 24 * a4[2];
  while ( a2 != v6 )
  {
    v11 -= 24LL;
    v6 -= 24LL;
    CDrawListCacheSet::ContentEntry::operator=(v11, v6);
  }
  result = a1;
  a4[2] = (v11 - v10) / 24;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
