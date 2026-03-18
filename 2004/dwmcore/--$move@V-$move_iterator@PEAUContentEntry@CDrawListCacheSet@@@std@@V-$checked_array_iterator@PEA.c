/*
 * XREFs of ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800C5590
 * Callers:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180057C0C (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 * Callees:
 *     ??4ContentEntry@CDrawListCacheSet@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C5678 (--4ContentEntry@CDrawListCacheSet@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v4 = a2;
  v8 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  v9 = (v8 >> 63) + v8;
  if ( v9 < 0 && a4[2] < (unsigned __int64)-v9 || v9 > 0 && a4[1] - a4[2] < (unsigned __int64)v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v9);
    __debugbreak();
    JUMPOUT(0x180145AE1LL);
  }
  v10 = *a4;
  v11 = *a4 + 24 * a4[2];
  while ( v4 != a3 )
  {
    CDrawListCacheSet::ContentEntry::operator=(v11, v4);
    v11 += 24LL;
    v4 += 24LL;
  }
  result = a1;
  a4[2] = (v11 - v10) / 24;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
