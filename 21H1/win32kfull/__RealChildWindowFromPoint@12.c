/*
 * XREFs of __RealChildWindowFromPoint@12 @ 0x1A6C64
 * Callers:
 *     _NtUserRealChildWindowFromPoint@12 @ 0x167DF3 (_NtUserRealChildWindowFromPoint@12.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

_DWORD *__thiscall _RealChildWindowFromPoint(_DWORD *this, int a2, int a3)
{
  PKTHREAD CurrentThread; // eax
  PKTHREAD v5; // eax
  unsigned int v6; // esi
  int v7; // esi
  _DWORD *v8; // ebx
  int DesktopWindow; // eax
  int v10; // edx
  int v11; // esi
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // esi
  _DWORD *v15; // ebx
  int v16; // edx
  int v17; // eax
  int v19; // [esp+Ch] [ebp-Ch]
  _DWORD v20[2]; // [esp+10h] [ebp-8h] BYREF

  if ( this )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
    {
      v5 = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v5) + 260) + 148) & 0x20) == 0 )
      {
        v6 = *(_DWORD *)(this[5] + 184);
        if ( (((v6 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
          goto LABEL_12;
        v7 = 1;
        if ( (*(_DWORD *)(this[5] + 184) & 0xF) != 2 || (v19 = 1, (*(_DWORD *)(this[5] + 184) & 0x20000000) == 0) )
          v19 = 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0 )
        {
          v7 = 0;
        }
        if ( v19 != v7 )
LABEL_12:
          TransformPointBetweenCoordinateSpaces(&a2, &a2, this, 0);
      }
    }
  }
  v8 = (_DWORD *)this[5];
  DesktopWindow = _GetDesktopWindow(this);
  v10 = a2;
  v11 = a3;
  if ( this != (_DWORD *)DesktopWindow )
  {
    v10 = v8[17] + a2;
    a2 = v10;
    v11 = v8[18] + a3;
    a3 = v11;
  }
  if ( !PtInRect(v8 + 17, v10, v11) )
    return 0;
  v13 = v8[27];
  if ( !v13 )
    goto LABEL_19;
  if ( !GrePtInRegion(v13, v12, v11) )
    return 0;
  v11 = a3;
  v12 = a2;
LABEL_19:
  v20[1] = v11;
  v14 = (_DWORD *)this[15];
  v20[0] = v12;
  if ( !v14 )
    return this;
  v15 = 0;
  do
  {
    if ( (*(_BYTE *)(v14[5] + 23) & 0x10) != 0 && (!IsWindowDesktopComposed(v14) || !GetWindowCloakState(v14)) )
    {
      TransformPointBetweenCoordinateSpaces(&a2, v20, v14, this);
      if ( PtInRect((_DWORD *)(v14[5] + 52), a2, a3) )
      {
        v17 = *(_DWORD *)(v16 + 108);
        if ( !v17 || GrePtInRegion(v17, a2, a3) )
        {
          if ( *(_WORD *)(_gpsi + 468) != *(_WORD *)(*(_DWORD *)(v14[19] + 4) + 2)
            || (*(_BYTE *)(v14[5] + 20) & 0xF) != 7 )
          {
            return v14;
          }
          v15 = v14;
        }
      }
    }
    v14 = (_DWORD *)v14[12];
  }
  while ( v14 );
  if ( !v15 )
    return this;
  return v15;
}
