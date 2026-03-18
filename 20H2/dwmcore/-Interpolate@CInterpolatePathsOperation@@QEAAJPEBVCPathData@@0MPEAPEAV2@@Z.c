/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18025BC60
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BFF48 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180024548 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800CFC0C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1801D9298 (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1801EFA78 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 *     ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18021CF90 (-GetControlPointsForModification@Segment@Path@@QEAA-AV-$span@UD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18021D038 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x18021D904 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18021D9B8 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x18021DB78 (--9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18021DBB4 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18021DBE4 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18021DC44 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        CInterpolatePathsOperation *this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  unsigned int v6; // r14d
  __int64 *PathData; // rax
  _BYTE *v9; // rax
  float v10; // xmm7_4
  char *v11; // rbx
  char *v12; // rdi
  __int64 v13; // xmm8_8
  __int128 v14; // xmm9
  char *v15; // r12
  unsigned int Size; // eax
  __int64 v17; // r15
  bool v18; // al
  float *v19; // rbx
  float *v20; // r15
  __int64 v21; // rbx
  LPVOID v22; // rax
  char *v23; // rbx
  __int64 v24; // rcx
  __int128 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h]
  _BYTE *v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  int v30; // [rsp+68h] [rbp-A0h]
  __int128 v31; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+80h] [rbp-88h]
  _QWORD v33[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h]
  _QWORD v35[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-50h] BYREF
  float *v37; // [rsp+C0h] [rbp-48h]
  __int128 v38; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-30h]
  __int128 v40; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-10h]
  char *v42; // [rsp+178h] [rbp+70h] BYREF
  __int64 v43; // [rsp+180h] [rbp+78h] BYREF

  v42 = (char *)this;
  v6 = 0;
  v32 = 0LL;
  v31 = 0LL;
  PathData = CPathData::GetPathData((__int64)a2, (__int64 *)&v26);
  std::vector<unsigned char>::reserve(&v31, *PathData);
  v9 = (_BYTE *)*((_QWORD *)a3 + 3);
  v30 = 0;
  LODWORD(v27) = 0;
  v28 = v9;
  v10 = fminf(1.0, fmaxf(a4, 0.0));
  v29 = *((_QWORD *)a3 + 4);
  *(_QWORD *)&v26 = v29;
  *((_QWORD *)&v26 + 1) = v29;
  if ( a2 == a3 || COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
  {
    v42 = (char *)a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v42);
    *a5 = a2;
  }
  else
  {
    v11 = (char *)*((_QWORD *)a2 + 3);
    v12 = (char *)*((_QWORD *)a2 + 4);
    v13 = v27;
    v14 = v26;
    v15 = (char *)*((_QWORD *)&v31 + 1);
    v42 = v11;
    while ( v11 != v12 )
    {
      Size = Path::Segment::GetSize(*v11);
      v35[1] = 0LL;
      v17 = Size;
      *((_QWORD *)&v34 + 1) = Size;
      *(_QWORD *)&v34 = v33;
      v35[0] = v33;
      v33[0] = Size;
      v33[1] = v11;
      v26 = v34;
      std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
        &v31,
        &v43,
        v15,
        v35,
        &v26);
      v38 = v14;
      v39 = v13;
      v18 = Path::ControlPointCollection::const_iterator::operator!=((__int64)&v28, &v38);
      v15 = (char *)*((_QWORD *)&v31 + 1);
      if ( v18 )
      {
        Path::Segment::GetControlPointsForModification((_BYTE *)(*((_QWORD *)&v31 + 1) - v17), &v36);
        v19 = v37;
        v20 = &v37[2 * v36];
        if ( v37 != v20 )
        {
          v40 = v14;
          v41 = v13;
          do
          {
            if ( Path::ControlPointCollection::const_iterator::operator!=((__int64)&v28, &v40) )
            {
              *v19 = (float)((float)(1.0 - v10) * *v19)
                   + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*((__int64)&v28) * v10);
              v19[1] = (float)((float)(1.0 - v10) * v19[1])
                     + (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*((__int64)&v28) + 4)
                             * v10);
              Path::ControlPointCollection::const_iterator::operator++(&v28);
            }
            v19 += 2;
          }
          while ( v19 != v20 );
        }
      }
      Path::SegmentCollection::const_iterator::operator++(&v42);
      v11 = v42;
    }
    v21 = *((_QWORD *)a2 + 6);
    v22 = DefaultHeap::Alloc(0x58uLL);
    if ( v22 )
      v23 = (char *)CPathData::CPathData((__int64)v22, v21, &v31);
    else
      v23 = 0LL;
    v42 = v23;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v42);
    if ( v23 )
    {
      *a5 = (struct CPathData *)v23;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x2CEu, 0LL);
    }
  }
  std::vector<unsigned char>::_Tidy((__int64)&v31);
  return v6;
}
