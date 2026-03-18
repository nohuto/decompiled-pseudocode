/*
 * XREFs of ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18025D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D7920 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180220174 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18022041C (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetSimplifiedPathDataInternal(CPathSegmentsShape *this, struct CPathData **a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  CPathData *v4; // rcx
  int v6; // eax
  __int64 v7; // rcx
  struct CPathData *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v3 = 0;
  v4 = (CPathData *)*((_QWORD *)this + 2);
  v9 = 0LL;
  if ( CPathData::IsSimpleGeometry(v4) )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v9, v2);
LABEL_4:
    *a2 = v9;
    return v3;
  }
  v6 = CPathData::Simplify((CPathData *)*v2, &v9);
  v3 = v6;
  if ( v6 >= 0 )
    goto LABEL_4;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2Fu, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v9 + 16LL))(v9);
  return v3;
}
