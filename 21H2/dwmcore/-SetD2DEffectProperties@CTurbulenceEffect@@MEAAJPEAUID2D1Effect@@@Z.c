/*
 * XREFs of ?SetD2DEffectProperties@CTurbulenceEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180242E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTurbulenceEffect::SetD2DEffectProperties(CTurbulenceEffect *this, struct ID2D1Effect *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v23 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 40), (__m128)*((unsigned int *)this + 41)).m128_u64[0];
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(v4 + 72))(
         a2,
         0LL,
         0LL,
         &v23,
         8);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x2Fu);
  }
  else
  {
    v8 = *(_QWORD *)a2;
    v23 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 42), (__m128)*((unsigned int *)this + 43)).m128_u64[0];
    v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(v8 + 72))(
           a2,
           2LL,
           0LL,
           &v23,
           8);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x34u);
    }
    else
    {
      v11 = *(_QWORD *)a2;
      v23 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 44), (__m128)*((unsigned int *)this + 45)).m128_u64[0];
      v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(v11 + 72))(
              a2,
              1LL,
              0LL,
              &v23,
              8);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x39u);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 184,
                4);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x3Eu);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  4LL,
                  0LL,
                  (char *)this + 188,
                  4);
          v7 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x43u);
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    (char *)this + 192,
                    4);
            v7 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x48u);
            }
            else
            {
              v20 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 196,
                      4);
              v7 = v20;
              if ( v20 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x4Du);
            }
          }
        }
      }
    }
  }
  return v7;
}
