/*
 * XREFs of ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C8ED0
 * Callers:
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18004A8EC (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AgeOutOcclusionInfos@CTreeData@@IEAAXXZ @ 0x1800B8C4C (-AgeOutOcclusionInfos@CTreeData@@IEAAXXZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1800C8AEC (--$move@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@s.c)
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x1800C8FB8 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 result; // rax
  __int64 v10; // rsi
  _QWORD *i; // rbx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  result = v7 >> 3;
  if ( a2 + a3 > result )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_17;
  }
  v3 = v4 + 8 * result;
  if ( a2 + a3 != result )
  {
    *(_QWORD *)&v12 = v4;
    *((_QWORD *)&v12 + 1) = result;
    if ( !a2 )
    {
LABEL_13:
      v13 = a2;
      v14 = v12;
      v15 = a2;
      result = std::move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>(
                 (__int64)&v12,
                 v4 + 8 * v8,
                 v3,
                 (__int64 *)&v14);
      goto LABEL_3;
    }
    if ( !v4 )
    {
LABEL_14:
      _o__invalid_parameter_noinfo_noreturn(v8);
      __debugbreak();
      JUMPOUT(0x1800C8FB1LL);
    }
    if ( a2 >= 0 )
    {
      if ( result >= a2 )
        goto LABEL_13;
      goto LABEL_14;
    }
LABEL_17:
    if ( !a2 )
      goto LABEL_13;
    goto LABEL_14;
  }
LABEL_3:
  v10 = 8 * a3;
  for ( i = (_QWORD *)(v3 - v10); i != (_QWORD *)v3; ++i )
  {
    if ( *i )
      result = std::default_delete<COcclusionInfo>::operator()();
  }
  a1[1] -= v10;
  return result;
}
