/*
 * XREFs of _NtUserGetWindowRgnEx@12 @ 0x4329C
 * Callers:
 *     <none>
 * Callees:
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _MirrorRegion@12 @ 0x9CC70 (_MirrorRegion@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreScaleRgnToDestLogPixel@8 @ 0x1FD5E2 (_GreScaleRgnToDestLogPixel@8.c)
 */

int __stdcall NtUserGetWindowRgnEx(int a1, int a2, int a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  unsigned int v5; // eax
  int RgnBox; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v11; // eax
  int v12; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v14; // eax
  PKTHREAD v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD *v19; // [esp+10h] [ebp-18h]
  _BYTE v20[16]; // [esp+14h] [ebp-14h] BYREF

  v18 = a2;
  EnterSharedCrit(0, 1);
  v3 = (_DWORD *)ValidateHwnd(a1);
  v19 = v3;
  if ( !v3 )
    goto LABEL_28;
  v4 = 63;
  if ( UserUnsafeIsCurrentProcessDwm() )
    v4 = 127;
  if ( (~v4 & a3) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_28;
  }
  if ( !v18 )
  {
    v7 = 0;
    UserSetLastError(87);
    goto LABEL_19;
  }
  if ( (a3 & 2) != 0 )
  {
    memset(v20, 0, sizeof(v20));
    v5 = 2 * (a3 & 4 | 0x4000200);
    if ( (a3 & 8) != 0 )
      v5 |= 0x10u;
    if ( (a3 & 0x10) == 0 )
      v5 |= 1u;
    if ( (a3 & 0x40) != 0 )
      v5 |= 0x1000000u;
    v3 = v19;
    CalcVisRgn((int)&v18, v19, (int)v19, (struct tagWND *)v5);
    RgnBox = GreGetRgnBox(v18, v20);
  }
  else
  {
    v11 = v3[5];
    v12 = *(_DWORD *)(v11 + 108);
    if ( !v12 || (*(_BYTE *)(v11 + 13) & 8) != 0 )
      goto LABEL_28;
    RgnBox = GreCombineRgn(v18, v12, 0, 5);
  }
  v7 = RgnBox;
  if ( !RgnBox )
  {
LABEL_28:
    v7 = 0;
    goto LABEL_19;
  }
  v8 = v3[5];
  if ( (*(_WORD *)(v8 + 30) & 0x3FFF) != 0x29D )
  {
    v9 = GreOffsetRgn(v18, -*(_DWORD *)(v8 + 52), -*(_DWORD *)(v8 + 56));
    v8 = v3[5];
    v7 = v9;
  }
  if ( (*(_BYTE *)(v8 + 18) & 0x40) != 0 && (a3 & 1) == 0 )
    MirrorRegion(v3, v18, 0);
  if ( (a3 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( W32GetThreadWin32Thread(CurrentThread) )
    {
      v14 = KeGetCurrentThread();
      if ( *(_DWORD *)(W32GetThreadWin32Thread(v14) + 248) )
      {
        v15 = KeGetCurrentThread();
        if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v15) + 248) + 4) + 32) & 1) != 0 )
        {
          v16 = v3[5];
          v17 = *(_DWORD *)(v16 + 184);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            LOWORD(v16) = *(_WORD *)(v16 + 180);
            GreScaleRgnToDestLogPixel(v16, v18);
          }
        }
      }
    }
  }
LABEL_19:
  UserSessionSwitchLeaveCrit();
  return v7;
}
