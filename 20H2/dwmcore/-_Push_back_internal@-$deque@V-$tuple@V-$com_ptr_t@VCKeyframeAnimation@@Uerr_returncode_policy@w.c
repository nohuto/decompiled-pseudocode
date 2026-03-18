/*
 * XREFs of ?_Push_back_internal@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@AEAAX$$QEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@2@@Z @ 0x1801AE758
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801AC884 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1801AE5E4 (-_Growmap@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Push_back_internal(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = a1[1];
  v6 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(v5 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    v5 = a1[1];
  }
  v7 = *(_QWORD **)(v5 + 8 * v6);
  *v7 = 0LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  *v7 = *a2;
  v7[1] = a2[1];
  v7[2] = a2[2];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v8 = a2[3];
  a2[3] = 0LL;
  v7[3] = v8;
  result = a2[4];
  a2[4] = 0LL;
  v7[4] = result;
  ++a1[4];
  return result;
}
