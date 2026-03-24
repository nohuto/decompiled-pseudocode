/*
 * XREFs of ??A?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@1@_K@Z @ 0x1801747F0
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18017531C (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
        __int64 a1,
        __int64 a2)
{
  __int64 *****v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 ***v5; // rcx
  __int64 ****v6; // r8
  __int64 v7; // rdx
  __int64 **v8; // rcx
  __int64 *v9; // rcx

  v2 = *(__int64 ******)a1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  if ( v2 )
  {
    v6 = *v2;
    if ( v6 )
      v5 = *v6;
  }
  v7 = v4 + a2;
  if ( v5 )
  {
    v8 = *v5;
    if ( v8 )
    {
      v9 = *v8;
      if ( v9 )
        v3 = *v9;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * (v7 & (*(_QWORD *)(v3 + 16) - 1LL)));
}
