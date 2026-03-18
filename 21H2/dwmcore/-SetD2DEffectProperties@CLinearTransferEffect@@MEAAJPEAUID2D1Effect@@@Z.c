/*
 * XREFs of ?SetD2DEffectProperties@CLinearTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180223DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::SetD2DEffectProperties(CLinearTransferEffect *this, struct ID2D1Effect *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 160,
         4);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x2Eu);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           1LL,
           0LL,
           (char *)this + 164,
           4);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x33u);
    }
    else
    {
      v32 = *((unsigned __int8 *)this + 168);
      v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             2LL,
             0LL,
             &v32,
             4);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x38u);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 172,
                4);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x3Du);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  4LL,
                  0LL,
                  (char *)this + 176,
                  4);
          v6 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x42u);
          }
          else
          {
            v32 = *((unsigned __int8 *)this + 180);
            v15 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    &v32,
                    4);
            v6 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x47u);
            }
            else
            {
              v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 184,
                      4);
              v6 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x4Cu);
              }
              else
              {
                v19 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                        a2,
                        7LL,
                        0LL,
                        (char *)this + 188,
                        4);
                v6 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x51u);
                }
                else
                {
                  v32 = *((unsigned __int8 *)this + 192);
                  v21 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                          a2,
                          8LL,
                          0LL,
                          &v32,
                          4);
                  v6 = v21;
                  if ( v21 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x56u);
                  }
                  else
                  {
                    v23 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                            a2,
                            9LL,
                            0LL,
                            (char *)this + 196,
                            4);
                    v6 = v23;
                    if ( v23 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x5Bu);
                    }
                    else
                    {
                      v25 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                              a2,
                              10LL,
                              0LL,
                              (char *)this + 200,
                              4);
                      v6 = v25;
                      if ( v25 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x60u);
                      }
                      else
                      {
                        v32 = *((unsigned __int8 *)this + 204);
                        v27 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                                a2,
                                11LL,
                                0LL,
                                &v32,
                                4);
                        v6 = v27;
                        if ( v27 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x65u);
                        }
                        else
                        {
                          v32 = *((unsigned __int8 *)this + 205);
                          v29 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                                  a2,
                                  12LL,
                                  0LL,
                                  &v32,
                                  4);
                          v6 = v29;
                          if ( v29 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x6Au);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
