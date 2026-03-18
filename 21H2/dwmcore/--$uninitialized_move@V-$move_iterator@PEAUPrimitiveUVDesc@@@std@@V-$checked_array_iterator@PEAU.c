/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801E2E5C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E3B78 (-ensure_extra_capacity@-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // rcx
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a1;
  v5 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 2);
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v6 = a4[2] < 0xB13B13B13B13B13BuLL * ((a3 - a2) >> 2);
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v7 = *a4 + 52LL * a4[2];
  for ( i = a2 + 8; i - 8 != a3; i += 52LL )
  {
    *(_DWORD *)v7 = *(_DWORD *)(i - 8);
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(i - 4);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)i;
    *(_DWORD *)(v7 + 12) = *(_DWORD *)(i + 4);
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(i + 8);
    *(_DWORD *)(v7 + 20) = *(_DWORD *)(i + 12);
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(i + 16);
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(i + 20);
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(i + 24);
    *(_OWORD *)(v7 + 36) = *(_OWORD *)(i + 28);
    v7 += 52LL;
  }
  result = v4;
  a4[2] = 0x4EC4EC4EC4EC4EC5LL * ((v7 - *a4) >> 2);
  v10 = a4[2];
  *(_OWORD *)v4 = *(_OWORD *)a4;
  *(_QWORD *)(v4 + 16) = v10;
  return result;
}
