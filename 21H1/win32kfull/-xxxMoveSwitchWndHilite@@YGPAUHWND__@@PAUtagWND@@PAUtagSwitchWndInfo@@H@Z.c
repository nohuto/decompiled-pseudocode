/*
 * XREFs of ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854
 * Callers:
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YGPAPAUHWND__@@PAUtagSwitchWndInfo@@PAPAU1@H@Z @ 0x15C62F (-NextPrevPhwnd@@YGPAPAUHWND__@@PAUtagSwitchWndInfo@@PAPAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YGHPAUtagSwitchWndInfo@@HHH@Z @ 0x15C660 (-NextPrevTaskIndex@@YGHPAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 */

int __userpurge xxxMoveSwitchWndHilite@<eax>(
        int a1@<edx>,
        struct tagEVENTHOOK *a2@<ecx>,
        struct tagWND *a3,
        struct tagSwitchWndInfo *a4,
        int a5)
{
  struct tagSwitchWndInfo *v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  struct tagSwitchWndInfo *v9; // edi
  int v10; // eax
  int v11; // ecx
  HDC v12; // ecx
  HWND *v14; // [esp+0h] [ebp-1Ch]
  int v15; // [esp+0h] [ebp-1Ch]
  int v16; // [esp+0h] [ebp-1Ch]
  int v17; // [esp+4h] [ebp-18h]
  int v18; // [esp+4h] [ebp-18h]
  struct tagCURSOR *v19; // [esp+4h] [ebp-18h]
  int v20; // [esp+Ch] [ebp-10h]
  BOOL v21; // [esp+10h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-4h]
  struct tagWND *DCEx; // [esp+24h] [ebp+8h]

  v5 = (struct tagSwitchWndInfo *)a1;
  v23 = 0;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 52);
  if ( a3 )
  {
    if ( v6 <= 0 )
    {
      if ( v7 <= 0 )
      {
        if ( *(_DWORD *)(a1 + 28) )
        {
          v6 = *(_DWORD *)(a1 + 36);
          v8 = *(_DWORD *)(a1 + 32) - v6;
          v23 = 1;
          if ( v8 < 0 )
            v8 += *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 32) = v8;
          goto LABEL_11;
        }
        v7 = *(_DWORD *)(a1 + 40);
        v6 = *(_DWORD *)(a1 + 44);
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 36);
      }
      --v7;
    }
LABEL_11:
    v9 = (struct tagSwitchWndInfo *)(v6 - 1);
    goto LABEL_23;
  }
  if ( v7 == *(_DWORD *)(a1 + 40) - 1 )
  {
    v10 = *(_DWORD *)(a1 + 44);
    v11 = 1;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 36);
    v11 = 0;
  }
  if ( v6 < v10 - 1 )
  {
    v9 = (struct tagSwitchWndInfo *)(v6 + 1);
    goto LABEL_23;
  }
  if ( v11 )
  {
    if ( *(_DWORD *)(a1 + 28) )
    {
      v23 = 1;
      *(_DWORD *)(a1 + 32) = NextPrevTaskIndex(
                               *(_DWORD *)(a1 + 32),
                               a1,
                               *(struct tagSwitchWndInfo **)(a1 + 36),
                               1,
                               (int)v14,
                               v17);
      v9 = 0;
      goto LABEL_23;
    }
    v7 = 0;
  }
  else
  {
    ++v7;
  }
  v9 = 0;
LABEL_23:
  v21 = a3 == 0;
  *((_DWORD *)v5 + 4) = NextPrevPhwnd(*((_DWORD *)v5 + 4), (int)v5, (struct tagSwitchWndInfo *)v21, v14, v17);
  DCEx = (struct tagWND *)_GetDCEx(a2, 0, 0x10000);
  DrawSwitchWndHilite((HDC)DCEx, v5, *((struct tagSwitchWndInfo **)v5 + 12), *((HDC *)v5 + 13), 0, v15, v18);
  v12 = (HDC)*((_DWORD *)v5 + 4);
  *((_DWORD *)v5 + 13) = v7;
  *((_DWORD *)v5 + 12) = v9;
  v20 = *(_DWORD *)v12;
  if ( v23 )
  {
    xxxPaintIconsInSwitchWindow(DCEx, *((struct tagSwitchWndInfo **)v5 + 8), v12, 0, 1, v21, 0, v16, v19);
    v5 = Getpswi(a2);
  }
  if ( v5 )
  {
    DrawSwitchWndHilite((HDC)DCEx, v5, v9, (HDC)v7, 1, v16, (int)v19);
    _ReleaseDC(DCEx);
    xxxWindowEvent(0x8005u, a2, 0xFFFFFFFC, (struct tagSwitchWndInfo *)((char *)v9 + v7 * *((_DWORD *)v5 + 9) + 1), 1);
  }
  else
  {
    _ReleaseDC(DCEx);
  }
  return v20;
}
