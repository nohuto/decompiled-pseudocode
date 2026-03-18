/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800BF070
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18003A1F4 (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v5 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  v6 = (v5 >> 63) + v5;
  if ( v6 < 0 && a4[2] < (unsigned __int64)-v6 || v6 > 0 && a4[1] - a4[2] < (unsigned __int64)v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v6);
    __debugbreak();
    JUMPOUT(0x1801467CDLL);
  }
  v7 = a2 + 8;
  v8 = *a4;
  v9 = *a4 + 24 * a4[2];
  while ( v7 - 8 != a3 )
  {
    *(_DWORD *)v9 = *(_DWORD *)(v7 - 8);
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(v7 - 4);
    *(_DWORD *)(v9 + 8) = *(_DWORD *)v7;
    *(_DWORD *)(v9 + 12) = *(_DWORD *)(v7 + 4);
    v10 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v10;
    v9 += 24LL;
    v7 += 24LL;
  }
  v11 = (__int64)((unsigned __int128)((v9 - v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  result = a1;
  a4[2] = (v11 >> 63) + v11;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
