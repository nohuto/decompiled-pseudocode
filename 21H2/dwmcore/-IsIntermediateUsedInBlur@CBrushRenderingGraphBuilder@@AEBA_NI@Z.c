/*
 * XREFs of ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800EF180
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18003719C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800EF180 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 * Callees:
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180055428 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800EF180 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 */

bool __fastcall CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(CBrushRenderingGraphBuilder *this, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  bool IsIntermediateUsedInBlur; // r8
  unsigned int v7; // ebp
  __int64 i; // rsi
  unsigned int v9; // edx
  CRenderingTechnique *v10; // rcx
  unsigned int v11; // r9d
  _DWORD *v12; // rax

  v2 = *(_QWORD *)this;
  v3 = (unsigned int)(a2 + 1);
  IsIntermediateUsedInBlur = 0;
  v7 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( (unsigned int)v3 < v7 )
  {
    for ( i = 8 * v3; ; i += 8LL )
    {
      if ( IsIntermediateUsedInBlur )
        return IsIntermediateUsedInBlur;
      v9 = 0;
      v10 = *(CRenderingTechnique **)(i + *(_QWORD *)(v2 + 144));
      v11 = *((_DWORD *)v10 + 15);
      if ( v11 )
        break;
LABEL_12:
      if ( v9 < v11 )
        goto LABEL_8;
LABEL_10:
      LODWORD(v3) = v3 + 1;
      if ( (unsigned int)v3 >= v7 )
        return IsIntermediateUsedInBlur;
    }
    v12 = (_DWORD *)((char *)v10 + 68);
    while ( !*((_BYTE *)v12 + 4) || *v12 != a2 )
    {
      ++v9;
      v12 += 11;
      if ( v9 >= v11 )
        goto LABEL_12;
    }
LABEL_8:
    if ( CRenderingTechnique::IsExternallyImplementedSubgraph(v10, 0LL) )
      IsIntermediateUsedInBlur = 1;
    else
      IsIntermediateUsedInBlur = CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v3);
    goto LABEL_10;
  }
  return IsIntermediateUsedInBlur;
}
