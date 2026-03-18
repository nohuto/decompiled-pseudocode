/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18019C29C
 * Callers:
 *     ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1800E8C54 (-reserve_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r11
  signed __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a1;
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 3);
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v6 = a4[2] < (unsigned __int64)(0x3333333333333333LL * ((a3 - a2) >> 3));
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v7 = *a4;
  v8 = *a4 + 40 * a4[2];
  while ( a2 != a3 )
  {
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a2 + 32);
    v8 += 40LL;
    a2 += 40LL;
  }
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((v8 - v7) >> 3);
  result = v4;
  v10 = a4[2];
  *(_OWORD *)v4 = *(_OWORD *)a4;
  *(_QWORD *)(v4 + 16) = v10;
  return result;
}
