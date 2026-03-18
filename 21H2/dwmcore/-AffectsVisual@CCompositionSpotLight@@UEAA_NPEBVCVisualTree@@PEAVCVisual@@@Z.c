/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18020F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x18001531C (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800490DC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085994 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800F5590 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_tanf_0 @ 0x180101994 (_o_tanf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  char DoesIntersectUnsafe; // bl
  float v7; // xmm1_4
  float v8; // xmm7_4
  CVisual *v9; // rcx
  int WorldTransform; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  CVisual *v16; // rcx
  float v17; // xmm3_4
  __int64 v18; // r9
  char *v19; // rdi
  char v20; // al
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  int v24; // edi
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // [rsp+28h] [rbp-E0h]
  struct CVisual *v29; // [rsp+38h] [rbp-D0h] BYREF
  float v30; // [rsp+40h] [rbp-C8h] BYREF
  float v31; // [rsp+44h] [rbp-C4h] BYREF
  float v32[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v33[64]; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+98h] [rbp-70h]
  float v35; // [rsp+A8h] [rbp-60h] BYREF
  float v36; // [rsp+ACh] [rbp-5Ch]
  float v37; // [rsp+B0h] [rbp-58h]
  float v38; // [rsp+B4h] [rbp-54h]
  __int128 v39; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v41; // [rsp+D8h] [rbp-30h] BYREF

  v29 = a3;
  DoesIntersectUnsafe = 1;
  if ( !*((_BYTE *)this + 170) )
    return 0;
  if ( *((float *)this + 92) != 0.0 )
    return DoesIntersectUnsafe;
  if ( *((float *)this + 93) != 0.0 )
    return DoesIntersectUnsafe;
  if ( *((float *)this + 94) != -1.0 )
    return DoesIntersectUnsafe;
  v7 = *((float *)this + 96);
  if ( *((float *)this + 95) > v7 || v7 > 1.5707952 )
    return DoesIntersectUnsafe;
  CVisual::GetEffectiveOffset(a3, v32, &v31, &v30);
  v8 = *((float *)this + 91) - v30;
  v34 = 0;
  v41 = 0LL;
  v40 = 0LL;
  WorldTransform = CVisual::GetWorldTransform(v9, a2, 1, (__int64)v33, 0LL, 0LL);
  if ( WorldTransform < 0 )
  {
    v28 = 597;
    goto LABEL_30;
  }
  if ( !CMILMatrix::IsAffine<1>((__int64)v33, 1) )
    return DoesIntersectUnsafe;
  if ( v8 > 0.0 && *((float *)this + 96) > 0.0 )
  {
    v39 = 0LL;
    WorldTransform = (*(__int64 (__fastcall **)(struct CVisual *, __int128 *))(*(_QWORD *)v29 + 224LL))(v29, &v39);
    if ( WorldTransform < 0 )
    {
      v28 = 613;
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)v33, (__int64)&v39, (float *)&v40, v12);
      v13 = o_tanf_0(*((float *)this + 96));
      v14 = *((float *)this + 90);
      v15 = *((float *)this + 89);
      v16 = (CVisual *)*((_QWORD *)this + 32);
      v34 = 0;
      v17 = (float)(v13 * v8) + (float)(v13 * v8);
      v35 = v15 - (float)(v13 * v8);
      v36 = v14 - (float)(v13 * v8);
      v38 = v17 + v36;
      v37 = v17 + v35;
      WorldTransform = CVisual::GetWorldTransform(v16, a2, 1, (__int64)v33, 0LL, 0LL);
      if ( WorldTransform >= 0 )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v33, (__int64)&v35, (float *)&v41, v18);
        DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                (float *)&v41,
                                (float *)&v40);
        goto LABEL_18;
      }
      v28 = 632;
    }
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, WorldTransform, v28);
    return DoesIntersectUnsafe;
  }
  DoesIntersectUnsafe = 0;
LABEL_18:
  v19 = (char *)this + 264;
  v20 = DynArray<CVisual *,0>::Contains((__int64)v19, &v29);
  if ( DoesIntersectUnsafe )
  {
    if ( v20 )
      DynArray<CVisual *,0>::Remove((__int64 *)v19, &v29);
    return DoesIntersectUnsafe;
  }
  DoesIntersectUnsafe = v20 ^ 1;
  if ( !v20 )
  {
    v22 = *((_DWORD *)v19 + 6);
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      v24 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x298u);
      return DoesIntersectUnsafe;
    }
    if ( v23 > *((_DWORD *)v19 + 5) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v19, 8u, 1, &v29);
      v24 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0xC0u);
        goto LABEL_28;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v19 + 8LL * *((unsigned int *)v19 + 6)) = v29;
      *((_DWORD *)v19 + 6) = v23;
    }
  }
  return DoesIntersectUnsafe;
}
