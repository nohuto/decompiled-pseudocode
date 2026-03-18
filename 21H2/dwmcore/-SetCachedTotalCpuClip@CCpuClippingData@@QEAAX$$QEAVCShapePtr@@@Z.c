/*
 * XREFs of ?SetCachedTotalCpuClip@CCpuClippingData@@QEAAX$$QEAVCShapePtr@@@Z @ 0x1800ECF38
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClippingData::SetCachedTotalCpuClip(__int64 a1, __int64 *a2)
{
  char v2; // di
  __int64 v3; // rsi
  __int64 v4; // rbx

  v2 = *((_BYTE *)a2 + 8);
  v3 = a1 + 80;
  v4 = *a2;
  CShapePtr::Release((CShapePtr *)(a1 + 80));
  *(_QWORD *)v3 = v4;
  *(_BYTE *)(v3 + 8) = v2;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
}
