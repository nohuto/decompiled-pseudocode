/*
 * XREFs of ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x1801B2AD4
 * Callers:
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x180047470 (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009C330 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801B0228 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetDirtyRegionVisualizationData(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax

  v1 = *(_DWORD **)(a1 + 232);
  if ( (*v1 & 0x80000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 13 )
    {
      ++v6;
      ++v4;
      if ( v6 >= (unsigned int)v3 )
        goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  if ( v6 < (unsigned int)v3 )
LABEL_7:
    v5 = (__int64)v1 + 8LL * v6 - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(_QWORD *)v5;
}
