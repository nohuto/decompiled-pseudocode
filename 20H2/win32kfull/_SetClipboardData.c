/*
 * XREFs of _SetClipboardData @ 0x1C0015CA4
 * Callers:
 *     NtUserSetClipboardData @ 0x1C00154E0 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 * Callees:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C0015D38 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SetClipboardData(unsigned int a1, char *a2, int a3, int a4)
{
  struct tagWINDOWSTATION *v8; // rcx
  unsigned int v9; // esi

  v8 = CheckClipboardAccess();
  if ( !v8 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v9 = InternalSetClipboardData(v8, a1, a2, a3, a4);
  if ( v9 )
  {
    if ( a1 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( a1 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v9;
}
