/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@std@@V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@V?$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@0@0V12@@Z @ 0x1800C7084
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C6F7C (-ensure_extra_capacity@-$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CCustomKernelEffect::ConstantBufferRow *>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  _OWORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // xmm1_8
  bool v8; // cf

  v4 = a3 - a2;
  if ( v4 < 0 )
  {
    v8 = a4[2] < (unsigned __int64)-v4;
  }
  else
  {
    if ( v4 <= 0 )
      goto LABEL_3;
    v8 = a4[1] - a4[2] < (unsigned __int64)v4;
  }
  if ( v8 )
  {
    v5 = (_OWORD *)_o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    goto LABEL_10;
  }
LABEL_3:
  v5 = (_OWORD *)(*a4 + 16LL * a4[2]);
  while ( a2 != a3 )
LABEL_10:
    *v5++ = *a2++;
  a4[2] = ((__int64)v5 - *a4) >> 4;
  result = a1;
  v7 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v7;
  return result;
}
