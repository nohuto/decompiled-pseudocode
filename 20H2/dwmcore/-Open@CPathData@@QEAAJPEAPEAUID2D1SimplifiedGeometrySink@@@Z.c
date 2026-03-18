/*
 * XREFs of ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18021E378
 * Callers:
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D2A70 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18021E5BC (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18025AED0 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801C7858 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 */

__int64 __fastcall CPathData::Open(CPathData *this, struct ID2D1SimplifiedGeometrySink **a2)
{
  __int64 v4; // rax
  volatile __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(
    &v7,
    _InterlockedExchange64((volatile __int64 *)this + 9, 0LL));
  v4 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 4) = v4;
  *((_BYTE *)this + 80) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  v5 = *(_QWORD *)this;
  *((_WORD *)this + 28) = 0;
  (*(void (__fastcall **)(CPathData *))(v5 + 8))(this);
  *((_BYTE *)this + 80) = 1;
  *a2 = (CPathData *)((char *)this + 16);
  return 0LL;
}
