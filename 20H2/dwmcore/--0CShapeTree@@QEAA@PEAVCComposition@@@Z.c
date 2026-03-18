/*
 * XREFs of ??0CShapeTree@@QEAA@PEAVCComposition@@@Z @ 0x1801EB93C
 * Callers:
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801EB9F0 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 * Callees:
 *     ??0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x18016A138 (--0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z.c)
 */

CShapeTree *__fastcall CShapeTree::CShapeTree(CShapeTree *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CShapeTree *result; // rax

  *((_QWORD *)this + 7) = &CCompositionSkyBoxBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 19) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 18) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 19) + 4LL) + 152) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContainerVectorShape::CContainerVectorShape(this, a2, 0);
  *(_QWORD *)this = &CShapeTree::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CShapeTree::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 72;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 88;
  return result;
}
