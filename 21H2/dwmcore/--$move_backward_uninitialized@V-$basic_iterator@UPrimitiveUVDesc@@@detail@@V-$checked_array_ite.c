/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UPrimitiveUVDesc@@@detail@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@detail@@YAXV?$basic_iterator@UPrimitiveUVDesc@@@0@0V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@Z @ 0x1801E2D9C
 * Callers:
 *     ?reserve_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveUVDesc@@_K0@Z @ 0x1801E40E8 (-reserve_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vlibera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<PrimitiveUVDesc>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rax

  result = *a2;
  v4 = (_QWORD *)a1;
  if ( *a2 != *(_QWORD *)a1 )
  {
    v5 = *a3;
    do
    {
      v6 = result - 52;
      *a2 = result - 52;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1);
        __debugbreak();
        JUMPOUT(0x1801E2E56LL);
      }
      a1 = 52 * v8;
      *(_DWORD *)(a1 + v5) = *(_DWORD *)v6;
      *(_DWORD *)(a1 + v5 + 4) = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(a1 + v5 + 8) = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(a1 + v5 + 12) = *(_DWORD *)(v6 + 12);
      *(_DWORD *)(a1 + v5 + 16) = *(_DWORD *)(v6 + 16);
      *(_DWORD *)(a1 + v5 + 20) = *(_DWORD *)(v6 + 20);
      *(_DWORD *)(a1 + v5 + 24) = *(_DWORD *)(v6 + 24);
      *(_DWORD *)(a1 + v5 + 28) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(a1 + v5 + 32) = *(_DWORD *)(v6 + 32);
      *(_OWORD *)(a1 + v5 + 36) = *(_OWORD *)(v6 + 36);
      result = *a2;
    }
    while ( *a2 != *v4 );
  }
  return result;
}
