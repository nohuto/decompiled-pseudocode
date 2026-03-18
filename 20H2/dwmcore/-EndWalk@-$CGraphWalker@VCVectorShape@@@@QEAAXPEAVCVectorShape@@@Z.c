/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x18025E7C8
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x18025E05C (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18025E194 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180064910 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 */

void __fastcall CGraphWalker<CVectorShape>::EndWalk(__int64 a1, __int64 a2)
{
  if ( a2 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize(a1 + 32);
}
