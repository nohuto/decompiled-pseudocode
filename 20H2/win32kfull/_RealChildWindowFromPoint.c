/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C0248D8C
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C0200580 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall RealChildWindowFromPoint(__int64 a1, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v19; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp+28h] BYREF

  v20 = a2;
  if ( a1 )
  {
    v3 = 1;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
    {
      v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v4 + 224) & 0x20) == 0 )
      {
        v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v5 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v4) >> 8)) & 0x1FF) != 0 )
          goto LABEL_13;
        v6 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
        v7 = (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 && (v6 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v6) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v8) & 0x20000000) == 0 )
        {
          v3 = 0;
        }
        if ( v7 != v3 )
LABEL_13:
          TransformPointBetweenCoordinateSpaces(&v20, &v20, a1, 0LL);
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    LODWORD(v20) = *(_DWORD *)(v9 + 104) + v20;
    HIDWORD(v20) += *(_DWORD *)(v9 + 108);
  }
  if ( !PtInRect((_DWORD *)(v9 + 104), v20) )
    return 0LL;
  v13 = *(_QWORD *)(v10 + 168);
  if ( v13 )
  {
    if ( !(unsigned int)GrePtInRegion(v13, v11, v12) )
      return 0LL;
  }
  v14 = *(_QWORD **)(a1 + 112);
  v15 = 0LL;
  v19 = v20;
  if ( !v14 )
    return (_QWORD *)a1;
  do
  {
    if ( (*(_BYTE *)(v14[5] + 31LL) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v14) || !(unsigned int)GetWindowCloakState(v14)) )
    {
      TransformPointBetweenCoordinateSpaces(&v20, &v19, v14, a1);
      if ( PtInRect((_DWORD *)(v14[5] + 88LL), v20) )
      {
        v17 = *(_QWORD *)(v16 + 168);
        if ( !v17 || (unsigned int)GrePtInRegion(v17, (unsigned int)v20, HIDWORD(v20)) )
        {
          if ( *(_WORD *)(gpsi + 868LL) != *(_WORD *)(*(_QWORD *)(v14[17] + 8LL) + 2LL)
            || (*(_BYTE *)(v14[5] + 28LL) & 0xF) != 7 )
          {
            return v14;
          }
          v15 = v14;
        }
      }
    }
    v14 = (_QWORD *)v14[11];
  }
  while ( v14 );
  if ( !v15 )
    return (_QWORD *)a1;
  return v15;
}
