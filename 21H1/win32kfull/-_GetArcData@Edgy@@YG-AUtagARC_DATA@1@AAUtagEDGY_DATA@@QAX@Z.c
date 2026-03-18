/*
 * XREFs of ?_GetArcData@Edgy@@YG?AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z @ 0x16E34D
 * Callers:
 *     ?_OnInput@Edgy@@YG?AUtagSTATE_TRANSITION_DATA@1@AAUtagEDGY_DATA@@PAX@Z @ 0x16ED29 (-_OnInput@Edgy@@YG-AUtagSTATE_TRANSITION_DATA@1@AAUtagEDGY_DATA@@PAX@Z.c)
 * Callees:
 *     __GetPointerDeviceType@4 @ 0x159BF4 (__GetPointerDeviceType@4.c)
 *     ?_GetDisambiguationArcData@Edgy@@YGKABUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16E7CB (-_GetDisambiguationArcData@Edgy@@YGKABUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YG?AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x16E9D7 (-_HitTestEdgyRegion@Edgy@@YG-AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_.c)
 *     ?_IsLegacyDevice@Edgy@@YGHPAX@Z @ 0x16EC06 (-_IsLegacyDevice@Edgy@@YGHPAX@Z.c)
 */

_DWORD *__fastcall Edgy::_GetArcData(int a1, int a2, _DWORD *a3)
{
  const struct tagPOINTER_INFO *v4; // eax
  unsigned int v5; // esi
  int v6; // edi
  int v7; // ecx
  bool v8; // zf
  float *v9; // esi
  unsigned int v10; // edi
  const struct tagPOINTER_INFO *PointerInfo; // eax
  const struct tagPOINTER_INFO *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int PointerDeviceType; // eax
  int v17; // eax
  int IsLegacyDevice; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  const struct tagPOINTER_INFO *v29; // ecx
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  bool v36; // cc
  int v37; // edx
  int Instance; // esi
  int v39; // eax
  int Inertia; // esi
  int v41; // ecx
  int v42; // ecx
  Edgy *v44; // [esp+0h] [ebp-54h]
  void *v45; // [esp+4h] [ebp-50h]
  const struct Edgy::tagARC_DATA *v46; // [esp+8h] [ebp-4Ch]
  char v47[20]; // [esp+Ch] [ebp-48h] BYREF
  int v48; // [esp+20h] [ebp-34h]
  int v49; // [esp+24h] [ebp-30h]
  int v50; // [esp+28h] [ebp-2Ch]
  float v51; // [esp+2Ch] [ebp-28h]
  int v52; // [esp+30h] [ebp-24h]
  unsigned int DisambiguationArcData; // [esp+34h] [ebp-20h]
  int v54; // [esp+38h] [ebp-1Ch]
  unsigned int v55; // [esp+3Ch] [ebp-18h]
  int v56; // [esp+40h] [ebp-14h]
  int v57; // [esp+44h] [ebp-10h]
  int v58; // [esp+48h] [ebp-Ch]
  int v59; // [esp+4Ch] [ebp-8h]
  const struct tagPOINTER_INFO *v60; // [esp+50h] [ebp-4h]
  int v61; // [esp+5Ch] [ebp+8h]

  v4 = 0;
  v5 = *(_DWORD *)(a2 + 28);
  v58 = a1;
  memset(a3, 0, 0x20u);
  DisambiguationArcData = v5;
  v6 = 0;
  v54 = a2;
  v7 = 1;
  *a3 = a2;
  v8 = v5 == 0;
  v61 = 1;
  v9 = (float *)v58;
  v60 = 0;
  v55 = 0;
  v56 = 0;
  if ( !v8 )
  {
    v10 = 0;
    do
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(_gpTouchProcessor, (const struct CPointerInputFrame *)a2, v10);
      v12 = PointerInfo;
      if ( !PointerInfo )
        goto LABEL_11;
      ++v55;
      v13 = *((_DWORD *)PointerInfo + 3);
      if ( (v13 & 4) != 0 )
      {
        ++v56;
        if ( (v13 & 0x2000) != 0 )
        {
          a3[5] = *((_DWORD *)v12 + 12);
          a3[6] = *((_DWORD *)v12 + 13);
          v14 = *((_DWORD *)v12 + 14);
          v60 = v12;
          a3[7] = v14;
        }
      }
      if ( *(_DWORD *)v12 != 2 )
        v61 = *(_DWORD *)v12 == 3 ? v61 : 0;
      v15 = *((_DWORD *)v9 + 43);
      if ( v15 )
      {
        v7 = v15 == *((_DWORD *)v12 + 4) ? v61 : 0;
        v61 = v7;
      }
      else
      {
LABEL_11:
        v7 = v61;
      }
      a2 = v54;
      ++v10;
    }
    while ( v10 < DisambiguationArcData );
    v4 = v60;
    v6 = 0;
  }
  v59 = 0;
  v54 = 0;
  v57 = 0;
  if ( *((_DWORD *)v9 + 3) || !v7 || !v4 || v56 != 1 )
    goto LABEL_30;
  PointerDeviceType = _GetPointerDeviceType(*((void **)v4 + 4));
  v52 = PointerDeviceType;
  if ( PointerDeviceType == 1 )
  {
    v17 = v61;
  }
  else
  {
    v17 = PointerDeviceType == 3 ? v61 : 0;
    v61 = v17;
  }
  if ( v17 )
  {
    IsLegacyDevice = Edgy::_IsLegacyDevice(v44, v45);
    v19 = (int *)Edgy::_HitTestEdgyRegion(
                   v9,
                   *((_DWORD *)v60 + 4),
                   v47,
                   v52,
                   IsLegacyDevice,
                   *((_DWORD *)v60 + 12),
                   *((_DWORD *)v60 + 13));
    v48 = *v19;
    v49 = v19[1];
    v50 = v19[2];
    v20 = v48;
    if ( v48 )
    {
      a3[3] = v50;
      v21 = v49;
      a3[2] = v20;
      v22 = *(_DWORD *)(v20 + 4);
      a3[4] = v21;
      v23 = *(_DWORD *)(v21 + 4);
      v59 = 1;
      v54 = v23;
      v24 = ValidateHwnd(v22);
      if ( v24 && (v25 = *(_DWORD *)(v24 + 20), *(char *)(v25 + 11) >= 0) && *(char *)(v25 + 12) >= 0 )
      {
        v6 = 0;
        v57 = 0;
      }
      else
      {
        v57 = 1;
        v6 = 0;
      }
    }
    else
    {
      v6 = 0;
      v59 = 0;
    }
    v9 = (float *)v58;
LABEL_30:
    v17 = v61;
  }
  DisambiguationArcData = 0;
  if ( v17 && *((_DWORD *)v9 + 3) == 1 )
  {
    v26 = *((_DWORD *)v9 + 44);
    if ( v26
      && (v27 = ValidateHwnd(*(_DWORD *)(v26 + 4))) != 0
      && (v28 = *(_DWORD *)(v27 + 20), *(char *)(v28 + 11) >= 0)
      && *(char *)(v28 + 12) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData(v44, (const struct tagEDGY_DATA *)v45, v46);
    }
    else
    {
      v57 = 1;
    }
    a3[2] = *((_DWORD *)v9 + 44);
    a3[4] = *((_DWORD *)v9 + 48);
    a3[3] = *((_DWORD *)v9 + 49);
  }
  v8 = *((_DWORD *)v9 + 3) == 0;
  v51 = v9[3];
  v29 = v60;
  v52 = 0;
  if ( v8
    && (unsigned int)(a3[7] - *((_DWORD *)v9 + 53)) < *((_DWORD *)v9 + 54)
    && v60
    && *((_DWORD *)v9 + 52) == *((_DWORD *)v60 + 4) )
  {
    v30 = a3[5];
    v31 = *((_DWORD *)v9 + 55);
    v32 = v30 <= v31 ? v31 - v30 : v30 - v31;
    v33 = a3[6];
    v34 = *((_DWORD *)v9 + 56);
    v35 = v33 <= v34 ? v34 - v33 : v33 - v34;
    v36 = v32 < *((_DWORD *)v9 + 57);
    v29 = v60;
    if ( v36 && v35 < *((_DWORD *)v9 + 58) )
      v52 = 1;
  }
  v37 = v59;
  if ( v51 == 0.0 && v59 && (*(_DWORD *)v29 == 2 || *(_DWORD *)v29 == 3) )
  {
    Instance = CInertiaManager::GetInstance();
    v39 = CInertiaManager::InertiaSourceFromPointerType(*(_DWORD *)v60);
    Inertia = CInertiaManager::QueryInertia(Instance, *((_DWORD *)v60 + 10), *((_DWORD *)v60 + 11), v39);
    if ( Inertia
      && (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0) - *(_QWORD *)(Inertia + 168)) < *(_QWORD *)(v58 + 240) )
    {
      if ( (v51 = *(float *)(Inertia + 12), v51 > 0.0) && !a3[3]
        || v51 < 0.0 && a3[3] == 2
        || (v51 = *(float *)(Inertia + 16), v51 > 0.0) && a3[3] == 1
        || v51 < 0.0 && a3[3] == 3 )
      {
        v6 = 1;
      }
    }
    v37 = v59;
  }
  v41 = v56 == 0;
  if ( v60 )
    v41 |= 2u;
  if ( v55 > 1 )
    v41 |= 4u;
  if ( v61 )
    v41 |= 8u;
  if ( v37 )
    v41 |= 0x10u;
  if ( v54 )
    v41 |= 0x80u;
  if ( v57 )
    v41 |= 0x1000u;
  v42 = DisambiguationArcData | v41;
  if ( v52 )
    v42 |= 0x40u;
  if ( v6 )
    v42 |= 0x20u;
  a3[1] = v42;
  return a3;
}
