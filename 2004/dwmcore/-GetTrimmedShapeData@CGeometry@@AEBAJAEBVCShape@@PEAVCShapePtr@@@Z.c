/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801B73EC
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D080C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x1801B72B4 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18025BBF8 (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18025D300 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18025D860 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, const struct CShape *a2, struct CShapePtr *a3)
{
  struct CPathData *v4; // rbx
  int SimplifiedPathData; // eax
  __int64 v8; // rcx
  struct CPathData *v9; // rdi
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  CPathSegmentsShape *v13; // rax
  __int64 v14; // rcx
  CPathSegmentsShape *v15; // rbp
  struct CPathData *v17; // [rsp+30h] [rbp-1D8h] BYREF
  struct CPathData *v18; // [rsp+38h] [rbp-1D0h] BYREF
  _BYTE v19[400]; // [rsp+40h] [rbp-1C8h] BYREF

  v18 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v19);
  SimplifiedPathData = CShape::GetSimplifiedPathData(a2, &v18);
  v9 = v18;
  v10 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, SimplifiedPathData, 0x11Eu, 0LL);
  }
  else
  {
    v11 = CTrimPathOperation::Trim(
            (CTrimPathOperation *)v19,
            v18,
            *((float *)this + 20),
            *((float *)this + 21),
            *((float *)this + 22),
            &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x11Fu, 0LL);
      v4 = v17;
    }
    else
    {
      v13 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
      v4 = v17;
      if ( v13 )
        v15 = CPathSegmentsShape::CPathSegmentsShape(v13, v17);
      else
        v15 = 0LL;
      if ( v15 )
      {
        CShapePtr::Release(a3);
        *(_QWORD *)a3 = v15;
        *((_BYTE *)a3 + 8) = 1;
      }
      else
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x122u, 0LL);
      }
    }
  }
  std::vector<unsigned char>::_Tidy((__int64)v19);
  if ( v4 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v9 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v9 + 16LL))(v9);
  return v10;
}
