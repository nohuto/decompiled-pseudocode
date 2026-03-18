/*
 * XREFs of ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x1800BC658
 * Callers:
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180083950 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x1800BC480 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18009A9C4 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800BC71C (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 */

void __fastcall CBatchOptimizer::ContinueLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v5; // rbp
  char *v6; // r15
  _DWORD *v7; // rsi
  __int64 v8; // rax
  int v9; // ecx

  v2 = a2;
  v3 = 0LL;
  v5 = 520LL * *((int *)this + a2 + 12);
  if ( *(_DWORD *)((char *)this + v5 + 100) )
    *(_DWORD *)((char *)this + v5 + 104) = 1;
  v6 = (char *)this + v5;
  if ( a2 )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    v7 = (_DWORD *)((char *)this + 48);
    v8 = *((int *)this + 12);
    *(_OWORD *)((char *)this + 520 * v8 + 80) = *(_OWORD *)((char *)this + v5 + 80);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((char *)this + 520 * v8 + 112);
    v9 = *((_DWORD *)this + 12);
    if ( v2 )
    {
      do
      {
        ++v3;
        *v7 = v7[1];
        ++v7;
      }
      while ( v3 != v2 );
    }
    *((_DWORD *)this + v2 + 12) = v9;
  }
  else
  {
    CBatchOptimizer::FlushBottomLayer(this);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v6 + 112);
  }
}
