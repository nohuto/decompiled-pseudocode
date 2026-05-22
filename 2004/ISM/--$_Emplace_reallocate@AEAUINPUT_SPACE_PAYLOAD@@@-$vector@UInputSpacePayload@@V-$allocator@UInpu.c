/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012A8FC
 * Callers:
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012BBDC (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@PEAU1@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012B8AC (--$_Uninitialized_move@PEAUInputSpacePayload@@PEAU1@V-$allocator@UInputSpacePayload@@@std@@@std@.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAAEAUINPUT_SPACE_REGION@@AEAU2@@Z @ 0x18012BC9C (--$emplace_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE.c)
 *     ?_Change_array@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQEAUInputSpacePayload@@_K1@Z @ 0x18012D358 (-_Change_array@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQE.c)
 *     ?_Reallocate_exactly@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_K@Z @ 0x18012D880 (-_Reallocate_exactly@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<InputSpacePayload>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  size_t v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // r13
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-58h]
  void *v21; // [rsp+30h] [rbp-48h]
  _QWORD *v22; // [rsp+80h] [rbp+8h]

  v4 = (a2 - *a1) / 40;
  v5 = (a1[1] - *a1) / 40;
  if ( v5 == 0x666666666666666LL )
    std::_Xlength_error("vector<T> too long");
  v6 = v5 + 1;
  v7 = (a1[2] - *a1) / 40;
  v8 = v7 >> 1;
  if ( v7 <= 0x666666666666666LL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 )
      v9 = v6;
  }
  else
  {
    v9 = v6;
  }
  v10 = 40 * v9;
  if ( v9 > 0x666666666666666LL )
    v10 = -1LL;
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v12 = v11;
  v21 = v11;
  v20 = 5 * v4;
  v13 = &v11[5 * v4];
  try
  {
    v14 = a3;
    *v13 = *(_QWORD *)a3;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a3 + 8);
    v15 = 0;
    v13[2] = 0LL;
    v13[3] = 0LL;
    v13[4] = 0LL;
    if ( !*(_DWORD *)(a3 + 12) )
      goto LABEL_13;
    std::vector<INPUT_SPACE_REGION>::_Reallocate_exactly(v13 + 2);
    while ( 1 )
    {
      v14 = a3;
LABEL_13:
      if ( v15 >= *(_DWORD *)(v14 + 12) )
        break;
      std::vector<INPUT_SPACE_REGION>::emplace_back<INPUT_SPACE_REGION &>(
        v13 + 2,
        *(_QWORD *)(v14 + 16) + 200LL * v15++);
    }
    v22 = v13;
    v16 = a1[1];
    v17 = v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<InputSpacePayload *,InputSpacePayload *,std::allocator<InputSpacePayload>>(v18, a2, v12);
      v22 = v12;
      v17 = v13 + 5;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<InputSpacePayload *,InputSpacePayload *,std::allocator<InputSpacePayload>>(v18, v16, v17);
    std::vector<InputSpacePayload>::_Change_array(a1, v12, v6, v9);
    result = *a1 + 8 * v20;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<InputSpacePayload>>(v22, v13 + 5);
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(40 * v9));
    throw;
  }
  return result;
}
