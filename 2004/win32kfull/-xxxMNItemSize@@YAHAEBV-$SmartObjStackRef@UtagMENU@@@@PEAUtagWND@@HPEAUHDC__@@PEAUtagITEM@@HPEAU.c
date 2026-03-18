/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530
 * Callers:
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0061810 (GetDPIServerInfoForDpi.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0063704 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetDPIMETRICSForDpi @ 0x1C0064724 (GetDPIMETRICSForDpi.c)
 *     GreExtGetObjectW @ 0x1C0065958 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     MNIsOwnerDrawItem @ 0x1C00AECA0 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     FindCharPosition @ 0x1C025F2C0 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C0261844 (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C02BC6A8 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BC6F4 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(__int64 **a1, int a2, __int64 a3, HDC a4, _QWORD *a5, int a6, unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  unsigned int v11; // r15d
  __int64 *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rcx
  __int64 *v24; // rcx
  __int64 *v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 *v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // r10
  __int64 v37; // rcx
  unsigned int DpiForSystem; // eax
  int v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  unsigned int v41; // [rsp+B8h] [rbp+30h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  v11 = a3;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, (unsigned int)a3, a3);
  v40 = 0LL;
  v39 = DpiDependentMetric;
  if ( (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(v11) + 48) )
    {
      v40 = GreSelectFont(a4);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(v11);
      GetDPIMETRICSForDpi(v11);
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v14 = a1[2];
  if ( !v14 )
    v14 = (__int64 *)**a1;
  v15 = MNIsOwnerDrawItem(v14, a5);
  LODWORD(v18) = v15;
  v41 = v15;
  if ( !*(_QWORD *)(*a5 + 96LL) )
    goto LABEL_7;
  v26 = a1[2];
  if ( !v26 )
    v26 = (__int64 *)**a1;
  if ( (unsigned int)MNIsUAHMenu(v26, v16, v15, v17)
    && (v28 = *(_DWORD *)(*a5 + 96LL)) != 0
    && (v28 <= 3 || v28 - 5 <= 6) )
  {
LABEL_7:
    if ( !(_DWORD)v18 )
      goto LABEL_57;
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, v11, (__int64)a4);
    v19 = a1[2];
    if ( !v19 )
      v19 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v19, a5) != -1 )
    {
      v9 = *(_DWORD *)(*a5 + 104LL);
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(v11) + 8);
      }
      else
      {
        v23 = a1[2];
        if ( !v23 )
          v23 = (__int64 *)**a1;
        if ( (unsigned int)MNIsUAHMenu(v23, v20, v21, v22) )
          DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
      }
      LODWORD(v18) = v41;
      goto LABEL_17;
    }
  }
  else
  {
    v29 = *a5;
    if ( *(_QWORD *)(*a5 + 96LL) != -1LL )
    {
      if ( *(_DWORD *)(v29 + 104) != -1 )
        goto LABEL_49;
      if ( (*(_DWORD *)(v29 + 4) & 0x20000000) != 0 )
      {
        *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, v11, v18);
        *(_DWORD *)(*a5 + 108LL) = GetDpiDependentMetric(26LL, v11, v30);
        if ( *(_QWORD *)(*a5 + 96LL) == 1LL )
          *(_DWORD *)(*a5 + 104LL) += 2;
        goto LABEL_48;
      }
      v32 = a1[2];
      if ( !v32 )
        v32 = (__int64 *)**a1;
      if ( !(unsigned int)MNIsUAHMenu(v32, v16, v18, v27) )
      {
        if ( (unsigned int)GreExtGetObjectW(*(HBRUSH *)(*a5 + 96LL)) )
        {
          *(_DWORD *)(*a5 + 104LL) = 0;
          v34 = 0;
        }
        else
        {
          *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, v11, v33);
          v34 = GetDpiDependentMetric(26LL, v11, v35);
        }
        *(_DWORD *)(*a5 + 108LL) = v34;
LABEL_48:
        LODWORD(v18) = v41;
LABEL_49:
        v9 = *(_DWORD *)(*a5 + 104LL);
        if ( *(_DWORD *)(**a1 + 72) <= v9 )
          v16 = v9;
        else
          v16 = *(unsigned int *)(**a1 + 72);
        *(_DWORD *)(**a1 + 72) = v16;
        DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        if ( !v7 && DpiDependentMetric <= v39 )
          DpiDependentMetric = v39;
LABEL_17:
        if ( (_DWORD)v18 )
        {
LABEL_18:
          v24 = a1[2];
          if ( !v24 )
            v24 = (__int64 *)**a1;
          if ( (unsigned int)MNGetpItemIndex(v24, a5) != -1 && (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
          {
            if ( v40 )
              GreSelectFont(a4);
            else
              GreSetTextCharacterExtra(a4);
          }
          goto LABEL_22;
        }
LABEL_57:
        v36 = a5[3];
        if ( v36 )
        {
          if ( v7 )
          {
            if ( DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi(v11) + 28) )
              DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi(v11) + 28);
            v36 = a5[3];
          }
          FindCharPosition(v36, 9LL);
          xxxPSMGetTextExtent(a4);
          if ( v9 )
            v9 += 2;
          else
            v9 = 0;
        }
        if ( v7 )
        {
          v37 = **a1;
          if ( (*(_DWORD *)(*(_QWORD *)(v37 + 40) + 40LL) & 0x4000000) != 0
            || (v37 = **a1, *(int *)(*(_QWORD *)(v37 + 40) + 40LL) >= 0) )
          {
            DpiForSystem = GetDpiForSystem(v37, v16);
            v9 += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4);
          }
          v9 += 6;
          DpiDependentMetric += 2;
        }
        goto LABEL_18;
      }
    }
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, v11, (__int64)a4);
    v31 = a1[2];
    if ( !v31 )
      v31 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v31, a5) != -1 )
      goto LABEL_48;
  }
LABEL_22:
  a7[1] = DpiDependentMetric;
  *a7 = v9;
  return v41;
}
