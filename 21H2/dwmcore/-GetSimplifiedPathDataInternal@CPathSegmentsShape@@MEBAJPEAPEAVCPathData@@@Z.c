/*
 * XREFs of ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801918C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F1A50 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180270014 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802700F8 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetSimplifiedPathDataInternal(CPathSegmentsShape *this, struct CPathData **a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  CPathData *v4; // rcx
  CPathData *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  struct CPathData *v9; // rcx
  struct CPathData *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v3 = 0;
  v4 = (CPathData *)*((_QWORD *)this + 2);
  v11 = 0LL;
  if ( CPathData::IsSimpleGeometry(v4) )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v11, v2);
  }
  else
  {
    v6 = (CPathData *)*v2;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v11);
    v7 = CPathData::Simplify(v6, &v11);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x2Fu);
      goto LABEL_6;
    }
  }
  v9 = v11;
  v11 = 0LL;
  *a2 = v9;
LABEL_6:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v11);
  return v3;
}
