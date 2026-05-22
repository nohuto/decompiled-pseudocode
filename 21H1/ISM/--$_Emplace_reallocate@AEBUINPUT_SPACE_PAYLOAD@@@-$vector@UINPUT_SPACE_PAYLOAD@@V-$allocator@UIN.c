/*
 * XREFs of ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x180035BA4
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180035A5C (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180035DDC (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD const &>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  size_t size_of; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  void *v15; // rcx
  size_t v16; // r8

  v6 = (__int64)&a2[-*(_QWORD *)a1] / 24;
  v7 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 24LL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<24>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[3 * v6];
  *(_OWORD *)v12 = *(_OWORD *)a3;
  v12[2] = *(_QWORD *)(a3 + 16);
  v13 = *(_BYTE **)(a1 + 8);
  v14 = *(_BYTE **)a1;
  v15 = v11;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove_0(v11, v14, (size_t)&a2[-*(_QWORD *)a1]);
    v15 = v12 + 3;
    v16 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v14 = a2;
  }
  memmove_0(v15, v14, v16);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)(24 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL)));
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = &v11[3 * v8];
  *(_QWORD *)(a1 + 16) = &v11[3 * v9];
  return v12;
}
