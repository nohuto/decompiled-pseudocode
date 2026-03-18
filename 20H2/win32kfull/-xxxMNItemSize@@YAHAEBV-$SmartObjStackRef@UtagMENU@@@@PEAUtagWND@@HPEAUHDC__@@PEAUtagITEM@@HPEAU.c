/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00356B4
 * Callers:
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 *     MNIsOwnerDrawItem @ 0x1C003583C (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0036B18 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GetDPIServerInfoForDpi @ 0x1C0037DEC (GetDPIServerInfoForDpi.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     FindCharPosition @ 0x1C025DCAC (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C02BB148 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BB194 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(__int64 **a1, int a2, unsigned int a3, HDC a4, _QWORD *a5, int a6, unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  __int64 *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  __int64 v24; // rdx
  __int64 *v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 *v29; // rcx
  int v30; // eax
  __int64 v31; // r10
  __int64 v32; // rcx
  unsigned int DpiForSystem; // eax
  int v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned int v36; // [rsp+B8h] [rbp+30h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v35 = 0LL;
  v34 = DpiDependentMetric;
  if ( (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
  {
    v24 = *(_QWORD *)(GetDPIMETRICSForDpi(a3) + 48);
    if ( v24 )
    {
      v35 = GreSelectFont(a4, v24);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3);
      GetDPIMETRICSForDpi(a3);
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v14 = a1[2];
  if ( !v14 )
    v14 = (__int64 *)**a1;
  v15 = MNIsOwnerDrawItem(v14, a5);
  LODWORD(v17) = v15;
  v36 = v15;
  if ( !*(_QWORD *)(*a5 + 96LL) )
    goto LABEL_7;
  v25 = a1[2];
  if ( !v25 )
    v25 = (__int64 *)**a1;
  if ( (unsigned int)MNIsUAHMenu(v25, v16, v15) && (v26 = *(_DWORD *)(*a5 + 96LL)) != 0 && (v26 <= 3 || v26 - 5 <= 6) )
  {
LABEL_7:
    if ( !(_DWORD)v17 )
      goto LABEL_57;
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
    v18 = a1[2];
    if ( !v18 )
      v18 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v18, a5) != -1 )
    {
      v9 = *(_DWORD *)(*a5 + 104LL);
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 8);
      }
      else
      {
        v21 = a1[2];
        if ( !v21 )
          v21 = (__int64 *)**a1;
        if ( (unsigned int)MNIsUAHMenu(v21, v19, v20) )
          DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
      }
      LODWORD(v17) = v36;
      goto LABEL_17;
    }
  }
  else
  {
    v27 = *a5;
    if ( *(_QWORD *)(*a5 + 96LL) != -1LL )
    {
      if ( *(_DWORD *)(v27 + 104) != -1 )
        goto LABEL_49;
      if ( (*(_DWORD *)(v27 + 4) & 0x20000000) != 0 )
      {
        *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
        *(_DWORD *)(*a5 + 108LL) = GetDpiDependentMetric(26LL, a3);
        if ( *(_QWORD *)(*a5 + 96LL) == 1LL )
          *(_DWORD *)(*a5 + 104LL) += 2;
        goto LABEL_48;
      }
      v29 = a1[2];
      if ( !v29 )
        v29 = (__int64 *)**a1;
      if ( !(unsigned int)MNIsUAHMenu(v29, v16, v17) )
      {
        if ( (unsigned int)GreExtGetObjectW(*(HBRUSH *)(*a5 + 96LL)) )
        {
          *(_DWORD *)(*a5 + 104LL) = 0;
          v30 = 0;
        }
        else
        {
          *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
          v30 = GetDpiDependentMetric(26LL, a3);
        }
        *(_DWORD *)(*a5 + 108LL) = v30;
LABEL_48:
        LODWORD(v17) = v36;
LABEL_49:
        v9 = *(_DWORD *)(*a5 + 104LL);
        if ( *(_DWORD *)(**a1 + 72) <= v9 )
          v16 = v9;
        else
          v16 = *(unsigned int *)(**a1 + 72);
        *(_DWORD *)(**a1 + 72) = v16;
        DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        if ( !v7 && DpiDependentMetric <= v34 )
          DpiDependentMetric = v34;
LABEL_17:
        if ( (_DWORD)v17 )
        {
LABEL_18:
          v22 = a1[2];
          if ( !v22 )
            v22 = (__int64 *)**a1;
          if ( (unsigned int)MNGetpItemIndex(v22, a5) != -1 && (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
          {
            if ( v35 )
              GreSelectFont(a4, v35);
            else
              GreSetTextCharacterExtra(a4);
          }
          goto LABEL_22;
        }
LABEL_57:
        v31 = a5[3];
        if ( v31 )
        {
          if ( v7 )
          {
            if ( DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 28) )
              DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 28);
            v31 = a5[3];
          }
          FindCharPosition(v31, 9LL);
          xxxPSMGetTextExtent(a4);
          if ( v9 )
            v9 += 2;
          else
            v9 = 0;
        }
        if ( v7 )
        {
          v32 = **a1;
          if ( (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 40LL) & 0x4000000) != 0
            || (v32 = **a1, *(int *)(*(_QWORD *)(v32 + 40) + 40LL) >= 0) )
          {
            DpiForSystem = GetDpiForSystem(v32, v16);
            v9 += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4);
          }
          v9 += 6;
          DpiDependentMetric += 2;
        }
        goto LABEL_18;
      }
    }
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
    v28 = a1[2];
    if ( !v28 )
      v28 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v28, a5) != -1 )
      goto LABEL_48;
  }
LABEL_22:
  a7[1] = DpiDependentMetric;
  *a7 = v9;
  return v36;
}
