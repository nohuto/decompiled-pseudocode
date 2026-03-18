/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656
 * Callers:
 *     _NtUserGetTitleBarInfo@8 @ 0x67B20 (_NtUserGetTitleBarInfo@8.c)
 *     _xxxGetTitleBarInfoEx@8 @ 0x1A70D8 (_xxxGetTitleBarInfoEx@8.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     _xxxMNCanClose@4 @ 0x31A3A (_xxxMNCanClose@4.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(int a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // esi
  int *ThreadWin32Thread; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // edx
  INT v16; // esi
  bool v17; // zf
  int DpiDependentMetric; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  char v27; // cl
  int v28; // eax
  int v29; // eax
  int v30; // eax
  char v31; // cl
  int v32; // eax
  int v33; // eax
  char *v34; // eax
  int v35; // [esp+Ch] [ebp-1Ch]
  int v36; // [esp+Ch] [ebp-1Ch]
  PKTHREAD CurrentThread; // [esp+14h] [ebp-14h]
  int v39; // [esp+14h] [ebp-14h]
  int v40; // [esp+18h] [ebp-10h]
  int v41; // [esp+1Ch] [ebp-Ch]
  INT b; // [esp+20h] [ebp-8h]
  int v43; // [esp+24h] [ebp-4h]

  v3 = a2[5] | 0x100000;
  a2[5] = v3;
  v4 = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v4 + 22) & 0xC0) != 0xC0 )
  {
    a2[5] = v3 | 0x8000;
    return;
  }
  if ( (*(_BYTE *)(v4 + 23) & 0x20) == 0 && (*(_BYTE *)(v4 + 8) & 8) == 0 )
  {
    a2[5] = v3 | 0x10000;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    return;
  }
  v5 = *(_DWORD *)(v4 + 184) & 0xF;
  if ( v5 == 3 )
  {
    v6 = (*(_DWORD *)(v4 + 184) >> 8) & 0x1FF;
LABEL_17:
    b = v6;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v4 + 144) & 0x8000000) != 0 )
  {
    LOWORD(v6) = *(_WORD *)(v4 + 182);
    if ( !(_WORD)v6 )
      LOWORD(v6) = *(_WORD *)(v4 + 180);
    v6 = (unsigned __int16)v6;
    goto LABEL_17;
  }
  if ( v5 || (v7 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 248)) == 0 || (*(_BYTE *)(**(_DWORD **)(v7 + 4) + 32) & 1) == 0 )
  {
    v6 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) + 160);
    goto LABEL_17;
  }
  b = 96;
LABEL_18:
  v8 = (_DWORD *)(v4 + 52);
  a2[1] = *v8++;
  a2[2] = *v8++;
  a2[3] = *v8;
  a2[4] = v8[1];
  v9 = *(_DWORD *)(a1 + 20);
  v40 = *(_DWORD *)(v9 + 16);
  v35 = *(_DWORD *)(v9 + 20);
  CurrentThread = KeGetCurrentThread();
  v41 = 0;
  v10 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  v12 = 0;
  if ( *(_DWORD *)(v10 + 340) <= 0x9900u )
    v13 = *(_DWORD *)(v10 + 352);
  else
    v13 = 0;
  v14 = 0;
  v39 = v13;
  v43 = 0;
  if ( (v40 & 0x100) != 0 )
  {
    v14 = 2;
  }
  else
  {
    if ( ((unsigned int)&loc_20000 & v40) == 0 )
      goto LABEL_29;
    v14 = 1;
  }
  v43 = v14;
LABEL_29:
  if ( (v35 & 0xC00000) != 0 || (v40 & 1) != 0 )
    v43 = v14 + 1;
  v15 = v13 & 0x10000000;
  if ( (v13 & 0x10000000) != 0 )
  {
    v16 = b;
  }
  else
  {
    v17 = (v13 & 0x20000000) == 0;
    v16 = b;
    if ( v17 )
    {
      if ( b == *(unsigned __int16 *)(_gpsi + 6242) )
      {
        v12 = *(_DWORD *)(_gpsi + 2000);
      }
      else if ( b == 96 )
      {
        v12 = *(_DWORD *)(_gpsi + 2120);
      }
      else
      {
        if ( GetDpiCacheSlot(b) == -1 )
          DpiDependentMetric = _ScaleSystemMetricForDPIWithoutCache(29, b);
        else
          DpiDependentMetric = GetDpiDependentMetric(29, b);
        v15 = 0;
        v12 = DpiDependentMetric;
      }
    }
    v41 = v12;
  }
  if ( (((unsigned int)&loc_3FFFD + 3) & v35) == 0
    && (v12 <= 0 || (v35 & 0xC00000) != 12582912 && (v35 & 0x40000) == 0 || (v39 & 0x30000000) != 0) )
  {
    v21 = v43;
  }
  else
  {
    if ( v15 )
    {
      v19 = 1;
    }
    else
    {
      v19 = (v16 * *(_DWORD *)(Get96DpiServerInfo() + 4) + 48) / 96;
      v36 = v19;
      if ( (v39 & 0x20000000) != 0 )
      {
        if ( v16 == *(unsigned __int16 *)(_gpsi + 6242) )
        {
          v20 = *(_DWORD *)(_gpsi + 2000);
        }
        else if ( v16 == 96 )
        {
          v20 = *(_DWORD *)(_gpsi + 2120);
        }
        else if ( GetDpiCacheSlot(v16) == -1 )
        {
          v20 = _ScaleSystemMetricForDPIWithoutCache(29, v16);
        }
        else
        {
          v20 = GetDpiDependentMetric(29, v16);
        }
        v19 = v20 + v36;
      }
    }
    v21 = v19 + v41 + v43;
  }
  a2[1] += v21;
  a2[3] -= v21;
  a2[2] += v21;
  a2[4] -= v21;
  if ( *(char *)(*(_DWORD *)(a1 + 20) + 16) >= 0 )
    v22 = GetDpiDependentMetric(2, v16);
  else
    v22 = GetDpiDependentMetric(22, v16);
  a2[4] = a2[2] + v22;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 22) & 8) != 0 && _HasCaptionIcon(a1) )
  {
    v23 = a2[4];
    v24 = a2[2];
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 0x40) != 0 )
      a2[3] += v24 - v23 + 1;
    else
      a2[1] += v23 - v24 - 1;
  }
  v25 = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v25 + 22) & 8) != 0 || (*(_BYTE *)(v25 + 13) & 2) == 0 )
  {
    if ( !xxxMNCanClose(a1) )
      a2[10] |= 1u;
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 13) & 0x10) != 0 )
      a2[10] |= 8u;
  }
  else
  {
    a2[10] |= 0x8000u;
  }
  v26 = *(_DWORD *)(a1 + 20);
  v27 = *(_BYTE *)(v26 + 22);
  if ( (v27 & 8) != 0 || (*(_BYTE *)(v26 + 13) & 2) == 0 )
  {
    if ( (v27 & 1) == 0 )
    {
      v28 = a2[8];
      if ( (v27 & 2) != 0 )
        v29 = v28 | 1;
      else
        v29 = v28 | 0x8000;
      a2[8] = v29;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 13) & 0x20) != 0 )
      a2[8] |= 8u;
  }
  else
  {
    a2[8] |= 0x8000u;
  }
  v30 = *(_DWORD *)(a1 + 20);
  v31 = *(_BYTE *)(v30 + 22);
  if ( (v31 & 8) != 0 || (*(_BYTE *)(v30 + 13) & 2) == 0 )
  {
    if ( (v31 & 2) == 0 )
    {
      v32 = a2[7];
      if ( (v31 & 1) != 0 )
        v33 = v32 | 1;
      else
        v33 = v32 | 0x8000;
      a2[7] = v33;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 13) & 0x40) != 0 )
      a2[7] |= 8u;
  }
  else
  {
    a2[7] |= 0x8000u;
  }
  v34 = *(char **)(a1 + 20);
  if ( (v34[17] & 4) == 0 || (v34[22] & 3) != 0 )
  {
    a2[9] |= 0x8000u;
  }
  else if ( v34[13] < 0 )
  {
    a2[9] |= 8u;
  }
  a2[6] = 0x8000;
}
