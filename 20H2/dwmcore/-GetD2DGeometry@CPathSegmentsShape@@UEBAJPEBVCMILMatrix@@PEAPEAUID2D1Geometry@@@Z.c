/*
 * XREFs of ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18025CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C502C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18021E168 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x18025D958 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetD2DGeometry(
        CPathSegmentsShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  CPathData *v3; // rbx
  struct ID2D1Factory *v6; // rdx
  int D2DGeometry; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct ID2D1Geometry *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CPathData *)*((_QWORD *)this + 2);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v13);
  D2DGeometry = CPathData::GetD2DGeometry(v3, v6, &v13);
  v9 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, D2DGeometry, 0x1Au, 0LL);
  }
  else
  {
    v10 = CTransformedGeometryHelper::TransformGeometry(a2, v13, a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Cu, 0LL);
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v13);
  return v9;
}
