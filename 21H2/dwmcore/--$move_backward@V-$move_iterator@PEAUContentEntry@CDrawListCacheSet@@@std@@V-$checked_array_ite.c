/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801E6EB4
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800C8450 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v7; // rdx
  bool v8; // cf
  _QWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  __int64 result; // rax
  __int64 v16; // xmm1_8

  v7 = 0x5555555555555555LL * ((a3 - (__int64)a2) >> 3);
  if ( v7 >= 0 )
  {
    if ( v7 <= 0 )
      goto LABEL_7;
    v8 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  else
  {
    v8 = a4[2] < (unsigned __int64)-v7;
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v9 = (_QWORD *)(a3 + 16);
  v10 = *a4;
  v11 = *a4 + 24 * a4[2];
  while ( a2 != v9 - 2 )
  {
    v12 = *((_DWORD *)v9 - 10);
    v9 -= 3;
    v11 -= 24LL;
    *(_DWORD *)v11 = v12;
    *(_DWORD *)(v11 + 4) = *((_DWORD *)v9 - 3);
    *(_DWORD *)(v11 + 8) = *((_DWORD *)v9 - 2);
    v13 = *v9;
    *v9 = 0LL;
    v14 = *(volatile signed __int32 **)(v11 + 16);
    *(_QWORD *)(v11 + 16) = v13;
    if ( v14 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v14);
  }
  result = a1;
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * ((v11 - v10) >> 3);
  v16 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v16;
  return result;
}
