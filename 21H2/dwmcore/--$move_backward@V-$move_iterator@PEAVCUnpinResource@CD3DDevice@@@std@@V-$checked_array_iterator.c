/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18027FECC
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x180008908 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     ??4CUnpinResource@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z @ 0x180008DE0 (--4CUnpinResource@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  bool v9; // cf
  __int64 *v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v6 = ((char *)a3 - (char *)a2) >> 5;
  v7 = a3;
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      goto LABEL_7;
    v9 = a4[1] - a4[2] < (unsigned __int64)-v6;
  }
  else
  {
    v9 = a4[2] < (unsigned __int64)v6;
  }
  if ( v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v10 = (__int64 *)(*a4 + 32LL * a4[2]);
  while ( a2 != v7 )
  {
    v10 -= 4;
    v7 -= 4;
    CD3DDevice::CUnpinResource::operator=(v10, v7);
  }
  result = a1;
  a4[2] = ((__int64)v10 - *a4) >> 5;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
