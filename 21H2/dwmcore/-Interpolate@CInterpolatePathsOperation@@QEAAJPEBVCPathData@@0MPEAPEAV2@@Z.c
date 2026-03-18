/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800D6B1C (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x1800CA75C (--9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1800CA798 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x1800CA7D4 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800CAA30 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800CE938 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1800CEA58 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800E006C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800EA63C (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1802289CC (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18026F8F4 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1802702B8 (-GetControlPointsForModification@Segment@Path@@QEAA-AV-$span@UD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 */

__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        CInterpolatePathsOperation *this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  unsigned int v6; // r14d
  unsigned __int64 *PathData; // rax
  __int64 v9; // rax
  float v10; // xmm7_4
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  __int64 v13; // xmm8_8
  __int128 v14; // xmm9
  _BYTE *v15; // r12
  __int64 Size; // r15
  gsl::details *v17; // rcx
  bool v18; // al
  float *v19; // rbx
  float *v20; // r15
  __int64 v21; // rbx
  LPVOID v22; // rax
  _BYTE *v23; // rbx
  __int64 v24; // rcx
  __int128 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int128 v33; // [rsp+78h] [rbp-88h]
  _BYTE *v34; // [rsp+88h] [rbp-78h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  _BYTE *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  float *v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h] BYREF
  __int64 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  __int64 v46; // [rsp+130h] [rbp+30h]
  _BYTE *v47; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v48; // [rsp+1B8h] [rbp+B8h] BYREF

  v47 = this;
  v6 = 0;
  v32 = 0LL;
  v31 = 0LL;
  PathData = (unsigned __int64 *)CPathData::GetPathData((__int64)a2, (gsl::details *)&v26);
  std::vector<unsigned char>::reserve(&v31, *PathData);
  v9 = *((_QWORD *)a3 + 2);
  v30 = 0;
  LODWORD(v27) = 0;
  v28 = v9;
  v10 = fminf(1.0, fmaxf(a4, 0.0));
  v29 = *((_QWORD *)a3 + 3);
  *(_QWORD *)&v26 = v29;
  *((_QWORD *)&v26 + 1) = v29;
  if ( a2 == a3 || COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
  {
    v47 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v47);
    *a5 = a2;
    goto LABEL_21;
  }
  v11 = (_BYTE *)*((_QWORD *)a2 + 2);
  v12 = (_BYTE *)*((_QWORD *)a2 + 3);
  v13 = v27;
  v14 = v26;
  v15 = (_BYTE *)*((_QWORD *)&v31 + 1);
  v47 = v11;
  while ( v11 != v12 )
  {
    Size = (unsigned int)Path::Segment::GetSize(*v11);
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v26, Size);
    if ( (_QWORD)v26 == -1LL )
    {
      gsl::details::terminate(v17);
      __debugbreak();
    }
    *(_QWORD *)&v33 = v11;
    *((_QWORD *)&v33 + 1) = &v11[v26];
    v34 = &v11[v26];
    *((_QWORD *)&v35 + 1) = &v11[v26];
    v39 = v33;
    v40 = &v11[v26];
    *(_QWORD *)&v35 = v11;
    v36 = v11;
    v41 = v35;
    v42 = v11;
    std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
      (__int64)&v31,
      &v48,
      v15,
      (__int64)&v41,
      &v39);
    v43 = v14;
    v44 = v13;
    v18 = Path::ControlPointCollection::const_iterator::operator!=((__int64)&v28, &v43);
    v15 = (_BYTE *)*((_QWORD *)&v31 + 1);
    if ( v18 )
    {
      Path::Segment::GetControlPointsForModification((_BYTE *)(*((_QWORD *)&v31 + 1) - Size), (gsl::details *)&v37);
      v19 = v38;
      v20 = &v38[2 * v37];
      if ( v38 != v20 )
      {
        v45 = v14;
        v46 = v13;
        do
        {
          if ( Path::ControlPointCollection::const_iterator::operator!=((__int64)&v28, &v45) )
          {
            *v19 = (float)((float)(1.0 - v10) * *v19)
                 + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*((__int64)&v28) * v10);
            v19[1] = (float)((float)(1.0 - v10) * v19[1])
                   + (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*((__int64)&v28) + 4) * v10);
            Path::ControlPointCollection::const_iterator::operator++(&v28);
          }
          v19 += 2;
        }
        while ( v19 != v20 );
      }
    }
    Path::SegmentCollection::const_iterator::operator++(&v47);
    v11 = v47;
  }
  v21 = *((_QWORD *)a2 + 5);
  v22 = DefaultHeap::Alloc(0x50uLL);
  if ( v22 )
    v23 = (_BYTE *)CPathData::CPathData((__int64)v22, v21, &v31);
  else
    v23 = 0LL;
  v47 = v23;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v47);
  if ( v23 )
  {
    *a5 = (struct CPathData *)v23;
LABEL_21:
    v47 = 0LL;
    goto LABEL_22;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, -2147024882, 0x2CEu);
LABEL_22:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v47);
  std::vector<unsigned char>::_Tidy((__int64)&v31);
  return v6;
}
