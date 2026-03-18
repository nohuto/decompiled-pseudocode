/*
 * XREFs of LinkLightShader @ 0x18001B6A4
 * Callers:
 *     AppendLights @ 0x18001B490 (AppendLights.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B6D88 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LinkLightShader(__int64 a1, _DWORD *a2, int a3, unsigned __int64 *a4, char a5, unsigned __int16 *a6)
{
  int v9; // ecx
  int appended; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  _DWORD *v13; // rax
  int v14; // edi
  int v15; // edx
  __int128 v16; // xmm0
  unsigned __int16 v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 v23; // r9
  int v25; // edx
  int v26; // edx
  unsigned int v27; // [rsp+20h] [rbp-49h]
  __int128 v29; // [rsp+40h] [rbp-29h] BYREF
  __int128 v30; // [rsp+50h] [rbp-19h] BYREF
  _WORD v31[8]; // [rsp+60h] [rbp-9h] BYREF
  int v32; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int16 v33; // [rsp+74h] [rbp+Bh]
  int v34; // [rsp+76h] [rbp+Dh]
  __int16 v35; // [rsp+7Ah] [rbp+11h]

  if ( a6 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    v29 = 0LL;
    *(_DWORD *)(a1 + 80) = v9 + 1;
    LOWORD(v9) = v9 | 0x600;
    *a6 = v9;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 (unsigned __int16)v9,
                 (unsigned int)&word_1802CD8A6,
                 a3,
                 (__int64)"InitLightAccumulator",
                 (__int64)&v29);
    v12 = appended;
    if ( appended >= 0 )
    {
      v13 = a2;
      v14 = 0;
      while ( 1 )
      {
        v15 = (*v13 >> (4 * v14)) & 0xF;
        if ( v15 == 15 )
          goto LABEL_18;
        if ( !v15 )
        {
          if ( a5 )
          {
            v16 = *(_OWORD *)"AmbientSceneLightingEffectLib";
            strcpy((char *)v31, "tingEffectLib0");
          }
          else
          {
            v16 = *(_OWORD *)"AmbientLightingLib";
            strcpy((char *)v31, "ib0");
          }
          goto LABEL_8;
        }
        v25 = v15 - 1;
        if ( !v25 )
        {
          if ( a5 )
          {
            v16 = *(_OWORD *)"DistantSceneLightingEffectLib";
            *(_WORD *)((char *)&v31[6] + 1) = (unsigned __int8)(v14 + 48);
            qmemcpy(v31, "tingEffectLib", 13);
          }
          else
          {
            v16 = *(_OWORD *)"DistantLightingLib";
            v31[0] = *(_WORD *)"ib";
            v31[1] = (unsigned __int8)(v14 + 48);
          }
          goto LABEL_8;
        }
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 != 1 )
          {
            v12 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(4 * v14, 0LL, 0, -2147024809, 0x3AAu, 0LL);
            return v12;
          }
          if ( a5 )
          {
            v16 = *(_OWORD *)"SpotSceneLightingEffectLib";
            v31[5] = (unsigned __int8)(v14 + 48);
            qmemcpy(v31, "gEffectLib", 10);
LABEL_8:
            v30 = v16;
            goto LABEL_9;
          }
          HIBYTE(v30) = v14 + 48;
          qmemcpy(&v30, "SpotLightingLib", 15);
          LOBYTE(v31[0]) = 0;
        }
        else
        {
          if ( a5 )
          {
            v16 = *(_OWORD *)"PointSceneLightingEffectLib";
            HIBYTE(v31[5]) = v14 + 48;
            qmemcpy(v31, "ngEffectLib", 11);
            LOBYTE(v31[6]) = 0;
            goto LABEL_8;
          }
          v31[0] = (unsigned __int8)(v14 + 48);
          v30 = *(_OWORD *)"PointLightingLib";
        }
LABEL_9:
        v32 = 196610;
        if ( v14 )
          v32 = 327684;
        v17 = *a6;
        v18 = *a4;
        v19 = 0LL;
        v33 = *a6;
        v34 = 0;
        v20 = 3;
        v35 = 0;
        do
        {
          if ( (int)(v20 - 3) >= (__int64)v18 )
            break;
          if ( v19 >= v18 )
            goto LABEL_36;
          v21 = v20++;
          v22 = *(_WORD *)(a4[1] + 2 * v19++);
          *((_WORD *)&v32 + v21) = v22;
        }
        while ( v20 < 6 );
        v23 = v18 + 3;
        if ( v23 < 0 )
        {
LABEL_36:
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        *(_QWORD *)&v29 = v23;
        *((_QWORD *)&v29 + 1) = &v32;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v17,
                     (unsigned int)&word_1802CD8A6,
                     a3,
                     (__int64)&v30,
                     (__int64)&v29);
        v12 = appended;
        if ( appended < 0 )
        {
          v27 = 958;
          goto LABEL_38;
        }
        v13 = a2;
LABEL_18:
        if ( (unsigned int)++v14 >= 3 )
          return v12;
      }
    }
    v27 = 881;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, v27, 0LL);
  }
  else
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x36Cu, 0LL);
  }
  return v12;
}
