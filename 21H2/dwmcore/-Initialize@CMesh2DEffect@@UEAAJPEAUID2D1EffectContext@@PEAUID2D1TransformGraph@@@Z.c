/*
 * XREFs of ?Initialize@CMesh2DEffect@@UEAAJPEAUID2D1EffectContext@@PEAUID2D1TransformGraph@@@Z @ 0x18026CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::Initialize(
        CMesh2DEffect *this,
        struct ID2D1EffectContext *a2,
        struct ID2D1TransformGraph *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  *((_QWORD *)this + 17) = a2;
  v13 = 0LL;
  (*(void (__fastcall **)(struct ID2D1EffectContext *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 17) + 64LL))(
         *((_QWORD *)this + 17),
         0LL,
         0LL,
         &v13);
  v7 = v5;
  if ( v5 < 0 )
  {
    v12 = 139;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, char *))(*(_QWORD *)a3 + 40LL))(a3, (char *)this + 8);
    v7 = v5;
    if ( v5 < 0 )
    {
      v12 = 141;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v13);
      v7 = v5;
      if ( v5 < 0 )
      {
        v12 = 142;
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64, char *, _QWORD))(*(_QWORD *)a3 + 64LL))(
               a3,
               v13,
               (char *)this + 8,
               0LL);
        v7 = v5;
        if ( v5 < 0 )
        {
          v12 = 143;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, char *))(*(_QWORD *)a3 + 56LL))(
                 a3,
                 (char *)this + 8);
          v7 = v5;
          if ( v5 < 0 )
          {
            v12 = 144;
          }
          else
          {
            v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, _QWORD, __int64, _QWORD))(*(_QWORD *)a3 + 72LL))(
                   a3,
                   0LL,
                   v13,
                   0LL);
            v7 = v5;
            if ( v5 < 0 )
            {
              v12 = 145;
            }
            else
            {
              v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 88LL))(
                     *((_QWORD *)this + 17),
                     &GUID_Mesh2D_PS,
                     &unk_180321660,
                     876LL);
              v7 = v5;
              if ( v5 < 0 )
              {
                v12 = 152;
              }
              else
              {
                v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 96LL))(
                       *((_QWORD *)this + 17),
                       &GUID_Mesh2D_VS,
                       &unk_180320D60,
                       2304LL);
                v7 = v8;
                if ( v8 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Eu, 0LL);
                  goto LABEL_22;
                }
                v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD))(**((_QWORD **)this + 16) + 80LL))(
                       *((_QWORD *)this + 16),
                       &GUID_Mesh2D_PS,
                       0LL);
                v7 = v5;
                if ( v5 < 0 )
                {
                  v12 = 161;
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
                    *((_QWORD *)this + 16),
                    3LL);
                  v10 = *((_QWORD *)this + 16);
                  v14 = 21LL;
                  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 24LL))(v10, 0LL, 21LL);
                  v7 = v5;
                  if ( v5 >= 0 )
                    goto LABEL_22;
                  v12 = 175;
                }
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v12, 0LL);
LABEL_22:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v7;
}
