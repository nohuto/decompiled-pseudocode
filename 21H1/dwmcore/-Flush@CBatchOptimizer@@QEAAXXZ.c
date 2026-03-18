/*
 * XREFs of ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18006AA38
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18004FF00 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18005A300 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18006A9C8 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 * Callees:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180014E60 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18006AB44 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18006D3C0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 */

void __fastcall CBatchOptimizer::Flush(CBatchOptimizer *this)
{
  int v1; // edi
  int v3; // r8d
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rbx
  _DWORD *v8; // rdx
  __int64 v9; // r9
  int v10; // r10d
  __int64 v11; // rcx

  v1 = 0;
  while ( *((_BYTE *)this + 4240) )
  {
    if ( *((_DWORD *)this + 8) <= 1u )
      break;
    CBatchOptimizer::TryMergeOneLayer(this);
  }
  if ( *((_DWORD *)this + 8) )
  {
    v3 = *((_DWORD *)this + 8);
    do
    {
      v4 = v3;
      if ( *((_DWORD *)this + 130 * *((int *)this + v3 + 11) + 25) )
        break;
      CBatchOptimizer::DiscardEmptyLayers(this, (unsigned int)(v3 - 1), 1u);
      v4 = *((_DWORD *)this + 8);
      v3 = v4;
    }
    while ( v4 );
    if ( v4 )
    {
      do
      {
        CBatchOptimizer::FlushBottomLayer(this);
        v5 = *((int *)this + 8);
        v6 = 0LL;
        if ( (_DWORD)v5 != 1 )
        {
          v8 = (_DWORD *)((char *)this + 48);
          v9 = *((int *)this + 8);
          v10 = *((_DWORD *)this + 12);
          v11 = v5 - 1;
          do
          {
            ++v6;
            *v8 = v8[1];
            ++v8;
          }
          while ( v6 != v11 );
          *((_DWORD *)this + v9 + 11) = v10;
          LODWORD(v5) = *((_DWORD *)this + 8);
        }
        *((_DWORD *)this + 8) = v5 - 1;
      }
      while ( (_DWORD)v5 != 1 );
    }
  }
  *((_BYTE *)this + 4240) = 0;
  *((_OWORD *)this + 1) = SharedStateLayer::StateBlock::kBlank;
  v7 = (_DWORD *)((char *)this + 48);
  do
    *v7++ = v1++;
  while ( v1 < 8 );
}
