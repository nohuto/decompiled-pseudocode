/*
 * XREFs of _ReadPointerDeviceSettingsFull@8 @ 0xF3780
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?CreatePredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x99582 (-CreatePredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z.c)
 *     ?GetPredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x9968E (-GetPredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YGHXZ @ 0x99786 (-IsFlicksDisabledByGroupPolicy@@YGHXZ.c)
 *     ?GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z @ 0x9CC9E (-GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z.c)
 *     ?LoadPointerDevicePenSettings@@YGHXZ @ 0xAEF40 (-LoadPointerDevicePenSettings@@YGHXZ.c)
 *     ?GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F6E7 (-GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z.c)
 */

int __fastcall ReadPointerDeviceSettingsFull(int a1, int a2)
{
  int v2; // esi
  char *v4; // ecx
  char *v5; // ecx
  char *v6; // ecx
  char *v7; // ecx
  struct tagDEVICECONFIG_SETTING *v8; // ecx
  struct tagDEVICECONFIG_SETTING *v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // ecx
  struct tagDEVICECONFIG_SETTING **v14; // esi
  struct tagDEVICECONFIG_SETTING *v15; // ecx
  struct tagDEVICECONFIG_SETTING *v16; // ecx
  struct tagDEVICECONFIG_SETTING *v17; // ecx
  struct tagDEVICECONFIG_SETTING *v18; // ecx
  struct tagDEVICECONFIG_SETTING *v19; // ecx
  struct tagDEVICECONFIG_SETTING *v20; // ecx
  struct tagDEVICECONFIG_SETTING *v21; // ecx
  int v22; // edx
  struct tagDEVICECONFIG_SETTING *v23; // esi
  struct tagDEVICECONFIG_SETTING *v24; // esi
  struct tagDEVICECONFIG_SETTING *v25; // esi
  struct tagDEVICECONFIG_SETTING *v26; // esi
  struct tagDEVICECONFIG_SETTING *v27; // esi
  struct tagDEVICECONFIG_SETTING *v28; // esi
  struct tagDEVICECONFIG_SETTING *v29; // edx
  struct tagCUSTOM_FLICK *v31; // [esp+0h] [ebp-20h]
  unsigned int v32; // [esp+4h] [ebp-1Ch]
  struct tagDEVICECONFIG_SETTING **v33; // [esp+10h] [ebp-10h]
  struct tagDEVICECONFIG_SETTING *v34; // [esp+18h] [ebp-8h]
  unsigned int v35; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v4 = (char *)(a1 - 148);
  if ( !v4 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v33 = off_266020;
    v34 = off_266020[19];
    v35 = (unsigned int)off_266020[20];
    v22 = v35 & ~((unsigned __int64)-(__int64)(unsigned int)IsFlicksDisabledByGroupPolicy(v4) >> 32);
    v23 = v33[2];
    if ( v23 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v23 = v33[1];
    *(_DWORD *)a2 = v23;
    v24 = v33[5];
    if ( v24 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v24 = v33[4];
    *(_DWORD *)(a2 + 4) = v24;
    v25 = v33[8];
    if ( v25 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v25 = v33[7];
    *(_DWORD *)(a2 + 8) = v25;
    v26 = v33[11];
    if ( v26 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v26 = v33[10];
    *(_DWORD *)(a2 + 12) = v26;
    v27 = v33[14];
    if ( v27 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v27 = v33[13];
    *(_DWORD *)(a2 + 16) = v27;
    v28 = v33[17];
    if ( v28 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v28 = v33[16];
    *(_DWORD *)(a2 + 20) = v28;
    if ( v22 == -1 )
      v22 = (int)v34;
    *(_DWORD *)(a2 + 24) = v22;
    v29 = v33[23];
    if ( v29 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v29 = v33[22];
    *(_DWORD *)(a2 + 28) = v29;
    return 1;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v14 = off_266018;
    if ( !gModeMonitor )
      GetDWORDSettingValues(7, off_266018, 7);
    v15 = v14[2];
    if ( v15 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v15 = v14[1];
    *(_DWORD *)a2 = v15;
    v16 = v14[5];
    if ( v16 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v16 = v14[4];
    *(_DWORD *)(a2 + 4) = v16;
    v17 = v14[8];
    if ( v17 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v17 = v14[7];
    *(_DWORD *)(a2 + 8) = v17;
    v18 = v14[11];
    if ( v18 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v18 = v14[10];
    *(_DWORD *)(a2 + 12) = v18;
    v19 = v14[14];
    if ( v19 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v19 = v14[13];
    *(_DWORD *)(a2 + 16) = v19;
    v20 = v14[17];
    if ( v20 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v20 = v14[16];
    *(_DWORD *)(a2 + 20) = v20;
    v21 = v14[20];
    if ( v21 == (struct tagDEVICECONFIG_SETTING *)-1 )
      v21 = v14[19];
    *(_DWORD *)(a2 + 24) = v21;
    return 1;
  }
  v6 = v5 - 2;
  if ( !v6 )
    return GetFlickMap((char *)a2);
  v7 = v6 - 2;
  if ( !v7 )
    return GetCustomFlick(v31);
  v8 = (struct tagDEVICECONFIG_SETTING *)(v7 - 2);
  if ( !v8 )
  {
    if ( !gPredictionMonitor )
      gPredictionMonitor = CreatePredictionSettings(
                             (int)off_266004,
                             off_266004,
                             (unsigned int)off_266004,
                             (unsigned __int16 *)v31,
                             v32) >= 0;
    if ( gPredictionMonitor == 1 )
    {
      v9 = off_266004;
      GetPredictionSettings((int)off_266004, v8, (unsigned int)v8, (unsigned __int16 *)v31, v32);
      v10 = *((_DWORD *)v9 + 2);
      if ( v10 == -1 )
      {
        v10 = *((_DWORD *)v9 + 1);
      }
      else if ( v10 > 0x3C )
      {
        v10 = 60;
      }
      *(_DWORD *)(a2 + 4) = v10;
      glTOUCH_DRIVER_HW_STACK_LATENCY = v10;
      v11 = *((_DWORD *)v9 + 5);
      if ( v11 == -1 )
      {
        v11 = *((_DWORD *)v9 + 4);
      }
      else if ( v11 > 0x3C )
      {
        v11 = 60;
      }
      *(_DWORD *)(a2 + 8) = v11;
      glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v11;
      v12 = *((_DWORD *)v9 + 8);
      if ( v12 == -1 )
        v12 = *((_DWORD *)v9 + 7);
      *(_DWORD *)(a2 + 12) = v12;
      v2 = 1;
      gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v12;
    }
  }
  return v2;
}
