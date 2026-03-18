/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C001EDB4
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C001DCC0 (NtUserSetLayeredWindowAttributes.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 * Callees:
 *     UpdateSprite @ 0x1C00201F0 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0021060 (GetRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     GetRedirectionFlags @ 0x1C0024D40 (GetRedirectionFlags.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, int a2, char a3, int a4)
{
  bool v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned int v15; // edi
  __int64 v16; // rax
  _DWORD *v17; // r8
  __int64 v18; // rbx
  __int16 v19; // [rsp+60h] [rbp+7h] BYREF
  char v20; // [rsp+62h] [rbp+9h]
  char v21; // [rsp+63h] [rbp+Ah]
  _DWORD v22[2]; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD v23[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v24; // [rsp+78h] [rbp+1Fh] BYREF

  v8 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *((_QWORD *)a1 + 5);
    v10 = *(_DWORD *)(v9 + 232);
    if ( (v10 & 0x40) != 0 )
      *(_DWORD *)(v9 + 232) = v10 & 0xFFFFFFBF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags(a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1);
    if ( (int)result < 0 )
      return result;
    v8 = RedirectionBitmap == 0;
  }
  v19 = 0;
  v14 = a4 & 0xDFFFFFEF | 0x20000000;
  v21 = 0;
  v20 = a3;
  if ( RedirectionBitmap )
  {
    v22[0] = 0;
    v22[1] = 0;
    v24 = 0LL;
    v16 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
    v17 = (_DWORD *)*((_QWORD *)a1 + 5);
    v18 = v16;
    v23[0] = v17[24] - v17[22];
    v23[1] = v17[25] - v17[23];
    v15 = ((__int64 (__fastcall *)(_QWORD, struct tagWND *, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _DWORD *, int, __int16 *, unsigned int, unsigned __int64))UpdateSprite)(
            *(_QWORD *)(gpDispInfo + 40LL),
            a1,
            ghdcMem,
            0LL,
            0LL,
            v23,
            ghdcMem,
            v22,
            a2,
            &v19,
            v14,
            (unsigned __int64)&v24 & -(__int64)v8);
    GreSelectBitmap(ghdcMem, v18);
  }
  else
  {
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, struct tagWND *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, __int16 *, unsigned int, _QWORD))UpdateSprite)(
                           *(_QWORD *)(gpDispInfo + 40LL),
                           a1,
                           v13,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           a2,
                           &v19,
                           v14,
                           0LL);
  }
  return v15;
}
