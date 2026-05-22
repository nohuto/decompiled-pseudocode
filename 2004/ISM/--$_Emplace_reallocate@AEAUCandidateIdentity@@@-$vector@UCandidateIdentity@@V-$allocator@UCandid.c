/*
 * XREFs of ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801780D8
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x180179030 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006DBD8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAUCandidateIdentity@@PEAU1@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x180178488 (--$_Uninitialized_move@PEAUCandidateIdentity@@PEAU1@V-$allocator@UCandidateIdentity@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x180179960 (-_Change_array@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQE.c)
 */

__int64 __fastcall std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t v11; // rcx
  CandidateIdentity *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdx
  CandidateIdentity *v15; // r8
  __int64 v16; // rcx
  CandidateIdentity *v18; // [rsp+20h] [rbp-48h]
  CandidateIdentity *v19; // [rsp+70h] [rbp+8h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v5 = (a2 - *a1) / 40;
  v6 = (a1[1] - *a1) / 40;
  if ( v6 == 0x666666666666666LL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 40;
  v9 = v8 >> 1;
  if ( v8 <= 0x666666666666666LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 40 * v10;
  if ( v10 > 0x666666666666666LL )
    v11 = -1LL;
  v12 = (CandidateIdentity *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v21 = 5 * v5;
  v13 = (__int64)v12 + 40 * v5;
  v18 = (CandidateIdentity *)(v13 + 40);
  try
  {
    std::wstring::wstring(v13, a3);
    *(_DWORD *)(v13 + 32) = *(_DWORD *)(a3 + 32);
    v19 = (CandidateIdentity *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<CandidateIdentity *,CandidateIdentity *,std::allocator<CandidateIdentity>>(v16, a2, v12);
      v19 = v12;
      v15 = (CandidateIdentity *)(v13 + 40);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<CandidateIdentity *,CandidateIdentity *,std::allocator<CandidateIdentity>>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>(v19, v18);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(40 * v10));
    throw;
  }
  std::vector<CandidateIdentity>::_Change_array(a1, v12, v7, v10, v18, v12);
  return *a1 + 8 * v21;
}
