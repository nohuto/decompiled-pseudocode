/*
 * XREFs of ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33
 * Callers:
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     __GetClientRect@8 @ 0xB2C9E (__GetClientRect@8.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 */

void __thiscall xxxPaintSwitchWindow(_DWORD *this)
{
  struct tagSwitchWndInfo *v2; // esi
  _DWORD *v3; // edi
  int ProcessDpiServerInfo; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  HDC v9; // ecx
  struct tagSwitchWndInfo *v10; // eax
  struct tagSwitchWndInfo *v11; // esi
  const RECT *v12; // [esp+0h] [ebp-28h]
  int v13; // [esp+0h] [ebp-28h]
  int v14; // [esp+0h] [ebp-28h]
  HBRUSH v15; // [esp+4h] [ebp-24h]
  struct tagCURSOR *v16; // [esp+4h] [ebp-24h]
  int v17; // [esp+4h] [ebp-24h]
  struct tagWND *DCEx; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  int v20[4]; // [esp+18h] [ebp-10h] BYREF

  if ( (*(_BYTE *)(this[5] + 23) & 0x10) != 0 )
  {
    v2 = Getpswi(this);
    if ( v2 )
    {
      DCEx = (struct tagWND *)_GetDCEx(this, 0, 0x10000);
      if ( !*((_DWORD *)v2 + 22) )
        goto LABEL_6;
      if ( (_GetKeyState(18) & 0x8000u) == 0 )
        goto LABEL_24;
      if ( !*((_DWORD *)v2 + 22) )
      {
LABEL_6:
        if ( (_GetAsyncKeyState(18) & 0x8000u) == 0 )
          goto LABEL_24;
      }
      v3 = (_DWORD *)((char *)v2 + 72);
      _GetClientRect((int)this, (_DWORD *)v2 + 18);
      FillRect(*(HDC *)(_gpsi + 4352), v12, v15);
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        ProcessDpiServerInfo = GetProcessDpiServerInfo();
      else
        ProcessDpiServerInfo = Get96DpiServerInfo();
      v19 = ProcessDpiServerInfo;
      v5 = *(_DWORD *)(ProcessDpiServerInfo + 16);
      v6 = 2 * *(_DWORD *)(ProcessDpiServerInfo + 12);
      *v3 += v6;
      *((_DWORD *)v2 + 20) -= v6;
      *((_DWORD *)v2 + 21) -= v5;
      *((_DWORD *)v2 + 19) += v5;
      *((_DWORD *)v2 + 19) = *((_DWORD *)v2 + 21) - *(_DWORD *)(ProcessDpiServerInfo + 16);
      if ( !*((_DWORD *)v2 + 22) )
        goto LABEL_13;
      if ( (_GetKeyState(18) & 0x8000u) == 0 )
        goto LABEL_24;
      if ( !*((_DWORD *)v2 + 22) )
      {
LABEL_13:
        if ( (_GetAsyncKeyState(18) & 0x8000u) == 0 )
          goto LABEL_24;
      }
      v7 = *(int *)(v19 + 12) >> 1;
      v8 = *(int *)(v19 + 16) >> 1;
      v20[0] = *v3 - v7;
      v20[2] = v7 + *((_DWORD *)v2 + 20);
      v20[1] = *((_DWORD *)v2 + 19) - v8;
      v20[3] = v8 + *((_DWORD *)v2 + 21);
      DrawEdge((HDC)DCEx, v20, 0xAu, 15);
      if ( !*((_DWORD *)v2 + 22) )
        goto LABEL_17;
      if ( (_GetKeyState(18) & 0x8000u) == 0 )
        goto LABEL_24;
      if ( !*((_DWORD *)v2 + 22) )
      {
LABEL_17:
        if ( (_GetAsyncKeyState(18) & 0x8000u) == 0 )
          goto LABEL_24;
      }
      xxxPaintIconsInSwitchWindow(
        v2,
        (int)this,
        DCEx,
        *((struct tagSwitchWndInfo **)v2 + 8),
        v9,
        *((_DWORD *)v2 + 6),
        0,
        0,
        0,
        v13,
        v16);
      v10 = Getpswi(this);
      v11 = v10;
      if ( v10 )
      {
        if ( *((_DWORD *)v10 + 22) )
        {
          if ( (_GetKeyState(18) & 0x8000u) == 0 )
            goto LABEL_24;
          if ( *((_DWORD *)v11 + 22) )
          {
LABEL_23:
            DrawSwitchWndHilite(
              (HDC)DCEx,
              v11,
              *((struct tagSwitchWndInfo **)v11 + 12),
              *((HDC *)v11 + 13),
              1,
              v14,
              v17);
            goto LABEL_24;
          }
        }
        if ( (_GetAsyncKeyState(18) & 0x8000u) != 0 )
          goto LABEL_23;
      }
LABEL_24:
      _ReleaseDC(DCEx);
    }
  }
}
