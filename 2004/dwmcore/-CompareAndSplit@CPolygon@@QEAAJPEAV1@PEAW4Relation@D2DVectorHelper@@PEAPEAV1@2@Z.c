/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F78DC
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FB904 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180082C08 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D2324 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18019A984 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x1801F787C (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801F8618 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801F8FC0 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x18021020C (-GetTranspose@CMILMatrix@@QEBA-AV1@XZ.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18021DD14 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  _BYTE *v6; // rdi
  __int128 v7; // xmm0
  unsigned int v8; // esi
  __int128 v9; // xmm1
  int v10; // eax
  int v12; // ebx
  __int128 v13; // xmm0
  int v14; // r12d
  __int128 v15; // xmm1
  int v16; // r13d
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // r9d
  __int64 Transpose; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  struct D2D_VECTOR_4F v25; // xmm0
  __int64 v26; // rdx
  int v27; // r8d
  __int128 v28; // xmm0
  int v29; // r14d
  struct D2D_VECTOR_4F v30; // xmm6
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rax
  struct D2D_VECTOR_4F v35; // xmm7
  int v36; // eax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r9d
  unsigned int v40; // r10d
  int v41; // r11d
  __int64 v42; // rcx
  unsigned int v43; // r10d
  __m128i v44; // xmm0
  int v45; // eax
  unsigned int v46; // r8d
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // r10d
  __m128i v53; // xmm0
  int v54; // eax
  unsigned int v55; // r8d
  __int64 v56; // rdx
  int v57; // eax
  unsigned int v58; // r8d
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  int v62; // eax
  __int64 v63; // rax
  unsigned int v64; // r8d
  __int64 v65; // rcx
  __int64 v66; // rdx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  __int64 v73; // r9
  int v74; // r9d
  int v75; // eax
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  struct D2D_VECTOR_4F *v80; // [rsp+28h] [rbp-E0h]
  unsigned int v81; // [rsp+28h] [rbp-E0h]
  unsigned int v82; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v83; // [rsp+38h] [rbp-D0h]
  __int64 v85; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v87[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+70h] [rbp-98h]
  struct CPolygon **v89; // [rsp+78h] [rbp-90h]
  struct CPolygon **v90; // [rsp+80h] [rbp-88h]
  __int128 v91; // [rsp+88h] [rbp-80h] BYREF
  __int128 v92; // [rsp+98h] [rbp-70h]
  __int128 v93; // [rsp+A8h] [rbp-60h]
  __int128 v94; // [rsp+B8h] [rbp-50h]
  int v95; // [rsp+C8h] [rbp-40h]
  struct D2D_VECTOR_4F v96; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v97; // [rsp+E8h] [rbp-20h]
  __int128 v98; // [rsp+F8h] [rbp-10h]
  __int128 v99; // [rsp+108h] [rbp+0h]
  int v100; // [rsp+118h] [rbp+10h]
  struct D2D_VECTOR_4F v101; // [rsp+128h] [rbp+20h] BYREF
  int v102; // [rsp+138h] [rbp+30h]
  _BYTE v103[16]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v104[72]; // [rsp+150h] [rbp+48h] BYREF
  struct D2D_VECTOR_4F v105; // [rsp+198h] [rbp+90h] BYREF
  __m128i v106; // [rsp+1A8h] [rbp+A0h] BYREF
  int v107; // [rsp+1B8h] [rbp+B0h]
  struct D2D_VECTOR_4F v108; // [rsp+1C0h] [rbp+B8h] BYREF
  int v109; // [rsp+1D0h] [rbp+C8h]
  struct D2D_VECTOR_4F v110; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v111[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v112; // [rsp+1F8h] [rbp+F0h]
  __int64 v113; // [rsp+1FCh] [rbp+F4h]
  _BYTE v114[128]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v115[2]; // [rsp+288h] [rbp+180h] BYREF
  int v116; // [rsp+298h] [rbp+190h]
  __int64 v117; // [rsp+29Ch] [rbp+194h]
  _BYTE v118[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v111[1] = v114;
  *a4 = 0LL;
  v115[0] = v118;
  v6 = v114;
  *a5 = 0LL;
  v7 = *((_OWORD *)a2 + 9);
  v8 = 6;
  v115[1] = v118;
  v9 = *((_OWORD *)a2 + 10);
  v10 = *((_DWORD *)a2 + 52);
  v91 = v7;
  v12 = 0;
  v13 = *((_OWORD *)a2 + 11);
  v14 = 0;
  v90 = a5;
  v92 = v9;
  v15 = *((_OWORD *)a2 + 12);
  v16 = 0;
  v89 = a4;
  v93 = v13;
  v94 = v15;
  v111[0] = v114;
  v112 = 6;
  v113 = 6LL;
  v116 = 6;
  v117 = 6LL;
  v95 = v10;
  v100 = 0;
  v85 = 0LL;
  v86 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v91, (__int64)a2, 0LL) )
  {
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v91, (struct CMILMatrix *)&v91);
    v8 = v113;
    v6 = (_BYTE *)v111[0];
  }
  else
  {
    v91 = _xmm;
    v92 = _xmm;
    v93 = _xmm;
    v94 = _xmm;
    LOWORD(v95) = 32085;
  }
  if ( CMILMatrix::Invert((CMILMatrix *)&v91, v17, v18) )
  {
    Transpose = CMILMatrix::GetTranspose(&v91, v104);
    v8 = v113;
    v6 = (_BYTE *)v111[0];
    v22 = *(_OWORD *)(Transpose + 16);
    v96 = *(struct D2D_VECTOR_4F *)Transpose;
    v23 = *(_OWORD *)(Transpose + 32);
    v97 = v22;
    v24 = *(_OWORD *)(Transpose + 48);
    v100 = *(_DWORD *)(Transpose + 64);
  }
  else
  {
    v96 = (struct D2D_VECTOR_4F)_xmm;
    v23 = _xmm;
    v97 = _xmm;
    v24 = _xmm;
    LOWORD(v100) = 32085;
  }
  v98 = v23;
  v25 = (struct D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v99 = v24;
  v105 = v25;
  v110 = v25;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v105,
    v19,
    (const struct D2DVector4 *)&v110,
    v20,
    (const struct D2DMatrix *)&v96,
    v82);
  v26 = *((_QWORD *)a2 + 2);
  v27 = *((_DWORD *)a2 + 10);
  v110 = v105;
  v28 = *(_OWORD *)(v26 + 20LL * (unsigned int)(v27 - 2));
  v29 = *(_DWORD *)(v26 + 20LL * (unsigned int)(v27 - 2) + 16);
  LODWORD(v88) = v29;
  v30 = *(struct D2D_VECTOR_4F *)(v26 + 20LL * (unsigned int)(v27 - 1));
  *(_OWORD *)&v87[1] = v28;
  v108 = v30;
  v109 = *(_DWORD *)(v26 + 20LL * (unsigned int)(v27 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v105.x, (float *)&v87[1]);
  v83 = (unsigned int)D2DVectorHelper::ClassifyPoint(&v105.x, &v108.x);
  v31 = 0LL;
  if ( !v32 )
    goto LABEL_134;
  while ( 1 )
  {
    v33 = 5 * v31;
    v34 = *((_QWORD *)a2 + 2);
    v35 = *(struct D2D_VECTOR_4F *)(v34 + 4 * v33);
    HIDWORD(v87[0]) = *(_DWORD *)(v34 + 4 * v33 + 16);
    v101 = v35;
    v102 = HIDWORD(v87[0]);
    v36 = D2DVectorHelper::ClassifyPoint(&v105.x, &v101.x);
    LODWORD(v87[0]) = v36;
    if ( v38 == 1 )
    {
      if ( v39 != 2 )
        goto LABEL_26;
      v44 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)&v110,
                                               &v105,
                                               (const struct D2D_VECTOR_4F *)&v87[1],
                                               &v108,
                                               v80));
      v107 = v29;
      v106 = v44;
      if ( v43 + 1 >= v43 )
      {
        if ( v43 + 1 <= v8 )
        {
          v37 = 5LL * v43;
          *(__m128i *)&v6[4 * v37] = v44;
          *(_DWORD *)&v6[4 * v37 + 16] = v107;
          HIDWORD(v113) = v43 + 1;
          goto LABEL_17;
        }
        v45 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v111, 20, 1, &v106);
        v12 = v45;
        if ( v45 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v45, 0xC0u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v12 < 0 )
      {
        v81 = 271;
        goto LABEL_110;
      }
LABEL_17:
      v107 = 0;
      v46 = HIDWORD(v117) + 1;
      if ( (unsigned int)(HIDWORD(v117) + 1) >= HIDWORD(v117) )
      {
        if ( v46 <= (unsigned int)v117 )
        {
          v37 = v115[0];
          v47 = 5LL * HIDWORD(v117);
          *(__m128i *)(v115[0] + 4 * v47) = v106;
          *(_DWORD *)(v37 + 4 * v47 + 16) = v107;
          HIDWORD(v117) = v46;
LABEL_21:
          v40 = HIDWORD(v113);
          v8 = v113;
          v6 = (_BYTE *)v111[0];
          v30 = v108;
LABEL_26:
          if ( v40 + 1 >= v40 )
          {
            if ( v40 + 1 <= v8 )
            {
              v12 = 0;
              v49 = 5LL * v40;
              *(struct D2D_VECTOR_4F *)&v6[4 * v49] = v30;
              *(_DWORD *)&v6[4 * v49 + 16] = v109;
              HIDWORD(v113) = v40 + 1;
LABEL_33:
              ++v14;
              goto LABEL_107;
            }
            v50 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v111, 20, 1, &v108);
            v12 = v50;
            if ( v50 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v50, 0xC0u, 0LL);
          }
          else
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          if ( v12 < 0 )
          {
            v81 = 279;
            goto LABEL_110;
          }
          goto LABEL_33;
        }
        v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 20, 1, &v106);
        v12 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v48, 0xC0u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v12 < 0 )
      {
        v81 = 274;
LABEL_110:
        v74 = v12;
        goto LABEL_111;
      }
      goto LABEL_21;
    }
    if ( v38 == 2 )
    {
      if ( v39 != 1 )
        goto LABEL_51;
      v53 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)v103,
                                               &v105,
                                               (const struct D2D_VECTOR_4F *)&v87[1],
                                               &v108,
                                               v80));
      v107 = 0;
      v106 = v53;
      if ( v52 + 1 >= v52 )
      {
        if ( v52 + 1 <= v8 )
        {
          v37 = 5LL * v52;
          *(__m128i *)&v6[4 * v37] = v53;
          *(_DWORD *)&v6[4 * v37 + 16] = v107;
          HIDWORD(v113) = v52 + 1;
          goto LABEL_43;
        }
        v54 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v111, 20, 1, &v106);
        v12 = v54;
        if ( v54 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v54, 0xC0u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v12 < 0 )
      {
        v81 = 296;
        goto LABEL_110;
      }
LABEL_43:
      v107 = v29;
      v55 = HIDWORD(v117) + 1;
      if ( (unsigned int)(HIDWORD(v117) + 1) >= HIDWORD(v117) )
      {
        if ( v55 <= (unsigned int)v117 )
        {
          v37 = v115[0];
          v56 = 5LL * HIDWORD(v117);
          *(__m128i *)(v115[0] + 4 * v56) = v106;
          *(_DWORD *)(v37 + 4 * v56 + 16) = v107;
          HIDWORD(v117) = v55;
LABEL_50:
          v30 = v108;
LABEL_51:
          v58 = HIDWORD(v117) + 1;
          if ( (unsigned int)(HIDWORD(v117) + 1) >= HIDWORD(v117) )
          {
            if ( v58 <= (unsigned int)v117 )
            {
              v12 = 0;
              v59 = v115[0];
              v60 = 5LL * HIDWORD(v117);
              *(struct D2D_VECTOR_4F *)(v115[0] + 4 * v60) = v30;
              *(_DWORD *)(v59 + 4 * v60 + 16) = v109;
              HIDWORD(v117) = v58;
LABEL_58:
              ++v16;
              goto LABEL_107;
            }
            v61 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 20, 1, &v108);
            v12 = v61;
            if ( v61 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v61, 0xC0u, 0LL);
          }
          else
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          if ( v12 < 0 )
          {
            v81 = 305;
            goto LABEL_110;
          }
          goto LABEL_58;
        }
        v57 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 20, 1, &v106);
        v12 = v57;
        if ( v57 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v57, 0xC0u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v12 < 0 )
      {
        v81 = 299;
        goto LABEL_110;
      }
      goto LABEL_50;
    }
    v106 = (__m128i)v30;
    if ( v39 == 1 )
    {
      if ( v36 != 2 )
        goto LABEL_93;
      v107 = 0;
      if ( v40 + 1 >= v40 )
      {
        if ( v40 + 1 <= v8 )
        {
          v37 = 5LL * v40;
          *(struct D2D_VECTOR_4F *)&v6[4 * v37] = v30;
          *(_DWORD *)&v6[4 * v37 + 16] = v107;
          HIDWORD(v113) = v40 + 1;
LABEL_68:
          v107 = v109;
          v63 = HIDWORD(v117);
          v64 = HIDWORD(v117) + 1;
          if ( (unsigned int)(HIDWORD(v117) + 1) >= HIDWORD(v117) )
          {
            if ( v64 <= (unsigned int)v117 )
              goto LABEL_71;
            v68 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 20, 1, &v106);
            v12 = v68;
            if ( v68 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v68, 0xC0u, 0LL);
          }
          else
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          if ( v12 < 0 )
          {
            v81 = 326;
            goto LABEL_110;
          }
          goto LABEL_107;
        }
        v62 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v111, 20, 1, &v106);
        v12 = v62;
        if ( v62 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v62, 0xC0u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v12 < 0 )
      {
        v81 = 323;
        goto LABEL_110;
      }
      goto LABEL_68;
    }
    if ( v39 != 2 || v36 != 1 )
    {
LABEL_93:
      if ( v40 + 1 >= v40 )
      {
        if ( v40 + 1 > v8 )
        {
          v71 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v111, 20, 1, &v108);
          v12 = v71;
          if ( v71 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v71, 0xC0u, 0LL);
          goto LABEL_99;
        }
        v37 = 5LL * v40;
        *(struct D2D_VECTOR_4F *)&v6[4 * v37] = v30;
        *(_DWORD *)&v6[4 * v37 + 16] = v109;
        HIDWORD(v113) = v40 + 1;
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_99:
        if ( v12 < 0 )
        {
          v81 = 341;
          goto LABEL_110;
        }
      }
      v64 = HIDWORD(v117) + 1;
      if ( (unsigned int)(HIDWORD(v117) + 1) < HIDWORD(v117) )
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_106;
      }
      if ( v64 > (unsigned int)v117 )
      {
        v72 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 20, 1, &v108);
        v12 = v72;
        if ( v72 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v72, 0xC0u, 0LL);
LABEL_106:
        if ( v12 < 0 )
        {
          v81 = 342;
          goto LABEL_110;
        }
        goto LABEL_107;
      }
      v65 = v115[0];
      v66 = 5LL * HIDWORD(v117);
      *(struct D2D_VECTOR_4F *)(v115[0] + 20LL * HIDWORD(v117)) = v108;
      v67 = v109;
LABEL_72:
      *(_DWORD *)(v65 + 4 * v66 + 16) = v67;
      v12 = 0;
      HIDWORD(v117) = v64;
      goto LABEL_107;
    }
    v107 = v41;
    if ( v40 + 1 < v40 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_85;
    }
    if ( v40 + 1 > v8 )
    {
      v69 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v111, 20, 1, &v106);
      v12 = v69;
      if ( v69 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v69, 0xC0u, 0LL);
LABEL_85:
      if ( v12 < 0 )
      {
        v81 = 334;
        goto LABEL_110;
      }
      goto LABEL_86;
    }
    v37 = 5LL * v40;
    *(struct D2D_VECTOR_4F *)&v6[4 * v37] = v30;
    *(_DWORD *)&v6[4 * v37 + 16] = v107;
    HIDWORD(v113) = v40 + 1;
LABEL_86:
    v63 = HIDWORD(v117);
    v107 = 0;
    v64 = HIDWORD(v117) + 1;
    if ( (unsigned int)(HIDWORD(v117) + 1) >= HIDWORD(v117) )
    {
      if ( v64 <= (unsigned int)v117 )
      {
LABEL_71:
        v65 = v115[0];
        v66 = 5 * v63;
        *(__m128i *)(v115[0] + 20 * v63) = v106;
        v67 = v107;
        goto LABEL_72;
      }
      v70 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 20, 1, &v106);
      v12 = v70;
      if ( v70 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v70, 0xC0u, 0LL);
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( v12 < 0 )
    {
      v81 = 337;
      goto LABEL_110;
    }
LABEL_107:
    v30 = v35;
    v29 = v109;
    v31 = (unsigned int)(HIDWORD(v83) + 1);
    v73 = (unsigned int)v83;
    v83 = __PAIR64__(v31, v87[0]);
    *(struct D2D_VECTOR_4F *)&v87[1] = v108;
    LODWORD(v88) = v109;
    v108 = v35;
    v109 = HIDWORD(v87[0]);
    if ( (unsigned int)v31 >= *((_DWORD *)a2 + 10) )
      break;
    v8 = v113;
    v6 = (_BYTE *)v111[0];
  }
  if ( !v14 )
  {
    if ( v16 )
      goto LABEL_122;
LABEL_134:
    *(_DWORD *)a3 = 0;
    goto LABEL_135;
  }
  if ( v16 )
  {
LABEL_122:
    if ( !v14 )
    {
      *(_DWORD *)a3 = 2;
      goto LABEL_135;
    }
    *(_DWORD *)a3 = 3;
    v75 = CPolygon::Create(v111, a2, &v85, v73);
    v12 = v75;
    if ( v75 < 0 )
    {
      v81 = 376;
    }
    else
    {
      v75 = CPolygon::Create(v115, a2, &v86, v76);
      v12 = v75;
      if ( v75 >= 0 )
      {
        v77 = v85;
        v85 = 0LL;
        *v89 = (struct CPolygon *)v77;
        v78 = v86;
        v86 = 0LL;
        *v90 = (struct CPolygon *)v78;
        goto LABEL_135;
      }
      v81 = 377;
    }
    v74 = v75;
LABEL_111:
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v74, v81, 0LL);
    goto LABEL_135;
  }
  *(_DWORD *)a3 = 1;
LABEL_135:
  ReleaseInterface<CPolygon>(&v85);
  ReleaseInterface<CPolygon>(&v86);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v115);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v111);
  return (unsigned int)v12;
}
