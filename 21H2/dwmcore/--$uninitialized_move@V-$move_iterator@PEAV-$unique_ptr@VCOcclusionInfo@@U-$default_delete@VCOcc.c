/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1800C8DEC
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C8C7C (-ensure_extra_capacity@-$buffer_impl@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = a3 - a2;
  if ( v5 < 0 )
  {
    v6 = a4[2] < (unsigned __int64)-v5;
  }
  else
  {
    if ( v5 <= 0 )
      goto LABEL_5;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x1801673D1LL);
  }
LABEL_5:
  v7 = *a4;
  v8 = (_QWORD *)(*a4 + 8 * a4[2]);
  while ( a2 != a3 )
  {
    v9 = *a2;
    *a2 = 0LL;
    *v8++ = v9;
    ++a2;
  }
  result = a1;
  a4[2] = ((__int64)v8 - v7) >> 3;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
