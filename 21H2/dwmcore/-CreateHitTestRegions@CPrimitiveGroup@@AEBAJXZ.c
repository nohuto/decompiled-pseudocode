/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800117D8
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800117AC (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180011BB0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180011E70 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180011E94 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquen.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x180011ED8 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18001E644 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18006356C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063748 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x1800DB0F0 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x180231D70 (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  char v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r10d
  __int64 v12; // rsi
  char v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  char *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  float *v20; // rcx
  unsigned int v21; // r11d
  int v22; // r8d
  int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // edx
  int D2DGeometry; // eax
  unsigned int v28; // ecx
  _BYTE *v30; // rax
  const struct MilRectF *v31; // r9
  float *v32; // rcx
  __int64 v33; // r9
  const struct MilRectF *v34; // r10
  unsigned int v35; // r11d
  unsigned int v36; // ecx
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  int v39; // r8d
  __m128 v40; // xmm2
  __m128 v41; // xmm1
  int v42; // edx
  __m128 v43; // xmm2
  __m128 v44; // xmm1
  int v45; // eax
  __m128 v46; // xmm2
  __m128 v47; // xmm1
  unsigned int v48; // edx
  __int128 v49; // xmm0
  __int64 v50; // rcx
  int v51; // eax
  int v52; // esi
  FLOAT v53; // xmm2_4
  unsigned int v54; // xmm0_4
  unsigned int v55; // xmm1_4
  struct D2D_POINT_2F *v56; // rax
  FLOAT v57; // xmm2_4
  __int64 v58; // rdx
  unsigned int v59; // xmm0_4
  FLOAT v60; // xmm3_4
  FLOAT *v61; // r9
  __int64 v62; // r10
  unsigned int v63; // r11d
  float v64; // xmm0_4
  int v65; // r8d
  __m128 v66; // xmm2
  __m128 v67; // xmm1
  float v68; // xmm0_4
  int v69; // edx
  __m128 v70; // xmm2
  __m128 v71; // xmm1
  float v72; // xmm0_4
  unsigned int v73; // ecx
  __m128 v74; // xmm2
  __m128 v75; // xmm1
  float v76; // xmm0_4
  int v77; // eax
  __m128 v78; // xmm2
  __m128 v79; // xmm1
  int v80; // eax
  int v81; // eax
  int v82; // r9d
  int v83; // edi
  __m128 v84; // xmm2
  __m128 v85; // xmm1
  __m128 v86; // xmm2
  __m128 v87; // xmm1
  __m128 v88; // xmm2
  __m128 v89; // xmm1
  __m128 v90; // xmm2
  __m128 v91; // xmm1
  int v92; // eax
  unsigned int v93; // ecx
  struct D2D_POINT_2F *v94; // rax
  FLOAT v95; // xmm2_4
  unsigned int v96; // xmm0_4
  unsigned int v97; // xmm1_4
  __int64 v98; // rdx
  FLOAT v99; // xmm3_4
  unsigned int v100; // [rsp+28h] [rbp-E0h]
  float v101; // [rsp+38h] [rbp-D0h]
  float v102; // [rsp+38h] [rbp-D0h]
  float v103; // [rsp+38h] [rbp-D0h]
  float v104; // [rsp+38h] [rbp-D0h]
  float v105; // [rsp+38h] [rbp-D0h]
  float v106; // [rsp+38h] [rbp-D0h]
  float v107; // [rsp+38h] [rbp-D0h]
  float v108; // [rsp+38h] [rbp-D0h]
  float v109; // [rsp+38h] [rbp-D0h]
  float v110; // [rsp+38h] [rbp-D0h]
  float v111; // [rsp+38h] [rbp-D0h]
  float v112; // [rsp+38h] [rbp-D0h]
  char v113; // [rsp+40h] [rbp-C8h]
  __int64 v114; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1GeometrySink *v115; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v116; // [rsp+58h] [rbp-B0h]
  unsigned int v117; // [rsp+5Ch] [rbp-ACh]
  __int128 v118; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v119; // [rsp+70h] [rbp-98h] BYREF
  __int128 v120; // [rsp+80h] [rbp-88h] BYREF
  __int128 v121; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v122[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v123; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v124; // [rsp+100h] [rbp-8h]
  _QWORD v125[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v126; // [rsp+11Ch] [rbp+14h]
  unsigned int v127; // [rsp+120h] [rbp+18h]
  struct D2D_POINT_2F v128; // [rsp+228h] [rbp+120h] BYREF
  unsigned int v129; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v131; // [rsp+238h] [rbp+130h]
  FLOAT v132; // [rsp+240h] [rbp+138h]
  unsigned int v133; // [rsp+244h] [rbp+13Ch]

  v2 = 0;
  v3 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(v125);
  v114 = 0LL;
  v115 = 0LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 88);
  ReleaseInterface<ID2D1Geometry>((char *)this + 96);
  v5 = *((_QWORD *)this + 63);
  v6 = v5 + *((_QWORD *)this + 64);
  while ( v5 < v6 )
  {
    v30 = (_BYTE *)(v5 + 16);
    v31 = (const struct MilRectF *)v5;
    v5 += 17LL;
    if ( (unsigned __int64)v30 > v6 || v5 > v6 )
    {
      v100 = 947;
      goto LABEL_108;
    }
    if ( *v30 )
    {
      v4 = v5;
      v5 += 24LL;
      if ( v5 > v6 )
      {
        v100 = 958;
LABEL_108:
        v82 = -2147467259;
        v3 = -2147467259;
        goto LABEL_111;
      }
      if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)v4) )
      {
        v119 = 0LL;
        MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v32, v34, (struct MilRectF *)&v119);
        if ( !IsPixelAligned((const struct MilRectF *)&v119) )
        {
          v53 = *(float *)&v119;
          v54 = DWORD2(v119);
          v128.y = *((FLOAT *)&v119 + 1);
          y = *((float *)&v119 + 1);
          v55 = HIDWORD(v119);
LABEL_90:
          v133 = v55;
          v132 = v53;
          v131 = __PAIR64__(v55, v54);
          v129 = v54;
          v128.x = v53;
          goto LABEL_91;
        }
        if ( (v35 & HIDWORD(v119)) > 0x497FFFF0 )
        {
          v37 = 0LL;
          v38.m128_f32[0] = -0.5;
          v37.m128_f32[0] = (float)(int)*((float *)&v119 + 3) - *((float *)&v119 + 3);
          v36 = (int)*((float *)&v119 + 3) - _mm_cmple_ss(v37, v38).m128_u32[0];
        }
        else
        {
          v105 = *((float *)&v119 + 3) + 6291456.25;
          v36 = (int)(LODWORD(v105) << 10) >> 11;
        }
        if ( (v35 & DWORD2(v119)) > 0x497FFFF0 )
        {
          v40 = 0LL;
          v41.m128_f32[0] = -0.5;
          v40.m128_f32[0] = (float)(int)*((float *)&v119 + 2) - *((float *)&v119 + 2);
          v39 = (int)*((float *)&v119 + 2) - _mm_cmple_ss(v40, v41).m128_u32[0];
        }
        else
        {
          v106 = *((float *)&v119 + 2) + 6291456.25;
          v39 = (int)(LODWORD(v106) << 10) >> 11;
        }
        if ( (v35 & DWORD1(v119)) > 0x497FFFF0 )
        {
          v43 = 0LL;
          v44.m128_f32[0] = -0.5;
          v43.m128_f32[0] = (float)(int)*((float *)&v119 + 1) - *((float *)&v119 + 1);
          v42 = (int)*((float *)&v119 + 1) - _mm_cmple_ss(v43, v44).m128_u32[0];
        }
        else
        {
          v107 = *((float *)&v119 + 1) + 6291456.25;
          v42 = (int)(LODWORD(v107) << 10) >> 11;
        }
        if ( (v35 & (unsigned int)v119) > 0x497FFFF0 )
        {
          v46 = 0LL;
          v47.m128_f32[0] = -0.5;
          v46.m128_f32[0] = (float)(int)*(float *)&v119 - *(float *)&v119;
          v45 = (int)*(float *)&v119 - _mm_cmple_ss(v46, v47).m128_u32[0];
        }
        else
        {
          v108 = *(float *)&v119 + 6291456.25;
          v45 = (int)(LODWORD(v108) << 10) >> 11;
        }
        *(_QWORD *)&v118 = __PAIR64__(v42, v45);
        *((_QWORD *)&v118 + 1) = __PAIR64__(v36, v39);
        v48 = v127 + 1;
        if ( v127 + 1 < v127 )
        {
          v3 = -2147024362;
          v52 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024362, 0xB5u, 0LL);
          goto LABEL_97;
        }
        if ( v48 <= v126 )
        {
          v49 = v118;
          v50 = v127;
          goto LABEL_64;
        }
        v51 = DynArrayImpl<0>::AddMultipleAndSet(v125, 16LL, 1LL, &v118);
        v52 = v51;
        v3 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v51, 0xC0u, 0LL);
LABEL_97:
          v100 = 977;
          goto LABEL_100;
        }
      }
      else
      {
        v56 = &v128;
        v57 = *(float *)v33;
        v58 = 4LL;
        v59 = *(_DWORD *)(v33 + 8);
        v128.y = *(FLOAT *)(v33 + 4);
        y = v128.y;
        HIDWORD(v131) = *(_DWORD *)(v33 + 12);
        v133 = HIDWORD(v131);
        v128.x = v57;
        v129 = v59;
        LODWORD(v131) = v59;
        v132 = v57;
        do
        {
          v60 = (float)((float)(v56->x * v32[1]) + (float)(v56->y * v32[3])) + v32[5];
          v56->x = (float)((float)(v56->x * *v32) + (float)(v56->y * v32[2])) + v32[4];
          v56->y = v60;
          ++v56;
          --v58;
        }
        while ( v58 );
LABEL_91:
        if ( !v114 )
        {
          v81 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v114);
          v3 = v81;
          if ( v81 < 0 )
          {
            v100 = 1053;
            goto LABEL_105;
          }
          v81 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v114 + 136LL))(v114, &v115);
          v3 = v81;
          if ( v81 < 0 )
          {
            v100 = 1055;
            goto LABEL_105;
          }
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v115 + 24LL))(v115, 1LL);
        }
        CPrimitiveGroup::AddFilledPolygonToD2DSink(v115, &v128);
      }
    }
    else
    {
      if ( !IsPixelAligned(v31) )
      {
        v53 = *v61;
        v54 = *((_DWORD *)v61 + 2);
        v128.y = v61[1];
        y = v128.y;
        v55 = *(_DWORD *)(v62 + 12);
        goto LABEL_90;
      }
      v64 = *(float *)(v62 + 12);
      if ( (v63 & LODWORD(v64)) > 0x497FFFF0 )
      {
        v66 = 0LL;
        v67.m128_f32[0] = -0.5;
        v66.m128_f32[0] = (float)(int)v64 - v64;
        v65 = (int)v64 - _mm_cmple_ss(v66, v67).m128_u32[0];
      }
      else
      {
        v109 = v64 + 6291456.25;
        v65 = (int)(LODWORD(v109) << 10) >> 11;
      }
      v68 = v61[2];
      if ( (v63 & LODWORD(v68)) > 0x497FFFF0 )
      {
        v70 = 0LL;
        v71.m128_f32[0] = -0.5;
        v70.m128_f32[0] = (float)(int)v68 - v68;
        v69 = (int)v68 - _mm_cmple_ss(v70, v71).m128_u32[0];
      }
      else
      {
        v110 = v68 + 6291456.25;
        v69 = (int)(LODWORD(v110) << 10) >> 11;
      }
      v72 = v61[1];
      if ( (v63 & LODWORD(v72)) > 0x497FFFF0 )
      {
        v74 = 0LL;
        v75.m128_f32[0] = -0.5;
        v74.m128_f32[0] = (float)(int)v72 - v72;
        v73 = (int)v72 - _mm_cmple_ss(v74, v75).m128_u32[0];
      }
      else
      {
        v111 = v72 + 6291456.25;
        v73 = (int)(LODWORD(v111) << 10) >> 11;
      }
      v76 = *v61;
      if ( (v63 & *(_DWORD *)v61) > 0x497FFFF0 )
      {
        v78 = 0LL;
        v79.m128_f32[0] = -0.5;
        v78.m128_f32[0] = (float)(int)v76 - v76;
        v77 = (int)v76 - _mm_cmple_ss(v78, v79).m128_u32[0];
      }
      else
      {
        v112 = v76 + 6291456.25;
        v77 = (int)(LODWORD(v112) << 10) >> 11;
      }
      *((_QWORD *)&v120 + 1) = __PAIR64__(v65, v69);
      *(_QWORD *)&v120 = __PAIR64__(v73, v77);
      v48 = v127 + 1;
      if ( v127 + 1 < v127 )
      {
        v3 = -2147024362;
        v52 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_99:
        v100 = 1028;
LABEL_100:
        v82 = v52;
        goto LABEL_111;
      }
      if ( v48 <= v126 )
      {
        v49 = v120;
        v50 = v127;
LABEL_64:
        v4 = 2 * v50;
        v3 = 0;
        *(_OWORD *)(v125[0] + 8 * v4) = v49;
        v127 = v48;
      }
      else
      {
        v80 = DynArrayImpl<0>::AddMultipleAndSet(v125, 16LL, 1LL, &v120);
        v52 = v80;
        v3 = v80;
        if ( v80 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v80, 0xC0u, 0LL);
          goto LABEL_99;
        }
      }
    }
  }
  v7 = *((_QWORD *)this + 59);
  v8 = 0;
  v9 = *((_DWORD *)this + 120);
  v10 = 0;
  *(_QWORD *)&v119 = v7;
  v117 = v9;
  while ( 1 )
  {
    v11 = v10 + 144;
    v116 = v10 + 144;
    if ( v10 + 144 > v9 )
    {
      if ( v115 )
      {
        v81 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v115 + 72LL))(v115);
        v3 = v81;
        if ( v81 < 0 )
        {
          v100 = 1201;
          goto LABEL_105;
        }
        *((_QWORD *)this + 12) = v114;
        v114 = 0LL;
      }
      if ( v127 )
      {
        v122[0] = &CRegionShape::`vftable';
        v122[1] = 0LL;
        v122[2] = &v123;
        v123 = 0;
        v124 = 0LL;
        CRegionShape::BuildFromRects(v122, v125[0], v127);
        D2DGeometry = CRegionShape::GetD2DGeometry((CRegionShape *)v122, 0LL, (struct ID2D1Geometry **)this + 11);
        v3 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, D2DGeometry, 0x4C2u, 0LL);
          CRegionShape::~CRegionShape((CRegionShape *)v122);
          goto LABEL_37;
        }
        CRegionShape::~CRegionShape((CRegionShape *)v122);
      }
      *((_BYTE *)this + 104) = 1;
      goto LABEL_37;
    }
    v12 = v7 + v10;
    v4 = *(unsigned int *)(v12 + 16);
    if ( (*(_BYTE *)(v12 + 4) & 0x20) != 0 && (_DWORD)v4 != *((_DWORD *)this + 109) )
      break;
    v113 = 0;
    v13 = 0;
    if ( !v8 && (*(_BYTE *)(v12 + 4) & 2) == 0 )
      goto LABEL_8;
LABEL_29:
    v9 = v117;
    if ( (*(_BYTE *)(v12 + 4) & 0x20) != 0 )
      v8 = v13;
    v10 = v11;
  }
  v113 = 1;
LABEL_8:
  v14 = *((_QWORD *)this + 62);
  if ( v4 >= v14
    || (v15 = 148LL * *(unsigned int *)(v12 + 20), v15 > 0xFFFFFFFF)
    || (v16 = (unsigned int)(v15 + v4), (unsigned int)v16 < (unsigned int)v15)
    || v16 > v14 )
  {
    v100 = 1100;
    goto LABEL_108;
  }
  v17 = (char *)(v4 + *((_QWORD *)this + 61));
  *(_QWORD *)&v120 = v17;
  while ( 2 )
  {
    v18 = v2;
    v2 += 148;
    if ( v2 > (unsigned int)v15 )
    {
      v13 = v113;
      v2 = 0;
      v11 = v116;
      v7 = v119;
      goto LABEL_29;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)&v17[v18 + 16]) )
    {
      v118 = 0LL;
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v20, (const struct MilRectF *)v19, (struct MilRectF *)&v118);
      if ( IsPixelAligned((const struct MilRectF *)&v118) )
      {
        if ( (v21 & HIDWORD(v118)) > 0x497FFFF0 )
        {
          v84 = 0LL;
          v85.m128_f32[0] = -0.5;
          v84.m128_f32[0] = (float)(int)*((float *)&v118 + 3) - *((float *)&v118 + 3);
          v22 = (int)*((float *)&v118 + 3) - _mm_cmple_ss(v84, v85).m128_u32[0];
        }
        else
        {
          v101 = *((float *)&v118 + 3) + 6291456.25;
          v22 = (int)(LODWORD(v101) << 10) >> 11;
        }
        if ( (v21 & DWORD2(v118)) > 0x497FFFF0 )
        {
          v86 = 0LL;
          v87.m128_f32[0] = -0.5;
          v86.m128_f32[0] = (float)(int)*((float *)&v118 + 2) - *((float *)&v118 + 2);
          v23 = (int)*((float *)&v118 + 2) - _mm_cmple_ss(v86, v87).m128_u32[0];
        }
        else
        {
          v102 = *((float *)&v118 + 2) + 6291456.25;
          v23 = (int)(LODWORD(v102) << 10) >> 11;
        }
        if ( (v21 & DWORD1(v118)) > 0x497FFFF0 )
        {
          v88 = 0LL;
          v89.m128_f32[0] = -0.5;
          v88.m128_f32[0] = (float)(int)*((float *)&v118 + 1) - *((float *)&v118 + 1);
          v24 = (int)*((float *)&v118 + 1) - _mm_cmple_ss(v88, v89).m128_u32[0];
        }
        else
        {
          v103 = *((float *)&v118 + 1) + 6291456.25;
          v24 = (int)(LODWORD(v103) << 10) >> 11;
        }
        if ( (v21 & (unsigned int)v118) > 0x497FFFF0 )
        {
          v90 = 0LL;
          v91.m128_f32[0] = -0.5;
          v90.m128_f32[0] = (float)(int)*(float *)&v118 - *(float *)&v118;
          v25 = (int)*(float *)&v118 - _mm_cmple_ss(v90, v91).m128_u32[0];
        }
        else
        {
          v104 = *(float *)&v118 + 6291456.25;
          v25 = (int)(LODWORD(v104) << 10) >> 11;
        }
        LODWORD(v121) = v25;
        *(_QWORD *)((char *)&v121 + 4) = __PAIR64__(v23, v24);
        HIDWORD(v121) = v22;
        v26 = v127 + 1;
        if ( v127 + 1 < v127 )
        {
          v3 = -2147024362;
          v83 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_110:
          v82 = v83;
          v100 = 1130;
          goto LABEL_111;
        }
        if ( v26 > v126 )
        {
          v92 = DynArrayImpl<0>::AddMultipleAndSet(v125, 16LL, 1LL, &v121);
          v83 = v92;
          v3 = v92;
          if ( v92 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0xC0u, 0LL);
            goto LABEL_110;
          }
        }
        else
        {
          v3 = 0;
          *(_OWORD *)(v125[0] + 16LL * v127) = v121;
          v127 = v26;
        }
        goto LABEL_27;
      }
      y = *((float *)&v118 + 1);
      v133 = HIDWORD(v118);
      v128 = (struct D2D_POINT_2F)v118;
      v129 = DWORD2(v118);
      v131 = *((_QWORD *)&v118 + 1);
      v132 = *(float *)&v118;
    }
    else
    {
      v94 = &v128;
      v95 = *(float *)v19;
      v96 = *(_DWORD *)(v19 + 8);
      v128.y = *(FLOAT *)(v19 + 4);
      y = v128.y;
      v97 = *(_DWORD *)(v19 + 12);
      v98 = 4LL;
      v133 = v97;
      v128.x = v95;
      v129 = v96;
      v131 = __PAIR64__(v97, v96);
      v132 = v95;
      do
      {
        v99 = (float)((float)(v94->x * v20[1]) + (float)(v94->y * v20[3])) + v20[5];
        v94->x = (float)((float)(v94->x * *v20) + (float)(v94->y * v20[2])) + v20[4];
        v94->y = v99;
        ++v94;
        --v98;
      }
      while ( v98 );
    }
    if ( v114 )
    {
LABEL_127:
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v115, &v128);
LABEL_27:
      v17 = (char *)v120;
      continue;
    }
    break;
  }
  v81 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v114);
  v3 = v81;
  if ( v81 >= 0 )
  {
    v81 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v114 + 136LL))(v114, &v115);
    v3 = v81;
    if ( v81 < 0 )
    {
      v100 = 1179;
      goto LABEL_105;
    }
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v115 + 24LL))(v115, 1LL);
    goto LABEL_127;
  }
  v100 = 1177;
LABEL_105:
  v82 = v81;
LABEL_111:
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v82, v100, 0LL);
LABEL_37:
  if ( v115 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v115 + 16LL))(v115);
  if ( v114 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 16LL))(v114);
  DynArrayImpl<1>::~DynArrayImpl<1>(v125);
  return v3;
}
