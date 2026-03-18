/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x18023D830
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180019CB0 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EBCE7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EBCFF (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __m128 v15; // xmm6
  float v16; // xmm7_4
  __m128 v17; // xmm8
  float v18; // xmm1_4
  __int64 v19; // rax
  unsigned int v21; // [rsp+28h] [rbp-A9h]
  __int64 v22; // [rsp+48h] [rbp-89h] BYREF
  __int64 v23; // [rsp+50h] [rbp-81h] BYREF
  __int64 v24; // [rsp+58h] [rbp-79h] BYREF
  __int64 v25; // [rsp+60h] [rbp-71h] BYREF
  __int64 v26; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-61h] BYREF
  float X; // [rsp+80h] [rbp-51h] BYREF
  float v29; // [rsp+84h] [rbp-4Dh]
  unsigned int v30; // [rsp+88h] [rbp-49h]
  float v31; // [rsp+8Ch] [rbp-45h]

  v23 = 0LL;
  v24 = 0LL;
  *a6 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v26 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 216) + 80LL))(**(_QWORD **)(a1 + 216), &v23);
  v12 = v10;
  if ( v10 < 0 )
  {
    v21 = 1419;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 216) + 80LL))(
            **(_QWORD **)(a1 + 216),
            &v25);
    v12 = v10;
    if ( v10 < 0 )
    {
      v21 = 1420;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 136LL))(v23, &v24);
      v12 = v10;
      if ( v10 < 0 )
      {
        v21 = 1421;
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 136LL))(v25, &v22);
        v12 = v10;
        if ( v10 < 0 )
        {
          v21 = 1422;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a3 + 88LL))(
                  a3,
                  a2,
                  1LL,
                  a4,
                  LODWORD(FLOAT_0_25),
                  v24);
          v12 = v10;
          if ( v10 < 0 )
          {
            v21 = 1430;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 72LL))(v24);
            v12 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x598u, 0LL);
              goto LABEL_32;
            }
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v23 + 32LL))(v23, 0LL, &X);
            v12 = v10;
            if ( v10 < 0 )
            {
              v21 = 1437;
            }
            else
            {
              v15 = (__m128)LODWORD(X);
              v16 = *(float *)&v30;
              if ( X > *(float *)&v30 )
                goto LABEL_32;
              if ( COERCE_FLOAT(LODWORD(X) & _xmm) < 8388608.0 )
                v15 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(X));
              v17 = (__m128)LODWORD(v29);
              if ( COERCE_FLOAT(LODWORD(v29) & _xmm) < 8388608.0 )
                v17 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(v29));
              if ( COERCE_FLOAT(LODWORD(v16) & _xmm) < 8388608.0 )
                v16 = (float)(int)ceilf_0(v16);
              v18 = v31;
              if ( COERCE_FLOAT(LODWORD(v31) & _xmm) < 8388608.0 )
                v18 = (float)(int)ceilf_0(v31);
              if ( a5 )
              {
                *(_DWORD *)a5 = v15.m128_i32[0];
                *(float *)(a5 + 8) = v16;
                *(_DWORD *)(a5 + 4) = v17.m128_i32[0];
                *(float *)(a5 + 12) = v18;
              }
              v15.m128_f32[0] = v15.m128_f32[0] - 1.0;
              v17.m128_f32[0] = v17.m128_f32[0] - 1.0;
              X = v15.m128_f32[0];
              v29 = v17.m128_f32[0];
              *(float *)&v30 = v16 + 1.0;
              v31 = v18 + 1.0;
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 40LL))(
                v22,
                _mm_unpacklo_ps(v15, v17).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 64LL))(v22, 1LL);
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 40LL))(
                v22,
                _mm_unpacklo_ps((__m128)v30, (__m128)LODWORD(v31)).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 64LL))(v22, 1LL);
              v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
              v12 = v10;
              if ( v10 < 0 )
              {
                v21 = 1483;
              }
              else
              {
                v27[0] = v23;
                v27[1] = v25;
                v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, __int64 *))(***(_QWORD ***)(a1 + 216)
                                                                                              + 64LL))(
                        **(_QWORD **)(a1 + 216),
                        0LL,
                        v27,
                        2LL,
                        &v26);
                v12 = v10;
                if ( v10 >= 0 )
                {
                  v19 = v26;
                  v26 = 0LL;
                  *a6 = v19;
                  goto LABEL_32;
                }
                v21 = 1493;
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v21, 0LL);
LABEL_32:
  ReleaseInterface<ID2D1Geometry>(&v23);
  ReleaseInterface<ID2D1Geometry>(&v24);
  ReleaseInterface<ID2D1Geometry>(&v25);
  ReleaseInterface<ID2D1Geometry>(&v22);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return v12;
}
