/*
 * XREFs of _NtUserMoveWindow@24 @ 0x99F8E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _xxxMoveWindow@24 @ 0x9A1C4 (_xxxMoveWindow@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall NtUserMoveWindow(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v11; // eax
  unsigned int v12; // esi
  int v13; // esi
  int v14; // eax
  int v16; // [esp+Ch] [ebp-24h]
  int v17; // [esp+10h] [ebp-20h] BYREF
  int v18; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-14h] BYREF
  int v21; // [esp+20h] [ebp-10h]
  int v22; // [esp+24h] [ebp-Ch]
  int v23; // [esp+28h] [ebp-8h]

  v17 = 0;
  v18 = 0;
  v19 = 0;
  v6 = 0;
  EnterCrit(0, 1);
  v7 = ValidateHwnd(a1);
  v16 = v7;
  if ( v7 )
  {
    v8 = *(_WORD *)(*(_DWORD *)(v7 + 20) + 30) & 0x3FFF;
    if ( v8 != 669 && v8 != 671 )
    {
      v17 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v17;
      v18 = v7;
      HMLockObject(v7);
      if ( a2 > 0x7FFF )
      {
        a2 = 0x7FFF;
      }
      else if ( a2 < -32768 )
      {
        a2 = -32768;
      }
      if ( a3 > 0x7FFF )
      {
        a3 = 0x7FFF;
      }
      else if ( a3 < -32768 )
      {
        a3 = -32768;
      }
      if ( a4 < 0 )
      {
        a4 = 0;
      }
      else if ( a4 > 0x7FFF )
      {
        a4 = 0x7FFF;
      }
      v9 = a5;
      if ( a5 < 0 )
      {
        v9 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v9 = 0x7FFF;
      }
      CurrentThread = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
      {
        v11 = KeGetCurrentThread();
        if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 260) + 148) & 0x20) == 0 )
        {
          v12 = *(_DWORD *)(*(_DWORD *)(v16 + 20) + 184);
          if ( (((v12 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
            || ((*(_DWORD *)(*(_DWORD *)(v16 + 20) + 184) & 0xF) != 2
             || (*(_DWORD *)(*(_DWORD *)(v16 + 20) + 184) & 0x20000000) == 0
              ? (v13 = 0)
              : (v13 = 1),
                (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
             || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
              ? (v14 = 0)
              : (v14 = 1),
                v13 != v14) )
          {
            v20 = a2;
            v22 = a2 + a4;
            v23 = a3 + v9;
            v21 = a3;
            TransformRectBetweenCoordinateSpaces(&v20, &v20, v16, 0);
            a4 = v22 - v20;
            v9 = v23 - v21;
            a3 = v21;
          }
        }
      }
      v6 = xxxMoveWindow(a3, a4, v9, a6);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
