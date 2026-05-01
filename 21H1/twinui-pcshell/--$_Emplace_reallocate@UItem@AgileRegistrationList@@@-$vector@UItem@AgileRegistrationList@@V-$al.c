/*
 * XREFs of ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x180120F8C
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18012AE3C (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x18012154C (--$_Uninitialized_move@PEAUItem@AgileRegistrationList@@PEAU12@V-$allocator@UItem@AgileRegistrati.c)
 *     ?_Change_array@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAXQEAUItem@AgileRegistrationList@@_K1@Z @ 0x1801305F4 (-_Change_array@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@.c)
 */

unsigned __int64 __fastcall std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // r14
  unsigned __int64 v14; // rsi
  char *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 result; // rax
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (char *)v13 + v14;
  try
  {
    *(_DWORD *)v15 = *(_DWORD *)a3;
    v16 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = 0LL;
    *((_QWORD *)v15 + 1) = v16;
    v22 = (__int64)v13 + v14;
    v17 = a1[1];
    v18 = (__int64)v13;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
        v19,
        a2,
        v13);
      v22 = (__int64)v13;
      v18 = (__int64)v13 + v14 + 16;
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
      v19,
      v17,
      v18);
    std::vector<AgileRegistrationList::Item>::_Change_array(a1, v13, v8, v11, v13);
    result = v14 + *a1;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v22, (__int64)v13 + v14 + 16);
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
