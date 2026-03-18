/*
 * XREFs of ReadPointerDeviceSettingsFull @ 0x1C0041924
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C0041B70 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C0042308 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011A380 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011A4EC (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012B828 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C0209F30 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettingsFull(int a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  struct tagDEVICECONFIG_SETTING near *v10; // rdi
  __m128i v11; // xmm6
  bool v12; // zf
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v23; // ecx
  struct tagDEVICECONFIG_SETTING *v24; // rdi
  unsigned int v25; // r8d
  int v26; // eax
  int v27; // edx
  unsigned int v28; // edx
  int v29; // eax
  struct tagDEVICECONFIG_SETTING near *v30; // rdi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax

  v4 = 0;
  v6 = a1 - 148;
  if ( !v6 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v10 = off_1C032B038;
    v11 = *((__m128i *)off_1C032B038 + 6);
    v12 = (unsigned int)IsFlicksDisabledByGroupPolicy() == 0;
    v13 = *((_DWORD *)v10 + 3);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
    if ( !v12 )
      v14 = 0;
    if ( v13 == -1 )
      v13 = *((_DWORD *)v10 + 2);
    *(_DWORD *)a2 = v13;
    v15 = *((_DWORD *)v10 + 7);
    if ( v15 == -1 )
      v15 = *((_DWORD *)v10 + 6);
    *(_DWORD *)(a2 + 4) = v15;
    v16 = *((_DWORD *)v10 + 11);
    if ( v16 == -1 )
      v16 = *((_DWORD *)v10 + 10);
    *(_DWORD *)(a2 + 8) = v16;
    v17 = *((_DWORD *)v10 + 15);
    if ( v17 == -1 )
      v17 = *((_DWORD *)v10 + 14);
    *(_DWORD *)(a2 + 12) = v17;
    v18 = *((_DWORD *)v10 + 19);
    if ( v18 == -1 )
      v18 = *((_DWORD *)v10 + 18);
    *(_DWORD *)(a2 + 16) = v18;
    v19 = *((_DWORD *)v10 + 23);
    if ( v19 == -1 )
      v19 = *((_DWORD *)v10 + 22);
    *(_DWORD *)(a2 + 20) = v19;
    v20 = v11.m128i_i32[2];
    if ( v14 != -1 )
      v20 = v14;
    *(_DWORD *)(a2 + 24) = v20;
    v21 = *((_DWORD *)v10 + 31);
    if ( v21 == -1 )
      v21 = *((_DWORD *)v10 + 30);
    *(_DWORD *)(a2 + 28) = v21;
    return 1;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v30 = off_1C032B698;
    if ( !gModeMonitor )
      GetDWORDSettingValues(7LL, off_1C032B698, 7LL);
    v31 = *((_DWORD *)v30 + 3);
    if ( v31 == -1 )
      v31 = *((_DWORD *)v30 + 2);
    *(_DWORD *)a2 = v31;
    v32 = *((_DWORD *)v30 + 7);
    if ( v32 == -1 )
      v32 = *((_DWORD *)v30 + 6);
    *(_DWORD *)(a2 + 4) = v32;
    v33 = *((_DWORD *)v30 + 11);
    if ( v33 == -1 )
      v33 = *((_DWORD *)v30 + 10);
    *(_DWORD *)(a2 + 8) = v33;
    v34 = *((_DWORD *)v30 + 15);
    if ( v34 == -1 )
      v34 = *((_DWORD *)v30 + 14);
    *(_DWORD *)(a2 + 12) = v34;
    v35 = *((_DWORD *)v30 + 19);
    if ( v35 == -1 )
      v35 = *((_DWORD *)v30 + 18);
    *(_DWORD *)(a2 + 16) = v35;
    v36 = *((_DWORD *)v30 + 23);
    if ( v36 == -1 )
      v36 = *((_DWORD *)v30 + 22);
    *(_DWORD *)(a2 + 20) = v36;
    v37 = *((_DWORD *)v30 + 27);
    if ( v37 == -1 )
      v37 = *((_DWORD *)v30 + 26);
    *(_DWORD *)(a2 + 24) = v37;
    return 1;
  }
  v8 = v7 - 2;
  if ( !v8 )
    return (unsigned int)GetFlickMap((struct tagFLICK_MAP *)a2);
  v23 = v8 - 2;
  if ( !v23 )
    return (unsigned int)GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
  if ( v23 == 2 )
  {
    if ( !gPredictionMonitor )
      gPredictionMonitor = (int)CreatePredictionSettings(off_1C032B018, a2, a3, a4) >= 0;
    if ( gPredictionMonitor == 1 )
    {
      v24 = off_1C032B018;
      GetPredictionSettings(off_1C032B018, a2, a3, a4);
      v25 = *((_DWORD *)v24 + 3);
      v26 = 60;
      if ( v25 == -1 )
      {
        v27 = *((_DWORD *)v24 + 2);
      }
      else
      {
        v27 = 60;
        if ( v25 <= 0x3C )
          v27 = *((_DWORD *)v24 + 3);
      }
      *(_DWORD *)(a2 + 4) = v27;
      glTOUCH_DRIVER_HW_STACK_LATENCY = v27;
      v28 = *((_DWORD *)v24 + 7);
      if ( v28 == -1 )
      {
        v26 = *((_DWORD *)v24 + 6);
      }
      else if ( v28 <= 0x3C )
      {
        v26 = *((_DWORD *)v24 + 7);
      }
      *(_DWORD *)(a2 + 8) = v26;
      glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v26;
      v29 = *((_DWORD *)v24 + 11);
      if ( v29 == -1 )
        v29 = *((_DWORD *)v24 + 10);
      *(_DWORD *)(a2 + 12) = v29;
      gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v29;
      return 1;
    }
  }
  return v4;
}
