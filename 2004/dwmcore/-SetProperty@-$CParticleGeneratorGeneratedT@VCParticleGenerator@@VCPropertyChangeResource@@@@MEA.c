/*
 * XREFs of ?SetProperty@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173E90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?SetMaxDirection@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180172AF4 (-SetMaxDirection@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@.c)
 *     ?SetMinDirection@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180172E40 (-SetMinDirection@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@.c)
 */

__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r9d
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  unsigned int v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+30h] [rbp-18h] BYREF
  int v24; // [rsp+38h] [rbp-10h]

  if ( a3 == 18 )
  {
    v14 = a2 - 3;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 5;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 4;
                if ( v20 )
                {
                  if ( v20 != 1 )
                  {
                    v22 = 1692;
                    goto LABEL_35;
                  }
                  if ( *(float *)a4 != *(float *)(a1 + 220) )
                  {
                    *(_DWORD *)(a1 + 220) = *a4;
LABEL_53:
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
                  }
                }
                else if ( *(float *)a4 != *(float *)(a1 + 216) )
                {
                  *(_DWORD *)(a1 + 216) = *a4;
                  goto LABEL_53;
                }
              }
              else if ( *(float *)a4 != *(float *)(a1 + 184) )
              {
                *(_DWORD *)(a1 + 184) = *a4;
                goto LABEL_53;
              }
            }
            else if ( *(float *)a4 != *(float *)(a1 + 180) )
            {
              *(_DWORD *)(a1 + 180) = *a4;
              goto LABEL_53;
            }
          }
          else if ( *(float *)a4 != *(float *)(a1 + 112) )
          {
            *(_DWORD *)(a1 + 112) = *a4;
            goto LABEL_53;
          }
        }
        else if ( *(float *)a4 != *(float *)(a1 + 108) )
        {
          *(_DWORD *)(a1 + 108) = *a4;
          goto LABEL_53;
        }
      }
      else if ( *(float *)a4 != *(float *)(a1 + 104) )
      {
        *(_DWORD *)(a1 + 104) = *a4;
        goto LABEL_53;
      }
    }
    else if ( *(float *)a4 != *(float *)(a1 + 100) )
    {
      *(_DWORD *)(a1 + 100) = *a4;
      goto LABEL_53;
    }
    return 0;
  }
  if ( a3 != 52 )
  {
    if ( a3 != 69 )
    {
      v22 = 1741;
LABEL_35:
      v13 = -2147024809;
      v11 = -2147024809;
      goto LABEL_36;
    }
    v4 = a2 - 7;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
          {
            v22 = 1736;
            goto LABEL_35;
          }
          *(_OWORD *)(a1 + 164) = *(_OWORD *)a4;
        }
        else
        {
          *(_OWORD *)(a1 + 148) = *(_OWORD *)a4;
        }
      }
      else
      {
        *(_OWORD *)(a1 + 132) = *(_OWORD *)a4;
      }
    }
    else
    {
      *(_OWORD *)(a1 + 116) = *(_OWORD *)a4;
    }
    goto LABEL_53;
  }
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 12;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v22 = 1714;
          goto LABEL_35;
        }
        *(_QWORD *)(a1 + 200) = *(_QWORD *)a4;
        *(_DWORD *)(a1 + 208) = a4[2];
      }
      else
      {
        *(_QWORD *)(a1 + 188) = *(_QWORD *)a4;
        *(_DWORD *)(a1 + 196) = a4[2];
      }
      goto LABEL_53;
    }
    v9 = a4[2];
    v23 = *(_QWORD *)a4;
    v24 = v9;
    v10 = CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMaxDirection(a1, (__int64)&v23);
    v11 = v10;
    if ( v10 < 0 )
    {
      v22 = 1703;
LABEL_25:
      v13 = v10;
LABEL_36:
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v13, v22, 0LL);
    }
  }
  else
  {
    v12 = a4[2];
    v23 = *(_QWORD *)a4;
    v24 = v12;
    v10 = CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMinDirection(a1, (__int64)&v23);
    v11 = v10;
    if ( v10 < 0 )
    {
      v22 = 1699;
      goto LABEL_25;
    }
  }
  return v11;
}
