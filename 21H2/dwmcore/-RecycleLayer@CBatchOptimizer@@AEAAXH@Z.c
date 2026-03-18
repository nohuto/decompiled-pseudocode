/*
 * XREFs of ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180080650
 * Callers:
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180011500 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180011544 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::RecycleLayer(CBatchOptimizer *this, int a2)
{
  int v2; // eax
  int v3; // r9d
  __int64 v4; // r8
  int *v5; // rdx
  int v6; // r10d

  v2 = *((_DWORD *)this + 8);
  v3 = v2 - 1;
  if ( a2 != v2 - 1 )
  {
    v4 = a2;
    v5 = (int *)((char *)this + 4 * a2 + 48);
    v6 = *v5;
    do
    {
      ++v4;
      *v5 = v5[1];
      ++v5;
    }
    while ( v4 != v3 );
    *((_DWORD *)this + v3 + 12) = v6;
    v2 = *((_DWORD *)this + 8);
  }
  *((_DWORD *)this + 8) = v2 - 1;
}
