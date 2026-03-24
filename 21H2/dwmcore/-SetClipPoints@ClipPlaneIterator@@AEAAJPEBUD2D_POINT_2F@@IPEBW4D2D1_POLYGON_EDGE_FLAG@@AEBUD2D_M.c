/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18018F614
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x18018EFF0 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180014880 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x18018F4B4 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x18018F538 (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(
        ClipPlaneIterator *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3,
        const enum D2D1_POLYGON_EDGE_FLAG *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  const struct D2D_POINT_2F *v6; // rdi
  ClipPlaneIterator *v7; // rbx
  __int64 v8; // rax
  FLOAT x; // xmm2_4
  FLOAT y; // xmm3_4
  unsigned int v11; // eax
  const enum D2D1_POLYGON_EDGE_FLAG *v12; // r15
  __int64 v13; // r12
  unsigned int v14; // eax
  FLOAT v15; // xmm0_4
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edi
  unsigned int i; // r9d
  float *v24; // rax
  struct MilPoint2F **v25; // r12
  float *v26; // rcx
  float v27; // xmm2_4
  float v28; // xmm3_4
  unsigned int v29; // ecx
  float v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // edi
  _BYTE *v33; // rcx
  __int64 v34; // rdx
  bool v35; // zf
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rdi
  unsigned int v39; // esi
  unsigned int j; // eax
  __int64 v41; // rax
  struct MilPoint2F *v42; // rax
  __int64 v43; // rdx
  int v44; // xmm1_4
  _BYTE *v45; // rcx
  struct MilPoint2F *v46; // rdx
  int v47; // xmm1_4
  unsigned int v48; // edx
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // r8d
  int v53; // eax
  __int64 v54; // rcx
  struct MilPoint2F *v55; // r8
  const struct MilPoint2F *v56; // rdx
  FLOAT dy; // xmm1_4
  unsigned int v59; // [rsp+30h] [rbp-40h] BYREF
  __int64 v60; // [rsp+38h] [rbp-38h]
  __int64 v61; // [rsp+40h] [rbp-30h]
  __int128 v62; // [rsp+48h] [rbp-28h] BYREF
  FLOAT dx; // [rsp+58h] [rbp-18h]
  FLOAT v64; // [rsp+5Ch] [rbp-14h]

  v6 = a2;
  v7 = this;
  if ( a3 < 3 )
    return 0LL;
  v8 = a3 - 1;
  x = a2[v8].x;
  y = a2[v8].y;
  if ( a4 )
    v11 = *((_DWORD *)a4 + v8);
  else
    v11 = 0;
  v59 = v11;
  v12 = a4;
  v13 = a3;
  while ( 1 )
  {
    v14 = *((_DWORD *)v7 + 12);
    v15 = v6->y;
    *(FLOAT *)&v60 = v6->x;
    v16 = v14 + 1;
    *((FLOAT *)&v60 + 1) = v15;
    *(_QWORD *)&v62 = __PAIR64__(LODWORD(y), LODWORD(x));
    *((_QWORD *)&v62 + 1) = __PAIR64__(LODWORD(v15), v60);
    if ( v14 + 1 < v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else if ( v16 > *((_DWORD *)v7 + 11) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7 + 24, 16, 1, &v62);
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v17, 0xC0u, 0LL);
    }
    else
    {
      this = (ClipPlaneIterator *)(2LL * v14);
      *(_OWORD *)(*((_QWORD *)v7 + 3) + 16LL * v14) = v62;
      *((_DWORD *)v7 + 12) = v16;
    }
    if ( a4 )
    {
      v18 = *((_DWORD *)v7 + 20);
      v19 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v19 > *((_DWORD *)v7 + 19) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7 + 56, 4, 1, &v59);
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v20, 0xC0u, 0LL);
      }
      else
      {
        this = (ClipPlaneIterator *)*((_QWORD *)v7 + 7);
        *((_DWORD *)this + v18) = v59;
        *((_DWORD *)v7 + 20) = v19;
      }
      v59 = *(_DWORD *)v12;
    }
    ++v6;
    v12 = (const enum D2D1_POLYGON_EDGE_FLAG *)((char *)v12 + 4);
    v61 = v60;
    if ( !--v13 )
      break;
    y = *((FLOAT *)&v61 + 1);
    LODWORD(x) = v61;
  }
  v21 = *((_DWORD *)v7 + 12);
  v22 = 0;
  for ( i = v21; v22 < v21; i = v21 )
  {
    v24 = (float *)(*((_QWORD *)v7 + 3) + 16LL * v22);
    if ( (float)((float)((float)(v24[3] - v24[1]) * (float)(v24[3] - v24[1]))
               + (float)((float)(v24[2] - *v24) * (float)(v24[2] - *v24))) <= 1.0e-12 )
    {
      DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)v7 + 24, v22);
      if ( a4 )
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)v7 + 56, v22);
      --v22;
    }
    v21 = *((_DWORD *)v7 + 12);
    ++v22;
  }
  if ( v21 < 3 )
  {
    *((_DWORD *)v7 + 12) = 0;
    return 0LL;
  }
  v25 = (struct MilPoint2F **)((char *)v7 + 24);
  v26 = (float *)(*((_QWORD *)v7 + 3) + 16LL * (v21 - 1));
  v27 = v26[2] - *v26;
  v28 = v26[3] - v26[1];
  v29 = 0;
  do
  {
    v30 = (float)((float)(*((float *)*v25 + 4 * v29 + 3) - *((float *)*v25 + 4 * v29 + 1)) * v27)
        - (float)((float)(*((float *)*v25 + 4 * v29 + 2) - *((float *)*v25 + 4 * v29)) * v28);
    if ( COERCE_FLOAT(LODWORD(v30) & _xmm) > 0.000001 )
      break;
    i = *((_DWORD *)v7 + 12);
    ++v29;
  }
  while ( v29 < i );
  if ( v30 <= 0.0 )
    v31 = *(float *)&FLOAT_1_0;
  else
    v31 = FLOAT_N1_0;
  v32 = 0;
  *((float *)v7 + 4) = v31;
  if ( a4 )
  {
    i = *((_DWORD *)v7 + 12);
    if ( i )
    {
      v33 = (_BYTE *)*((_QWORD *)v7 + 7);
      v34 = i;
      do
      {
        v35 = (*v33 & 1) == 0;
        v36 = v32 + 1;
        v33 += 4;
        if ( v35 )
          v36 = v32;
        v32 = v36;
        --v34;
      }
      while ( v34 );
    }
  }
  v37 = i - v32;
  if ( !v32 )
    goto LABEL_72;
  if ( !v37 )
  {
    *((_DWORD *)v7 + 12) = 0;
    *(_BYTE *)v7 = 1;
    *((_DWORD *)v7 + 20) = 0;
    i = *((_DWORD *)v7 + 12);
LABEL_72:
    if ( i )
    {
      v55 = *v25;
      v56 = *v25;
      dy = a5->dy;
      v62 = *(_OWORD *)&a5->m11;
      dx = a5->dx;
      v64 = dy;
      MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v62, v56, v55, 2 * i);
    }
    return 0LL;
  }
  if ( v37 <= 4 )
  {
    v38 = 0LL;
    if ( !i )
      return 0LL;
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v7 + 7) + 4 * v38) & 1) != 0 )
      {
        DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)v7 + 24, v38);
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)v7 + 56, v38);
        LODWORD(v38) = v38 - 1;
      }
      i = *((_DWORD *)v7 + 12);
      v38 = (unsigned int)(v38 + 1);
    }
    while ( (unsigned int)v38 < i );
    goto LABEL_72;
  }
  if ( v32 >= 2 )
  {
    v39 = 1;
    for ( j = i; v39 < j; ++v39 )
    {
      v41 = *((_QWORD *)v7 + 7);
      if ( (*(_BYTE *)(v41 + 4LL * v39) & 1) != 0 && (*(_BYTE *)(v41 + 4LL * (v39 - 1)) & 1) != 0 )
      {
        v42 = *v25;
        v43 = 2LL * (v39 - 1);
        v44 = *((_DWORD *)*v25 + 4 * v39 + 3);
        *((_DWORD *)v42 + 2 * v43 + 2) = *((_DWORD *)*v25 + 4 * v39 + 2);
        *((_DWORD *)v42 + 2 * v43 + 3) = v44;
        DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)v7 + 24, v39);
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)v7 + 56, v39--);
        --v32;
      }
      j = *((_DWORD *)v7 + 12);
    }
    i = j;
    if ( v32 >= 2 )
    {
      v45 = (_BYTE *)*((_QWORD *)v7 + 7);
      if ( (*v45 & 1) != 0 && (v45[4 * (*((_DWORD *)v7 + 20) - 1)] & 1) != 0 )
      {
        v46 = *v25;
        v47 = *(_DWORD *)(*((_QWORD *)v7 + 3) + 16LL * (unsigned int)(*((_DWORD *)v7 + 12) - 1) + 4);
        *((_DWORD *)v46 + 2) = *(_DWORD *)(*((_QWORD *)v7 + 3) + 16LL * (unsigned int)(*((_DWORD *)v7 + 12) - 1));
        *((_DWORD *)v46 + 3) = v47;
        --*((_DWORD *)v7 + 12);
        --*((_DWORD *)v7 + 20);
        i = *((_DWORD *)v7 + 12);
      }
    }
  }
  v48 = 0;
  v59 = 0;
  if ( i )
  {
    v49 = 0;
    do
    {
      v50 = v49;
      if ( (*(_BYTE *)(*((_QWORD *)v7 + 7) + 4LL * v49) & 1) != 0 )
      {
        v51 = *((_DWORD *)v7 + 28);
        v52 = v51 + 1;
        if ( v51 + 1 < v51 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else if ( v52 > *((_DWORD *)v7 + 27) )
        {
          v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7 + 88, 4, 1, &v59);
          if ( v53 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0xC0u, 0LL);
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)v7 + 11) + 4LL * v51) = v48;
          *((_DWORD *)v7 + 28) = v52;
        }
        v48 = v59;
      }
      i = *((_DWORD *)v7 + 12);
      v59 = ++v48;
      v49 = v48;
    }
    while ( v48 < i );
    goto LABEL_72;
  }
  return 0LL;
}
