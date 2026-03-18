/*
 * XREFs of ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006B960
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006C130 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180069EDC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ?Attach@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z @ 0x18006C0DC (-Attach@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800B7D2C (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2)
{
  unsigned int v4; // ebx
  struct ID2D1Geometry *v5; // rsi
  __int64 v6; // r9
  float *v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  float v10; // xmm6_4
  unsigned int v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm8_4
  unsigned int v14; // xmm9_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  int v19; // xmm4_4
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r15d
  int *v25; // r14
  int v26; // eax
  unsigned int v27; // ecx
  struct ID2D1Geometry *v28; // rbx
  __int64 (__fastcall *v29)(struct ID2D1Geometry *, __int64 *); // rdi
  int v30; // eax
  unsigned int v31; // ecx
  struct ID2D1Geometry *v32; // rdi
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, __int64 *); // rdi
  int v42; // eax
  unsigned int v43; // ecx
  float v44; // xmm0_4
  float v45; // xmm0_4
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  struct ID2D1Geometry *v50; // rbx
  __int64 (__fastcall *v51)(struct ID2D1Geometry *, __int64 *); // rdi
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // ecx
  struct ID2D1Geometry *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  struct ID2D1Geometry **v61; // rcx
  __int64 v62; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v66; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+70h] [rbp-98h]
  __int64 v68; // [rsp+78h] [rbp-90h]
  __int64 v69; // [rsp+80h] [rbp-88h]
  __int64 v70; // [rsp+88h] [rbp-80h]
  __int128 v71; // [rsp+90h] [rbp-78h]
  __int64 v72; // [rsp+A8h] [rbp-60h] BYREF
  float v73; // [rsp+B0h] [rbp-58h]
  float v74; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-50h] BYREF
  float v76; // [rsp+C0h] [rbp-48h]
  float v77; // [rsp+C4h] [rbp-44h]
  __int128 v78; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v79; // [rsp+D8h] [rbp-30h]
  float v80; // [rsp+E8h] [rbp-20h] BYREF
  float v81[5]; // [rsp+ECh] [rbp-1Ch]
  float v82; // [rsp+100h] [rbp-8h]
  float v83; // [rsp+104h] [rbp-4h]
  float v84; // [rsp+128h] [rbp+20h]
  int v85; // [rsp+12Ch] [rbp+24h]
  float v86; // [rsp+140h] [rbp+38h]
  int v87; // [rsp+144h] [rbp+3Ch]

  v66 = 0LL;
  v4 = 0;
  v5 = 0LL;
  `vector constructor iterator'(&v80, 8uLL, 0x14uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct CMilPoint2F *)&v80);
  CRoundedRectangleGeometryData::GetBaseRect(*((_QWORD *)this + 2) + 16LL, &v75);
  v7 = (float *)(v6 + 32);
  v8 = -(__int64)(*(_BYTE *)(v6 + 68) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = -(__int64)(*(_BYTE *)(v6 + 68) != 0) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !*(_BYTE *)(v6 + 68) )
    v7 = (float *)(v6 + 56);
  v10 = v76;
  v11 = v75;
  v12 = fmaxf(*(float *)(v6 + 36), *(float *)(v8 + v6 + 44));
  v13 = v77;
  v14 = HIDWORD(v75);
  v15 = fminf(*(float *)&v75, v76 - fmaxf(*(float *)(v8 + v6 + 40), *(float *)(v9 + v6 + 48)));
  v16 = v77 - fmaxf(v7[1], *(float *)(v9 + v6 + 52));
  v17 = fmaxf(v76, fmaxf(*(float *)(v6 + 32), *v7) + *(float *)&v75);
  *(float *)&v72 = v15;
  v18 = fminf(*((float *)&v75 + 1), v16);
  v73 = v17;
  v74 = fmaxf(v77, v12 + *((float *)&v75 + 1));
  *((float *)&v72 + 1) = v18;
  if ( operator!=((float *)&v72, (float *)&v75) )
  {
    v75 = __PAIR64__(v14, v11);
    v76 = v10;
    v77 = v13;
    v62 = 0LL;
    v80 = v15;
    v81[0] = v18;
    v82 = v17;
    v83 = v18;
    v84 = v15;
    v85 = v19;
    v86 = v17;
    v87 = v19;
    v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(*g_DeviceManager + 40LL))(
            g_DeviceManager,
            &v75,
            &v62);
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x278u, 0LL);
      v59 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      }
      goto LABEL_18;
    }
    v22 = v62;
    v62 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach(&v66, v22);
    v23 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v5 = v66;
  }
  v24 = 0;
  v25 = (int *)&unk_180364E44;
  while ( !(unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(
                              *((_QWORD *)this + 2) + 16LL,
                              (unsigned int)v24) )
  {
LABEL_10:
    ++v24;
    v25 += 7;
    if ( v24 >= 4 )
    {
      if ( *(float *)(*((_QWORD *)this + 2) + 64LL) > 0.0 )
      {
        v63 = 0LL;
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v63);
        v26 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(*g_DeviceManager + 80LL))(
                g_DeviceManager,
                &v63);
        v4 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x2B8u, 0LL);
        }
        else
        {
          v28 = v63;
          v62 = 0LL;
          v29 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v63 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
          v30 = v29(v28, &v62);
          v4 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x2BBu, 0LL);
          }
          else
          {
            v32 = v5;
            v33 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
            v4 = v33;
            if ( v33 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x2C0u, 0LL);
            }
            else
            {
              v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 72LL))(v62);
              v4 = v35;
              if ( v35 >= 0 )
              {
                v5 = v63;
                v66 = v63;
                Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v66);
                v66 = v32;
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v66);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v63);
                goto LABEL_17;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x2C1u, 0LL);
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
        }
        v61 = &v63;
        goto LABEL_45;
      }
LABEL_17:
      v66 = 0LL;
      *a2 = v5;
      goto LABEL_18;
    }
  }
  v63 = (struct ID2D1Geometry *)*(v25 - 1);
  v67 = *v25;
  v68 = v25[1];
  v69 = v25[2];
  v70 = v25[3];
  v72 = v25[4];
  v75 = v25[5];
  v65 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v65);
  v38 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v65);
  v4 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x28Au, 0LL);
    goto LABEL_42;
  }
  v40 = v65;
  v64 = 0LL;
  v41 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v65 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v64);
  v42 = v41(v40, &v64);
  v4 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x28Du, 0LL);
    goto LABEL_40;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v64 + 40LL))(
    v64,
    _mm_unpacklo_ps((__m128)LODWORD(v81[2 * (_QWORD)v63 - 1]), (__m128)LODWORD(v81[2 * (_QWORD)v63])).m128_u64[0],
    0LL);
  v44 = v81[2 * v67 - 1];
  *((float *)&v71 + 1) = v81[2 * v67];
  *(float *)&v71 = v44;
  v45 = v81[2 * v68 - 1];
  *((float *)&v71 + 3) = v81[2 * v68];
  *((float *)&v71 + 2) = v45;
  v79 = _mm_unpacklo_ps((__m128)LODWORD(v81[2 * v69 - 1]), (__m128)LODWORD(v81[2 * v69])).m128_u64[0];
  v78 = v71;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v64 + 88LL))(v64, &v78);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v64 + 80LL))(
    v64,
    _mm_unpacklo_ps((__m128)LODWORD(v81[2 * v70 - 1]), (__m128)LODWORD(v81[2 * v70])).m128_u64[0]);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v64 + 80LL))(
    v64,
    _mm_unpacklo_ps((__m128)LODWORD(v81[2 * v72 - 1]), (__m128)LODWORD(v81[2 * v72])).m128_u64[0]);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v64 + 80LL))(
    v64,
    _mm_unpacklo_ps((__m128)LODWORD(v81[2 * v75 - 1]), (__m128)LODWORD(v81[2 * v75])).m128_u64[0]);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 64LL))(v64, 1LL);
  v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 72LL))(v64);
  v4 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x296u, 0LL);
    goto LABEL_40;
  }
  if ( !v5 )
  {
    v60 = v65;
    v65 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach(&v66, v60);
LABEL_28:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v65);
    v5 = v66;
    goto LABEL_10;
  }
  v63 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v63);
  v48 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(*g_DeviceManager + 80LL))(g_DeviceManager, &v63);
  v4 = v48;
  if ( v48 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x2A0u, 0LL);
    goto LABEL_37;
  }
  v50 = v63;
  v62 = 0LL;
  v51 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v63 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
  v52 = v51(v50, &v62);
  v4 = v52;
  if ( v52 >= 0 )
  {
    v54 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64, __int64, _QWORD, _DWORD, __int64))(*(_QWORD *)v5 + 88LL))(
            v5,
            v65,
            1LL,
            0LL,
            0,
            v62);
    v4 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x2ABu, 0LL);
      goto LABEL_35;
    }
    v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 72LL))(v62);
    v4 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x2ADu, 0LL);
      goto LABEL_35;
    }
    v58 = v63;
    v63 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach(&v66, v58);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v63);
    goto LABEL_28;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x2A3u, 0LL);
LABEL_35:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
LABEL_37:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v63);
LABEL_40:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v64);
LABEL_42:
  v61 = (struct ID2D1Geometry **)&v65;
LABEL_45:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v61);
LABEL_18:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v66);
  return v4;
}
