/*
 * XREFs of ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x180089BA4
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18008AFA0 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     ??$_Uninitialized_move@PEAULegacyInputInfo@@PEAU1@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@QEAU1@0PEAU1@AEAV?$allocator@ULegacyInputInfo@@@0@@Z @ 0x18008A014 (--$_Uninitialized_move@PEAULegacyInputInfo@@PEAU1@V-$allocator@ULegacyInputInfo@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULegacyInputInfo@@_K1@Z @ 0x18008B32C (-_Change_array@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULe.c)
 */

__int64 __fastcall std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>(
        void **a1,
        _BYTE *a2,
        const void *a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r15
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  _QWORD *v18; // [rsp+68h] [rbp+10h]

  v5 = (a2 - (_BYTE *)*a1) / 2032;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 2032;
  if ( v6 == 0x20408102040810LL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 2032;
  v9 = v8 >> 1;
  if ( v8 <= 0x20408102040810LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 2032 * v10;
  if ( v10 > 0x20408102040810LL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = v12;
  v18 = v12;
  try
  {
    v14 = 254 * v5;
    memcpy_0(&v12[v14], a3, 0x7F0uLL);
    v15 = *a1;
    if ( a2 != a1[1] )
    {
      std::_Uninitialized_move<LegacyInputInfo *,LegacyInputInfo *,std::allocator<LegacyInputInfo>>(v15);
      v15 = a2;
    }
    std::_Uninitialized_move<LegacyInputInfo *,LegacyInputInfo *,std::allocator<LegacyInputInfo>>(v15);
    std::vector<LegacyInputInfo>::_Change_array(a1, v13, v7, v10);
    result = (__int64)*a1 + v14 * 8;
  }
  catch ( ... )
  {
    std::allocator<LegacyInputInfo>::deallocate(v16, v18, v10);
    throw;
  }
  return result;
}
