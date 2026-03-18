/*
 * XREFs of ?SetSuperWetInkClip@CTreeData@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B4A54
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTreeData::SetSuperWetInkClip(__int64 a1, _OWORD *a2)
{
  char *v2; // rbx
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  void *v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)(a1 + 304);
  v4 = *(_OWORD **)(a1 + 304);
  if ( v4 )
  {
    *v4 = *a2;
  }
  else
  {
    v5 = operator new(0x10uLL);
    if ( v5 )
      *v5 = *a2;
    if ( v2 == &v7 )
    {
      if ( !v5 )
        return;
      v6 = v5;
    }
    else
    {
      v6 = *(void **)v2;
      *(_QWORD *)v2 = v5;
      if ( !v6 )
        return;
    }
    operator delete(v6);
  }
}
