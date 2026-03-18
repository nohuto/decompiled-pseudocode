/*
 * XREFs of ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18025E194
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1802091D8 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x18019A914 (-GotoParent@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x18025E7C8 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x18025E860 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 *     ?GotoSibling@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x18025E940 (-GotoSibling@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVectorS.c)
 *     ?PostSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x18025EAEC (-PostSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x18025EB78 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeDrawingContext>(__int64 a1, __int64 a2, CShapeDrawingContext *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  bool v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  do
  {
LABEL_2:
    v6 = CShapeDrawingContext::PreSubgraph(a3, &v17);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x24u, 0LL);
      goto LABEL_16;
    }
    if ( !v17 )
      break;
    v16 = 0LL;
    v9 = CGraphWalker<CVectorShape>::GotoFirstChild(a1, &v16);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x29u, 0LL);
      goto LABEL_16;
    }
  }
  while ( v16 );
  while ( 1 )
  {
    LOBYTE(v16) = 1;
    v11 = CShapeDrawingContext::PostSubgraph(a3, (bool *)&v16);
    v8 = v11;
    if ( v11 < 0 )
      break;
    v18 = 0LL;
    if ( (_BYTE)v16 )
    {
      v13 = CGraphWalker<CVectorShape>::GotoSibling(a1, &v18);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x39u, 0LL);
        goto LABEL_16;
      }
      if ( v18 )
        goto LABEL_2;
    }
    v16 = 0LL;
    CGraphWalker<CVectorShape>::GotoParent(a1, &v16);
    if ( !v16 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x34u, 0LL);
LABEL_16:
  CGraphWalker<CVectorShape>::EndWalk(a1, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
