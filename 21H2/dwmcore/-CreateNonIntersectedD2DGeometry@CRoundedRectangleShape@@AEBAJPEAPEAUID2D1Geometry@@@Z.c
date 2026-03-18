/*
 * XREFs of ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006C130 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?IsFlattenedShape@SharedData@CRoundedRectangleShape@@QEBA_NXZ @ 0x1800B7D14 (-IsFlattenedShape@SharedData@CRoundedRectangleShape@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCornerRadius@CRoundedRectangleGeometryData@@QEBAAEBUD2D_VECTOR_2F@@W4RoundedCornerIndex@@@Z @ 0x1800D6F68 (-GetCornerRadius@CRoundedRectangleGeometryData@@QEBAAEBUD2D_VECTOR_2F@@W4RoundedCornerIndex@@@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800D960C (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800F5A24 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?CreateGeometryFromDwmRoundedRectangle@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@UD2D_VECTOR_2F@@111PEAPEAUID2D1Geometry@@@Z @ 0x180103710 (-CreateGeometryFromDwmRoundedRectangle@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@UD2D_VECTOR_2F@@111PEAP.c)
 *     ?SupportsPrivateRoundedRectGeometry@CD2DFactory@@QEBA_NXZ @ 0x180103770 (-SupportsPrivateRoundedRectGeometry@CD2DFactory@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(
        CRoundedRectangleShape::SharedData **this,
        struct ID2D1Geometry **a2)
{
  unsigned int v4; // ebx
  CD2DFactory *v5; // rcx
  __int64 v6; // r11
  CRoundedRectangleGeometryData *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  unsigned int *CornerRadius; // rax
  __m128 v13; // xmm8
  __m128 v14; // xmm9
  __int64 v15; // rcx
  unsigned int *v16; // rax
  __m128 v17; // xmm6
  __m128 v18; // xmm7
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int *v21; // rax
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __int64 v24; // rcx
  const struct D2D_RECT_F *BaseRect; // rax
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  CD2DFactory *v28; // rcx
  int GeometryFromDwmRoundedRectangle; // eax
  unsigned int v30; // ecx
  CD2DFactory *v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r11
  int v34; // eax
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, CD2DFactory **); // rdi
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  CD2DFactory *v44; // [rsp+48h] [rbp-49h] BYREF
  __int128 v45; // [rsp+50h] [rbp-41h] BYREF
  __int128 v46; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v47[16]; // [rsp+70h] [rbp-21h] BYREF

  v4 = 0;
  if ( CRoundedRectangleShape::SharedData::IsFlattenedShape(this[2]) )
    goto LABEL_5;
  if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v6 + 16)) )
  {
    if ( CRoundedRectangleGeometryData::IsEllipse(v7) )
    {
      CRoundedRectangleGeometryData::GetBaseRect(v32, &v45);
      *((float *)&v46 + 1) = (float)(*((float *)&v45 + 1) + *((float *)&v45 + 3)) * 0.5;
      *(float *)&v46 = (float)(*(float *)&v45 + *((float *)&v45 + 2)) * 0.5;
      *((_QWORD *)&v46 + 1) = *(_QWORD *)(v33 + 32);
      v44 = 0LL;
      v34 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, CD2DFactory **))(*g_DeviceManager + 56LL))(
              g_DeviceManager,
              &v46,
              &v44);
      v4 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v34, 0x185u, 0LL);
        goto LABEL_11;
      }
      *a2 = v44;
    }
LABEL_5:
    if ( !*a2 )
    {
      if ( !CD2DFactory::SupportsPrivateRoundedRectGeometry(v5)
        || CRoundedRectangleShape::SharedData::IsFlattenedShape(this[2]) )
      {
        *(_QWORD *)&v45 = 0LL;
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v45);
        v35 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v45);
        v4 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x19Du, 0LL);
        }
        else
        {
          v37 = v45;
          v44 = 0LL;
          v38 = *(__int64 (__fastcall **)(__int64, CD2DFactory **))(*(_QWORD *)v45 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
          v39 = v38(v37, &v44);
          v4 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x1A0u, 0LL);
          }
          else
          {
            CRoundedRectangleShape::AddNonIntersectedD2DGeometry((CRoundedRectangleShape *)this, v44);
            v41 = (*(__int64 (__fastcall **)(CD2DFactory *))(*(_QWORD *)v44 + 72LL))(v44);
            v4 = v41;
            if ( v41 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x1A2u, 0LL);
            }
            else
            {
              *a2 = (struct ID2D1Geometry *)v45;
              *(_QWORD *)&v45 = 0LL;
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v45);
      }
      else
      {
        CornerRadius = (unsigned int *)CRoundedRectangleGeometryData::GetCornerRadius(v11 + 16, 3LL);
        v13 = (__m128)*CornerRadius;
        v14 = (__m128)CornerRadius[1];
        v16 = (unsigned int *)CRoundedRectangleGeometryData::GetCornerRadius(v15, 2LL);
        v17 = (__m128)*v16;
        v18 = (__m128)v16[1];
        CRoundedRectangleGeometryData::GetCornerRadius(v19, 1LL);
        v21 = (unsigned int *)CRoundedRectangleGeometryData::GetCornerRadius(v20, 0LL);
        v22 = (__m128)*v21;
        v23 = (__m128)v21[1];
        BaseRect = (const struct D2D_RECT_F *)CRoundedRectangleGeometryData::GetBaseRect(v24, v47);
        GeometryFromDwmRoundedRectangle = CD2DFactory::CreateGeometryFromDwmRoundedRectangle(
                                            v28,
                                            BaseRect,
                                            (struct D2D_VECTOR_2F)*(_OWORD *)&_mm_unpacklo_ps(v22, v23),
                                            (struct D2D_VECTOR_2F)*(_OWORD *)&_mm_unpacklo_ps(v26, v27),
                                            (struct D2D_VECTOR_2F)*(_OWORD *)&_mm_unpacklo_ps(v17, v18),
                                            (struct D2D_VECTOR_2F)*(_OWORD *)&_mm_unpacklo_ps(v13, v14),
                                            a2);
        v4 = GeometryFromDwmRoundedRectangle;
        if ( GeometryFromDwmRoundedRectangle < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, GeometryFromDwmRoundedRectangle, 0x198u, 0LL);
      }
    }
    return v4;
  }
  v44 = 0LL;
  v46 = *(_OWORD *)CRoundedRectangleGeometryData::GetBaseRect(v7, v47);
  v8 = *g_DeviceManager;
  v45 = v46;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, CD2DFactory **))(v8 + 40))(g_DeviceManager, &v46, &v44);
  v4 = v9;
  if ( v9 >= 0 )
  {
    v5 = v44;
    *a2 = v44;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x176u, 0LL);
LABEL_11:
  v31 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return v4;
}
