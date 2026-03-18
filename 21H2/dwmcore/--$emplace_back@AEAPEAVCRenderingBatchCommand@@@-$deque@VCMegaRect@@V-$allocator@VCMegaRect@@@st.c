/*
 * XREFs of ??$emplace_back@AEAPEAVCRenderingBatchCommand@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCRenderingBatchCommand@@@Z @ 0x1800B6B1C
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F1140 (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAX_K@Z @ 0x1800B7AF0 (-_Growmap@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<CMegaRect>::emplace_back<CRenderingBatchCommand * &>(_QWORD *a1, _QWORD **a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v2 = a1[4];
  v4 = a1[2];
  if ( v4 <= v2 + 1 )
  {
    std::deque<CMegaRect>::_Growmap(a1);
    v4 = a1[2];
    v2 = a1[4];
  }
  a1[3] &= v4 - 1;
  v6 = v4 - 1;
  v7 = a1[1];
  v8 = v6 & (v2 + a1[3]);
  if ( !*(_QWORD *)(v7 + 8 * v8) )
  {
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v7 = a1[1];
  }
  v9 = *a2;
  v10 = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)v10 = v9;
  v11 = v9[1];
  if ( !v11 )
    v11 = *(_QWORD *)(*v9 + 64LL);
  *(_DWORD *)(v10 + 24) = *(_DWORD *)(v11 + 16);
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[4]++ + a1[3])));
}
