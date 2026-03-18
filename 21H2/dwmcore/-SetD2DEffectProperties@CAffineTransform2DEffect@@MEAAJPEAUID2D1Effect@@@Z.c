/*
 * XREFs of ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180245320
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1801D9CB8 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetD2DEffectProperties(
        CAffineTransform2DEffect *this,
        struct ID2D1Effect *a2)
{
  float v2; // xmm2_4
  const struct D2D1::Matrix3x2F *v3; // rbx
  float v4; // xmm3_4
  __int128 v6; // xmm0
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  __int128 v11; // xmm0
  float v12; // xmm3_4
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int128 v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  D2D1_MATRIX_3X2_F v28; // [rsp+60h] [rbp-20h] BYREF

  v2 = *((float *)this + 50);
  v3 = (CAffineTransform2DEffect *)((char *)this + 204);
  v4 = *((float *)this + 49);
  v6 = *(_OWORD *)((char *)this + 168);
  v27 = *((_QWORD *)this + 23);
  v8 = v2 * *((float *)this + 44);
  v26 = v6;
  v9 = (float)((float)(v8 + (float)(v4 * *((float *)this + 42))) + *((float *)this + 46)) - v4;
  v10 = (float)(v4 * *((float *)this + 43)) + (float)(v2 * *((float *)this + 45));
  v11 = *(_OWORD *)((char *)this + 204);
  *(float *)&v27 = v9;
  v12 = v10 + *((float *)this + 47);
  *(_QWORD *)&v28.m[2][0] = *(_QWORD *)((char *)this + 220);
  *(_OWORD *)&v28.m11 = v11;
  *((float *)&v27 + 1) = v12 - v2;
  D2D1::Matrix3x2F::Invert(&v28);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v24,
    (const struct D2D1::Matrix3x2F *)&v28,
    (const struct D2D1::Matrix3x2F *)&v26);
  v26 = v24;
  v27 = v25;
  D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v24, (const struct D2D1::Matrix3x2F *)&v26, v3);
  v13 = *(_QWORD *)a2;
  v26 = v24;
  v27 = v25;
  v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(v13 + 72))(
          a2,
          0LL,
          0LL,
          (char *)this + 160,
          4);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x92u);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
            a2,
            1LL,
            0LL,
            (char *)this + 164,
            4);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x93u);
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)a2 + 72LL))(
              a2,
              2LL,
              0LL,
              &v26,
              24);
      v16 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x94u);
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 192,
                4);
        v16 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x95u);
      }
    }
  }
  return v16;
}
