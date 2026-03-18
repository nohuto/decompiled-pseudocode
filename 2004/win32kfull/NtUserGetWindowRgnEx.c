/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C01FD610
 * Callers:
 *     <none>
 * Callees:
 *     MirrorRegion @ 0x1C005BBAC (MirrorRegion.c)
 *     CalcVisRgn @ 0x1C0072BA0 (CalcVisRgn.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029F798 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  HRGN v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // r9d
  unsigned int RgnBox; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  HRGN v19; // [rsp+20h] [rbp-28h] BYREF
  __int128 v20; // [rsp+28h] [rbp-20h] BYREF

  v19 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_6;
  v9 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(v6, v5, v8) )
    v9 = 127;
  if ( (~v9 & a3) != 0 )
  {
    UserSetLastError(1004LL, v10, v8);
    goto LABEL_6;
  }
  v6 = v19;
  if ( !v19 )
  {
    v11 = 0;
    UserSetLastError(87LL, v10, v8);
    goto LABEL_7;
  }
  if ( (a3 & 2) != 0 )
  {
    v13 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v13 = 2 * (a3 & 4 | 0x4000200);
    v14 = v13 | 1;
    if ( (a3 & 0x10) != 0 )
      v14 = v13;
    v15 = v14 | 0x1000000;
    v20 = 0LL;
    if ( (a3 & 0x40) == 0 )
      v15 = v14;
    CalcVisRgn(&v19, v7, (struct tagWND *)v7, v15);
    RgnBox = GreGetRgnBox(v19, &v20);
  }
  else
  {
    v17 = *(_QWORD *)(v7 + 40);
    v5 = *(_QWORD *)(v17 + 168);
    if ( !v5 || (*(_BYTE *)(v17 + 21) & 8) != 0 )
      goto LABEL_6;
    RgnBox = GreCombineRgn(v19, v5, 0LL, 5LL);
  }
  v11 = RgnBox;
  if ( !RgnBox )
  {
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v6 = *(HRGN *)(v7 + 40);
  if ( (*((_WORD *)v6 + 21) & 0x3FFF) != 0x29D )
  {
    v18 = GreOffsetRgn(v19, (unsigned int)-*((_DWORD *)v6 + 22), (unsigned int)-*((_DWORD *)v6 + 23));
    v6 = *(HRGN *)(v7 + 40);
    v11 = v18;
  }
  LOBYTE(v6) = ((a3 & 1) == 0) & (*((_BYTE *)v6 + 26) >> 6);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    MirrorRegion(v7, (unsigned __int64)v19, 0);
  if ( (a3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) )
      {
        v6 = **(HRGN **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL);
        if ( ((_DWORD)v6[16] & 1) != 0 )
        {
          v6 = *(HRGN *)(v7 + 40);
          if ( ((_DWORD)v6[72] & 0x4000000F) == 0x40000000 )
            GreScaleRgnToDestLogPixel(*((unsigned __int16 *)v6 + 142), v19);
        }
      }
    }
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v6, v5, v8);
  return v11;
}
