/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1802A0C90
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801F8BF0 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800CAA30 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800CE7E8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800CE838 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_fmodf_0 @ 0x180101910 (_o_fmodf_0.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801138DE (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18026F8F4 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180270014 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18029FEE0 (--0CPathLengthOperation@@QEAA@XZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x1802A00F4 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1802A0AD4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
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
  float v9; // xmm6_4
  __int64 v10; // r15
  struct CPathData *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  double v15; // xmm0_8
  float v16; // xmm7_4
  __int64 v17; // rcx
  double v18; // xmm0_8
  float v19; // xmm6_4
  float v20; // xmm0_4
  CPathLengthOperation *v21; // rax
  float Length; // xmm0_4
  _BYTE *v23; // rbx
  _BYTE *v24; // rdi
  char v25; // al
  int v26; // xmm1_4
  const struct Path::Segment *v27; // rdx
  char v28; // al
  __int64 v29; // rax
  unsigned int v31; // [rsp+28h] [rbp-E0h]
  struct CPathData *v32; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE *i; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v37[224]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = 0;
  v9 = fminf(1.0, fmaxf(a4, 0.0)) - fminf(1.0, fmaxf(a3, 0.0));
  if ( v9 < 0.0 )
    v9 = v9 + 1.0;
  v10 = *((_QWORD *)a2 + 5);
  v11 = 0LL;
  v32 = 0LL;
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v6 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2003304315, 0xA5u);
    goto LABEL_33;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v32, (__int64)a2);
    v11 = v32;
    goto LABEL_33;
  }
  if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929 )
  {
    v15 = o_fmodf_0(v12);
    v16 = *(float *)&v15;
    v18 = o_fmodf_0(v17);
    v19 = *(float *)&v18;
    if ( v16 < 0.0 )
      v16 = v16 + 1.0;
    if ( *(float *)&v18 < 0.0 )
      v19 = *(float *)&v18 + 1.0;
    *((_BYTE *)this + 396) = 0;
    if ( v16 > v19 )
    {
      v20 = v16;
      *((_BYTE *)this + 396) = 1;
      v16 = v19;
      v19 = v20;
    }
    v21 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v37);
    Length = CPathLengthOperation::GetLength(v21, a2);
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 11) = 0;
    *((float *)this + 6) = Length * v16;
    *((float *)this + 7) = Length * v19;
    *((_BYTE *)this + 397) = 1;
    *((_QWORD *)this + 1) = *(_QWORD *)this;
    v23 = (_BYTE *)*((_QWORD *)a2 + 2);
    v24 = (_BYTE *)*((_QWORD *)a2 + 3);
    for ( i = v23; v23 != v24; v23 = i )
    {
      if ( *v23 == 1 && v23[2] )
      {
        if ( COERCE_FLOAT(*((_DWORD *)v23 + 1) & _xmm) >= 0.0000011920929 )
        {
          Path::Segment::Segment((char *)&v33 + 8, 2);
          v25 = v23[1];
          v26 = *((_DWORD *)this + 14);
          HIDWORD(v33) = *((_DWORD *)v23 + 1);
          HIDWORD(v34) = *((_DWORD *)this + 15);
          LODWORD(v34) = v26;
          BYTE9(v33) = v25;
          CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)((char *)&v33 + 8));
        }
        v27 = (const struct Path::Segment *)&v35;
        v35 = *(_QWORD *)v23;
        v28 = *((_BYTE *)this + 397);
        HIDWORD(v35) = 0;
        BYTE2(v35) = v28;
      }
      else
      {
        v27 = (const struct Path::Segment *)v23;
      }
      if ( !CTrimPathOperation::ProcessSegment(this, v27) )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v29 = (__int64)DefaultHeap::Alloc(0x50uLL);
    if ( v29 )
      v29 = CPathData::CPathData(v29, v10, this);
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v32, v29);
    v11 = v32;
    if ( !v32 )
    {
      v31 = 243;
      goto LABEL_32;
    }
  }
  else
  {
    v13 = (__int64)DefaultHeap::Alloc(0x50uLL);
    if ( v13 )
    {
      *((_QWORD *)&v33 + 1) = 0LL;
      v34 = 0LL;
      v13 = CPathData::CPathData(v13, v10, (_QWORD *)&v33 + 1);
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v32, v13);
    v11 = v32;
    if ( !v32 )
    {
      v31 = 179;
LABEL_32:
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024882, v31);
    }
  }
LABEL_33:
  v32 = 0LL;
  *a6 = v11;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v32);
  return v6;
}
