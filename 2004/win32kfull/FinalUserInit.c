/*
 * XREFs of FinalUserInit @ 0x1C000AA3C
 * Callers:
 *     xxxInitWindowStation @ 0x1C0009574 (xxxInitWindowStation.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C0009DFC (MNSetupAnimationDC.c)
 *     GetCharDimensions @ 0x1C000C0C8 (GetCharDimensions.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00626AC (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0063FA4 (GreSetBkColor.c)
 *     DestroyClass @ 0x1C008DD2C (DestroyClass.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  struct tagPROCESSINFO *v8; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL));
  v1 = Get96DpiServerInfo();
  v2 = GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(v1 + 24));
  *(_DWORD *)(v1 + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL));
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), v2);
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v3 = *(_QWORD *)(gpDispInfo + 72LL);
  if ( !v3 )
    return 0LL;
  GreSelectFont(v3, *(_QWORD *)(SessionDpiServerInfo + 24));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 0LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v4 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v4 )
    return 0LL;
  GreSetBitmapOwner(v4, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 72LL));
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL));
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL));
  MNSetupAnimationDC(gMenuState);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 352);
        i && (*(_DWORD *)(*(_QWORD *)(i + 8) + 8LL) & 0x4000) == 0;
        i = *(_QWORD *)(CurrentProcessWin32Process + 352) )
  {
    v8 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process();
    DestroyClass(v8);
  }
  return 1LL;
}
