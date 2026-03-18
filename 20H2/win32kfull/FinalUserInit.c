/*
 * XREFs of FinalUserInit @ 0x1C00230A4
 * Callers:
 *     xxxInitWindowStation @ 0x1C000C67C (xxxInitWindowStation.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C0022E98 (MNSetupAnimationDC.c)
 *     GetCharDimensions @ 0x1C0024BC8 (GetCharDimensions.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v10; // r8
  __int64 i; // rcx
  __int64 v13; // rcx
  struct tagPROCESSINFO *v14; // rax

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
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 352); i; i = *(_QWORD *)(CurrentProcessWin32Process + 352) )
  {
    v13 = *(_QWORD *)(i + 8);
    if ( (*(_DWORD *)(v13 + 8) & 0x4000) != 0 )
      break;
    v14 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v13, v8, v10);
    DestroyClass(v14);
  }
  return 1LL;
}
