/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18025F1D0
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801B5EBC (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800F477B (fmodf_0.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B17D8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801B5DF8 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180220668 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1802206F8 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1802208F4 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180220FC4 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18025E49C (--0CPathLengthOperation@@QEAA@XZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18025E67C (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18025EFF0 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 */

__int64 __fastcall CTrimPathOperation::Trim(
        CTrimPathOperation *this,
        const struct CPathData *a2,
        float a3,
        float a4,
        float a5,
        struct CPathData **a6)
{
  unsigned int v6; // r14d
  float v9; // xmm12_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  __int64 v12; // r15
  struct CPathData *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  CPathLengthOperation *v21; // rax
  float Length; // xmm0_4
  char *v23; // rbx
  char *v24; // rdi
  char v25; // al
  int v26; // xmm1_4
  const struct Path::Segment *v27; // rdx
  char v28; // al
  __int64 v29; // rax
  unsigned int v31; // [rsp+28h] [rbp-E0h]
  struct CPathData *v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-C0h] BYREF
  char *i; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v36[224]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = 0;
  v9 = fminf(1.0, fmaxf(a4, 0.0));
  v10 = fminf(1.0, fmaxf(a3, 0.0));
  v11 = v9 - v10;
  if ( (float)(v9 - v10) < 0.0 )
    v11 = v11 + 1.0;
  v12 = *((_QWORD *)a2 + 6);
  v13 = 0LL;
  v32 = 0LL;
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v6 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003304315, 0xA5u, 0LL);
    goto LABEL_33;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v32, (__int64)a2);
    v13 = v32;
    goto LABEL_33;
  }
  if ( COERCE_FLOAT(LODWORD(v11) & _xmm) >= 0.0000011920929 )
  {
    v17 = fmodf_0(v10 + a5, 1.0);
    v18 = fmodf_0(v9 + a5, 1.0);
    v19 = v18;
    if ( v17 < 0.0 )
      v17 = v17 + 1.0;
    if ( v18 < 0.0 )
      v19 = v18 + 1.0;
    *((_BYTE *)this + 396) = 0;
    if ( v17 > v19 )
    {
      v20 = v17;
      *((_BYTE *)this + 396) = 1;
      v17 = v19;
      v19 = v20;
    }
    v21 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v36);
    Length = CPathLengthOperation::GetLength(v21, a2);
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 11) = 0;
    *((float *)this + 6) = Length * v17;
    *((float *)this + 7) = Length * v19;
    *((_BYTE *)this + 397) = 1;
    *((_QWORD *)this + 1) = *(_QWORD *)this;
    v23 = (char *)*((_QWORD *)a2 + 3);
    v24 = (char *)*((_QWORD *)a2 + 4);
    for ( i = v23; v23 != v24; v23 = i )
    {
      if ( *v23 == 1 && v23[2] )
      {
        if ( COERCE_FLOAT(*((_DWORD *)v23 + 1) & _xmm) >= 0.0000011920929 )
        {
          Path::Segment::Segment(&v34, 2);
          v25 = v23[1];
          v26 = *((_DWORD *)this + 14);
          DWORD1(v34) = *((_DWORD *)v23 + 1);
          HIDWORD(v34) = *((_DWORD *)this + 15);
          DWORD2(v34) = v26;
          BYTE1(v34) = v25;
          CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)&v34);
        }
        v27 = (const struct Path::Segment *)&v33;
        v33 = *(_QWORD *)v23;
        v28 = *((_BYTE *)this + 397);
        HIDWORD(v33) = 0;
        BYTE2(v33) = v28;
      }
      else
      {
        v27 = (const struct Path::Segment *)v23;
      }
      if ( !CTrimPathOperation::ProcessSegment(this, v27) )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v29 = (__int64)DefaultHeap::Alloc(0x58uLL);
    if ( v29 )
      v29 = CPathData::CPathData(v29, v12, this);
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v32, v29);
    v13 = v32;
    if ( !v32 )
    {
      v31 = 243;
      goto LABEL_32;
    }
  }
  else
  {
    v15 = (__int64)DefaultHeap::Alloc(0x58uLL);
    if ( v15 )
    {
      v34 = 0LL;
      v15 = CPathData::CPathData(v15, v12, (SIZE_T *)&v34);
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v32, v15);
    v13 = v32;
    if ( !v32 )
    {
      v31 = 179;
LABEL_32:
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, v31, 0LL);
    }
  }
LABEL_33:
  *a6 = v13;
  return v6;
}
