/*
 * XREFs of _xxxCalcCaptionButton@24 @ 0x1A52FE
 * Callers:
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxGetTitleBarInfoEx@8 @ 0x1A70D8 (_xxxGetTitleBarInfoEx@8.c)
 * Callees:
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _xxxMNCanClose@4 @ 0x31A3A (_xxxMNCanClose@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 */

int __fastcall xxxCalcCaptionButton(_DWORD *a1, int a2, __int16 *a3, int *a4, int *a5, int a6)
{
  int v7; // edx
  int v8; // eax
  INT v9; // esi
  int WindowDpiLastNotify; // eax
  int v11; // eax
  int v12; // esi
  int v13; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v16; // ecx
  int v17; // eax
  int WindowBordersForDpiWithCompatFlags2; // eax
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  __int16 *v23; // eax
  int v24; // eax
  int v25; // esi
  int *v26; // eax
  __int16 v27; // cx
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  int v32; // eax
  int v35; // [esp+14h] [ebp-Ch]
  int v36; // [esp+14h] [ebp-Ch]
  int v37; // [esp+14h] [ebp-Ch]
  int v38; // [esp+18h] [ebp-8h]
  INT v39; // [esp+1Ch] [ebp-4h]
  int v40; // [esp+1Ch] [ebp-4h]
  int v41; // [esp+28h] [ebp+8h]
  int DpiDependentMetric; // [esp+2Ch] [ebp+Ch]

  *a3 = 0;
  v7 = a1[5];
  v35 = v7;
  v8 = *(_DWORD *)(v7 + 184) & 0xF;
  if ( v8 == 3 )
  {
    v9 = (*(_DWORD *)(v7 + 184) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v7 + 144) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    v7 = v35;
    v9 = WindowDpiLastNotify;
  }
  else if ( !v8 && (v11 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v11 + 4) + 32) & 1) != 0 )
  {
    v9 = 96;
  }
  else
  {
    v9 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
  }
  v39 = v9;
  if ( (*(_BYTE *)(v7 + 23) & 0x20) != 0 )
  {
    v12 = -3;
  }
  else
  {
    v13 = *(_DWORD *)(v7 + 16);
    v36 = *(_DWORD *)(v7 + 20);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
    {
      v17 = *(_DWORD *)(ThreadWin32Thread + 352);
    }
    else
    {
      v16 = 0;
      v17 = 0;
    }
    WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(v36, v13, v16, 0, v9, v17);
    v7 = a1[5];
    v12 = -WindowBordersForDpiWithCompatFlags2;
  }
  *a4 = *(_DWORD *)(v7 + 52) - v12;
  a4[2] = v12 + *(_DWORD *)(v7 + 60);
  a4[1] = *(_DWORD *)(v7 + 56) - v12;
  a4[3] = v12 + *(_DWORD *)(v7 + 64);
  v20 = a1[5];
  v38 = -*(_DWORD *)(v20 + 52);
  v21 = (*(char *)(v20 + 16) >> 7) & 0xB;
  v37 = -*(_DWORD *)(v20 + 56);
  DpiDependentMetric = GetDpiDependentMetric(v21 + 12, v39);
  v40 = GetDpiDependentMetric(v21 + 13, v39);
  if ( a2 == 5 )
  {
    if ( xxxMNCanClose(a1) || a6 )
    {
      if ( *(char *)(a1[5] + 16) >= 0 )
        v22 = 0;
      else
        v22 = 41;
      *a5 = v22;
      v23 = a3;
      *a3 = -4000;
      goto LABEL_38;
    }
LABEL_37:
    v23 = a3;
LABEL_38:
    v25 = DpiDependentMetric;
LABEL_39:
    if ( !*v23 )
      return (unsigned __int16)v38 | ((unsigned __int16)v37 << 16);
    goto LABEL_40;
  }
  v24 = a1[5];
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      if ( (*(_BYTE *)(v24 + 22) & 1) == 0 && !a6 )
        goto LABEL_37;
      v25 = DpiDependentMetric;
      a4[2] -= DpiDependentMetric;
      v26 = a5;
      if ( (*(_BYTE *)(a1[5] + 23) & 1) != 0 )
        goto LABEL_27;
      *a5 = 14;
      v27 = -4048;
    }
    else
    {
      if ( (*(_BYTE *)(v24 + 17) & 4) == 0 )
        goto LABEL_37;
      v27 = -3712;
      v25 = DpiDependentMetric;
      a4[2] -= DpiDependentMetric;
      *a5 = 11;
    }
LABEL_29:
    v23 = a3;
    *a3 = v27;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)(v24 + 22) & 2) == 0 && !a6 )
    goto LABEL_37;
  v25 = DpiDependentMetric;
  LOWORD(v38) = v38 + 2;
  a4[2] += -2 * DpiDependentMetric;
  v26 = a5;
  if ( (*(_BYTE *)(a1[5] + 23) & 0x20) == 0 )
  {
    *a5 = 4;
    v27 = -4064;
    goto LABEL_29;
  }
LABEL_27:
  *v26 = 8;
  *a3 = -3808;
LABEL_40:
  v28 = a4[2];
  v29 = a4[1];
  LOWORD(v38) = v28 - v25 + v38;
  LOWORD(v37) = v29 + v37 + 2;
  v30 = v28 - v25 - 1;
  *a4 = v30;
  a4[2] = v28 + 1;
  v41 = v28 + 1;
  a4[1] = v29 - 1;
  a4[3] = v29 + v40 + 1;
  v31 = a1[5];
  if ( (*(_BYTE *)(v31 + 18) & 0x40) != 0 )
  {
    v32 = *(_DWORD *)(v31 + 52) + *(_DWORD *)(v31 + 60) - v30;
    a4[2] = v32;
    *a4 = v32 + v30 - v41;
  }
  return (unsigned __int16)v38 | ((unsigned __int16)v37 << 16);
}
