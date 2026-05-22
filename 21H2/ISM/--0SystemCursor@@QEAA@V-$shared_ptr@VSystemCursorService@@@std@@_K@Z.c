/*
 * XREFs of ??0SystemCursor@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@_K@Z @ 0x18013E640
 * Callers:
 *     ??$make_shared@VSystemCursor@@V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursor@@@0@$$QEAV?$shared_ptr@VSystemCursorService@@@0@AEA_K@Z @ 0x18013E360 (--$make_shared@VSystemCursor@@V-$shared_ptr@VSystemCursorService@@@std@@AEA_K@std@@YA-AV-$shared.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursor::SystemCursor(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  std::_Ref_count_base *v8; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = a2[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_WORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = a3;
  v6 = (_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *v6 = v7;
  *(_QWORD *)(a1 + 48) = 32512LL;
  *(_QWORD *)(a1 + 56) = 32512LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a1;
}
