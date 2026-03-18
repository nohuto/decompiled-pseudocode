/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800C7EFC
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C858C (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  signed __int64 v5; // r10
  bool v6; // cf
  _QWORD *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)a3 - a2) >> 3);
  if ( v5 < 0 )
  {
    v6 = a4[2] < (unsigned __int64)(0x5555555555555555LL * (((__int64)a3 - a2) >> 3));
  }
  else
  {
    if ( v5 <= 0 )
      goto LABEL_5;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x180166DEDLL);
  }
LABEL_5:
  v7 = (_QWORD *)(a2 + 16);
  v8 = *a4;
  v9 = *a4 + 24 * a4[2];
  while ( v7 - 2 != a3 )
  {
    *(_DWORD *)v9 = *((_DWORD *)v7 - 4);
    *(_DWORD *)(v9 + 4) = *((_DWORD *)v7 - 3);
    *(_DWORD *)(v9 + 8) = *((_DWORD *)v7 - 2);
    v10 = *v7;
    *v7 = 0LL;
    *(_QWORD *)(v9 + 16) = v10;
    v9 += 24LL;
    v7 += 3;
  }
  result = a1;
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
