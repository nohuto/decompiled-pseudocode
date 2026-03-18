/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C003CC6C
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C003CA60 (NtUserSetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C003C5D8 (GetRedirectionFlags.c)
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  unsigned int updated; // edi
  __int64 v9; // rbx

  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 232);
    if ( (v4 & 0x40) != 0 )
      *(_DWORD *)(v3 + 232) = v4 & 0xFFFFFFBF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
  {
    RedirectionBitmap = GetRedirectionBitmap(a1, v2);
    if ( RedirectionBitmap && (GetRedirectionFlags((__int64)a1) & 1) != 0
      || (result = SetRedirectedWindow(a1), (int)result >= 0) )
    {
      if ( RedirectionBitmap )
      {
        v9 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
        updated = UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, ghdcMem, 0LL);
        GreSelectBitmap(ghdcMem, v9);
      }
      else
      {
        return (unsigned int)UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v7, 0LL);
      }
      return updated;
    }
  }
  else
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  return result;
}
