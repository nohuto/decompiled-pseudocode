/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x18012AFF0
 * Callers:
 *     ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAAEAUINPUT_SPACE_REGION@@AEAU2@@Z @ 0x18012C15C (--$emplace_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXQEAUINPUT_SPACE_REGION@@_K1@Z @ 0x180037440 (-_Change_array@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x1800374A8 (-_Calculate_growth@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@A.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x18003FB5C (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKU.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Emplace_reallocate<INPUT_SPACE_REGION &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  size_t v10; // rcx
  unsigned __int64 v11; // r10
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  _OWORD *v15; // rcx
  __int64 v16; // rcx
  _OWORD *v17; // rsi
  _BYTE *v18; // r8
  _BYTE *v19; // rdx
  void *v20; // rcx
  size_t v21; // r8
  __int64 result; // rax
  void *v23; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 200;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 200;
  if ( v7 == 0x147AE147AE147AELL )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<INPUT_SPACE_REGION>::_Calculate_growth(a1, v7 + 1);
  v10 = 200 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = (__int64)v12;
  v23 = v12;
  try
  {
    v14 = 25 * v6;
    v15 = &v12[v14];
    *v15 = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v15[3] = a3[3];
    v15[4] = a3[4];
    v15[5] = a3[5];
    v15[6] = a3[6];
    v16 = (__int64)&v12[v14 + 16];
    *(_OWORD *)(v16 - 16) = a3[7];
    v17 = a3 + 8;
    *(_OWORD *)v16 = *v17;
    *(_OWORD *)(v16 + 16) = v17[1];
    *(_OWORD *)(v16 + 32) = v17[2];
    *(_OWORD *)(v16 + 48) = v17[3];
    *(_QWORD *)(v16 + 64) = *((_QWORD *)v17 + 8);
    v18 = a1[1];
    v19 = *a1;
    v20 = v12;
    if ( a2 == v18 )
    {
      v21 = v18 - v19;
    }
    else
    {
      memmove_0(v12, v19, a2 - (_BYTE *)*a1);
      v20 = (void *)(v13 + v14 * 8 + 200);
      v21 = (_BYTE *)a1[1] - a2;
      v19 = a2;
    }
    memmove_0(v20, v19, v21);
    std::vector<INPUT_SPACE_REGION>::_Change_array((__int64)a1, v13, v8, v9);
    result = (__int64)*a1 + v14 * 8;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(200 * v9));
    throw;
  }
  return result;
}
