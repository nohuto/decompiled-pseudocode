/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C01FC7A0
 * Callers:
 *     <none>
 * Callees:
 *     CalcVisRgn @ 0x1C0043F90 (CalcVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MirrorRegion @ 0x1C010608C (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029E348 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  HRGN v6; // rcx
  struct tagWND *v7; // rdi
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // r9d
  unsigned int RgnBox; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  HRGN v21; // [rsp+20h] [rbp-28h] BYREF
  __int128 v22; // [rsp+28h] [rbp-20h] BYREF

  v21 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_6;
  v9 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(v6, v5, v8) )
    v9 = 127;
  if ( (~v9 & a3) != 0 )
  {
    UserSetLastError(1004LL, v10, v11);
    goto LABEL_6;
  }
  v6 = v21;
  if ( !v21 )
  {
    v12 = 0;
    UserSetLastError(87LL, v10, v11);
    goto LABEL_7;
  }
  if ( (a3 & 2) != 0 )
  {
    v14 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v14 = 2 * (a3 & 4 | 0x4000200);
    v15 = v14 | 1;
    if ( (a3 & 0x10) != 0 )
      v15 = v14;
    v16 = v15 | 0x1000000;
    v22 = 0LL;
    if ( (a3 & 0x40) == 0 )
      v16 = v15;
    CalcVisRgn(&v21, v7, v7, v16);
    RgnBox = GreGetRgnBox(v21, &v22);
  }
  else
  {
    v18 = *((_QWORD *)v7 + 5);
    v19 = *(_QWORD *)(v18 + 168);
    if ( !v19 || (*(_BYTE *)(v18 + 21) & 8) != 0 )
      goto LABEL_6;
    RgnBox = GreCombineRgn(v21, v19, 0LL, 5LL);
  }
  v12 = RgnBox;
  if ( !RgnBox )
  {
LABEL_6:
    v12 = 0;
    goto LABEL_7;
  }
  v6 = (HRGN)*((_QWORD *)v7 + 5);
  if ( (*((_WORD *)v6 + 21) & 0x2FFF) != 0x29D )
  {
    v20 = GreOffsetRgn(v21, (unsigned int)-*((_DWORD *)v6 + 22), (unsigned int)-*((_DWORD *)v6 + 23));
    v6 = (HRGN)*((_QWORD *)v7 + 5);
    v12 = v20;
  }
  LOBYTE(v6) = ((a3 & 1) == 0) & (*((_BYTE *)v6 + 26) >> 6);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    MirrorRegion((__int64)v7, (unsigned __int64)v21, 0);
  if ( (a3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        v6 = **(HRGN **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL);
        if ( ((_DWORD)v6[16] & 1) != 0 )
        {
          v6 = (HRGN)*((_QWORD *)v7 + 5);
          if ( ((_DWORD)v6[72] & 0x4000000F) == 0x40000000 )
            GreScaleRgnToDestLogPixel(*((unsigned __int16 *)v6 + 142), v21);
        }
      }
    }
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v6);
  return v12;
}
