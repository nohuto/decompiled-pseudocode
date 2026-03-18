/*
 * XREFs of ??$_Emplace_back_internal@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@AEAAX$$QEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@1@@Z @ 0x1801F64F4
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800B7328 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1801F889C (-_Growmap@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Emplace_back_internal<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  SIZE_T size_of; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[2];
  if ( v5 <= v4 + 1 )
  {
    std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Growmap(a1);
    v5 = a1[2];
    v4 = a1[4];
  }
  a1[3] &= v5 - 1;
  v6 = v5 - 1;
  v7 = a1[1];
  v8 = v6 & (v4 + a1[3]);
  if ( !*(_QWORD *)(v7 + 8 * v8) )
  {
    size_of = std::_Get_size_of_n<40>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v7 = a1[1];
  }
  v10 = *(_QWORD **)(v7 + 8 * v8);
  *v10 = 0LL;
  v10[1] = 0LL;
  v10[2] = 0LL;
  *v10 = *a2;
  v10[1] = a2[1];
  v10[2] = a2[2];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v11 = a2[3];
  a2[3] = 0LL;
  v10[3] = v11;
  result = a2[4];
  a2[4] = 0LL;
  v10[4] = result;
  ++a1[4];
  return result;
}
