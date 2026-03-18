/*
 * XREFs of __ChildWindowFromPointEx@16 @ 0x17BE7F
 * Callers:
 *     _NtUserChildWindowFromPointEx@16 @ 0x160221 (_NtUserChildWindowFromPointEx@16.c)
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _LayerHitTest@12 @ 0x17B8DE (_LayerHitTest@12.c)
 */

_DWORD *__fastcall _ChildWindowFromPointEx(_DWORD *a1, char a2, int a3, int a4)
{
  PKTHREAD CurrentThread; // eax
  PKTHREAD v6; // eax
  unsigned int v7; // esi
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // edx
  HWND v12; // ebx
  HDEV v13; // edx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // esi
  int v17; // ebx
  HDEV v18; // ebx
  HWND v19; // edx
  int v20; // eax
  int v23; // [esp+14h] [ebp-Ch]
  _DWORD v24[2]; // [esp+18h] [ebp-8h] BYREF

  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
    {
      v6 = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v6) + 260) + 148) & 0x20) == 0 )
      {
        v7 = *(_DWORD *)(a1[5] + 184);
        if ( (((v7 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
          || ((*(_DWORD *)(a1[5] + 184) & 0xF) != 2 || (*(_DWORD *)(a1[5] + 184) & 0x20000000) == 0
            ? (v8 = 0)
            : (v8 = 1),
              (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
            ? (v9 = 0)
            : (v9 = 1),
              v8 != v9) )
        {
          TransformPointBetweenCoordinateSpaces(&a3, &a3, a1, 0);
        }
      }
    }
  }
  v10 = a1[5];
  if ( a1 == (_DWORD *)_GetDesktopWindow(a1) )
  {
    v12 = (HWND)a4;
    v11 = a3;
  }
  else
  {
    if ( (*(_BYTE *)(v10 + 18) & 0x40) != 0 )
      v11 = *(_DWORD *)(v10 + 76) - a3;
    else
      v11 = *(_DWORD *)(v10 + 68) + a3;
    a3 = v11;
    v12 = (HWND)(*(_DWORD *)(v10 + 72) + a4);
    a4 = (int)v12;
  }
  v24[0] = v11;
  v24[1] = v12;
  if ( !PtInRect((_DWORD *)(v10 + 68), v11, (int)v12) )
    return 0;
  v14 = *(_DWORD *)(v10 + 108);
  if ( v14 )
  {
    if ( !GrePtInRegion(v14, v13, v12) )
      return 0;
    v12 = (HWND)a4;
    v13 = (HDEV)a3;
  }
  v15 = a1[5];
  if ( (*(_BYTE *)(v15 + 18) & 8) == 0 || (*(_BYTE *)(v15 + 144) & 0x20) != 0 || LayerHitTest((int)a1, v13, v12) )
  {
    v16 = (_DWORD *)a1[15];
    if ( !v16 )
      return a1;
    v17 = a2 & 1;
    while ( 1 )
    {
      TransformPointBetweenCoordinateSpaces(&a3, v24, v16, a1);
      if ( v17 && ((*(_BYTE *)(v16[5] + 23) & 0x10) == 0 || IsWindowDesktopComposed(v16) && GetWindowCloakState(v16))
        || (a2 & 2) != 0 && (*(_BYTE *)(v16[5] + 23) & 8) != 0
        || (a2 & 4) != 0 && (*(_BYTE *)(v16[5] + 16) & 0x20) != 0 )
      {
        goto LABEL_46;
      }
      v18 = (HDEV)a3;
      v23 = v16[5];
      if ( PtInRect((_DWORD *)(v23 + 52), a3, a4) )
      {
        v20 = *(_DWORD *)(v23 + 108);
        if ( !v20 )
          goto LABEL_42;
        if ( GrePtInRegion(v20, v18, v19) )
          break;
      }
LABEL_45:
      v17 = a2 & 1;
LABEL_46:
      v16 = (_DWORD *)v16[12];
      if ( !v16 )
        return a1;
    }
    v19 = (HWND)a4;
    v18 = (HDEV)a3;
LABEL_42:
    if ( (*(_BYTE *)(v16[5] + 18) & 8) == 0 || (*(_BYTE *)(a1[5] + 144) & 0x20) != 0 || LayerHitTest((int)v16, v18, v19) )
      return v16;
    goto LABEL_45;
  }
  return 0;
}
