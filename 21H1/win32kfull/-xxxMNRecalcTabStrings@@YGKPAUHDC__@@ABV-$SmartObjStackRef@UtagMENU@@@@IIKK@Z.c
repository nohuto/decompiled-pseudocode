/*
 * XREFs of ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD
 * Callers:
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _MNIsOwnerDrawItem@8 @ 0x1A99A0 (_MNIsOwnerDrawItem@8.c)
 *     _FindCharPosition@8 @ 0x1B7A59 (_FindCharPosition@8.c)
 */

int __fastcall xxxMNRecalcTabStrings(HDC a1, int **a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // esi
  int v7; // ebx
  int v9; // ecx
  _DWORD **v10; // edx
  int *v11; // ecx
  _DWORD *v12; // edx
  BOOL v13; // ecx
  int v14; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v17; // ebx
  unsigned int v18; // edx
  int ProcessDpiMetrics; // eax
  int v20; // ecx
  unsigned int v21; // edx
  int v22; // eax
  int DpiForSystem; // eax
  int i; // ebx
  int v25; // ecx
  int v26; // eax
  struct tagSIZE v28; // [esp+Ch] [ebp-2Ch] BYREF
  int v29; // [esp+14h] [ebp-24h]
  int v30; // [esp+18h] [ebp-20h]
  _DWORD **v31; // [esp+1Ch] [ebp-1Ch]
  HDC v32; // [esp+20h] [ebp-18h]
  int CharPosition; // [esp+24h] [ebp-14h]
  int v34; // [esp+28h] [ebp-10h]
  int v35; // [esp+2Ch] [ebp-Ch]
  unsigned int v36; // [esp+30h] [ebp-8h]
  int v37; // [esp+34h] [ebp-4h]
  int v38; // [esp+48h] [ebp+10h]
  int v39; // [esp+48h] [ebp+10h]

  v6 = a3;
  v7 = 0;
  v30 = a5;
  v38 = a6 + a5;
  v32 = a1;
  v37 = 0;
  if ( a3 < *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) && a3 <= a4 )
  {
    v35 = 0;
    v9 = (int)a2[2];
    v36 = a3;
    if ( !v9 )
      v9 = **a2;
    v10 = (_DWORD **)MNGetpItemFromIndex(v9, a3);
    v31 = v10;
    if ( a3 < a4 )
    {
      while ( 1 )
      {
        if ( !v10 )
        {
LABEL_28:
          v6 = a3;
          goto LABEL_29;
        }
        v11 = a2[2];
        if ( !v11 )
          v11 = (int *)**a2;
        v13 = MNIsOwnerDrawItem(v11, v10);
        v14 = 0;
        *(_DWORD *)(*v12 + 52) = v30;
        v34 = v12[3];
        if ( v34 )
        {
          v29 = *(_DWORD *)(*v12 + 28);
          if ( v29 )
            break;
        }
        if ( v13 )
          goto LABEL_21;
LABEL_22:
        v7 = v38 + v14;
        if ( v7 <= v37 )
          v7 = v37;
        else
          v37 = v7;
        v20 = (int)a2[2];
        v21 = ++v36;
        if ( !v20 )
          v20 = **a2;
        v10 = (_DWORD **)MNGetpItemFromIndex(v20, v21);
        v31 = v10;
        if ( v36 >= a4 )
          goto LABEL_28;
      }
      if ( !v13 )
      {
        v28.cx = 0;
        v28.cy = 0;
        CharPosition = FindCharPosition(v34, 9);
        if ( CharPosition < v29 )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v17 = v34 + 2 * CharPosition;
          if ( CALL_LPK(ThreadWin32Thread) )
            xxxClientGetTextExtentPointW(v32, (const WCHAR *)(v17 + 2), v18, &v28);
          else
            GreGetTextExtentW(v32, (unsigned __int16 *)(v17 + 2), v18, &v28, 1);
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            ProcessDpiMetrics = GetProcessDpiMetrics();
          else
            ProcessDpiMetrics = Get96DpiMetrics();
          v14 = v28.cx + *(_DWORD *)(ProcessDpiMetrics + 4);
        }
        goto LABEL_22;
      }
LABEL_21:
      ++v35;
      goto LABEL_22;
    }
LABEL_29:
    if ( v35 != a4 - v6 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v22 = GetProcessDpiMetrics();
      else
        v22 = Get96DpiMetrics();
      v39 = v22;
      DpiForSystem = GetDpiForSystem();
      v7 += *(_DWORD *)(v39 + 4) + *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2);
      v37 = v7;
    }
    for ( i = v7 - a6; ; *(_DWORD *)(*(_DWORD *)v26 + 44) = i )
    {
      v25 = (int)a2[2];
      if ( !v25 )
        v25 = **a2;
      v26 = MNGetpItemFromIndex(v25, v6);
      if ( v6 >= a4 || !v26 )
        break;
      ++v6;
    }
    return v37;
  }
  return v7;
}
