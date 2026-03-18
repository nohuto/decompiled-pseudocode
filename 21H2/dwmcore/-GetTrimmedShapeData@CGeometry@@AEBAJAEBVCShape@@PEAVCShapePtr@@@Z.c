/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801F8BF0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800E006C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x1800EDCE4 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x1801908EC (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x1801F8B7C (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1802A0C90 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, const struct CShape *a2, struct CShapePtr *a3)
{
  int SimplifiedPathData; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CPathSegmentsShape *v9; // rax
  __int64 v10; // rcx
  CPathSegmentsShape *v11; // rsi
  unsigned int v13; // [rsp+20h] [rbp-E0h]
  struct CPathData *v14; // [rsp+30h] [rbp-D0h] BYREF
  struct CPathData *v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[400]; // [rsp+40h] [rbp-C0h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v15);
  SimplifiedPathData = CShape::GetSimplifiedPathData(a2, &v15);
  v8 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v13 = 286;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v14);
  SimplifiedPathData = CTrimPathOperation::Trim(
                         (CTrimPathOperation *)v16,
                         v15,
                         *((float *)this + 22),
                         *((float *)this + 23),
                         *((float *)this + 24),
                         &v14);
  v8 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v13 = 287;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, SimplifiedPathData, v13);
    goto LABEL_10;
  }
  v9 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
  if ( v9 && (v11 = CPathSegmentsShape::CPathSegmentsShape(v9, v14)) != 0LL )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v11;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147024882, 0x122u);
  }
LABEL_10:
  std::vector<unsigned char>::_Tidy((__int64)v16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v15);
  return v8;
}
