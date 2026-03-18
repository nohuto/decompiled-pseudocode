/*
 * XREFs of CheckCursorClipAccess @ 0x1C0030640
 * Callers:
 *     <none>
 * Callees:
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00305BC (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     CheckGrantedAccess @ 0x1C003B114 (CheckGrantedAccess.c)
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00AE114 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C01070C8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  struct tagTHREADINFO *v5; // rbx
  int v6; // edi
  __int64 v8; // rcx
  bool v9; // zf
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v5 = CurrentLogicalCursorThread;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 52)) )
        return 0LL;
      if ( !*(_DWORD *)(*((_QWORD *)v5 + 52) + 884LL) )
        return 0LL;
      if ( !InForegroundQueue((__int64 **)v5, 0) )
        return 0LL;
      v8 = *(_QWORD *)(*((_QWORD *)v5 + 52) + 832LL);
      if ( !v8 )
        return 0LL;
      v9 = (*(_DWORD *)(v8 + 100) & 1) == 0;
    }
    else
    {
      v9 = (unsigned int)CheckGrantedAccess(
                           *(unsigned int *)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 680LL),
                           2LL) == 0;
    }
    if ( v9 )
      return 0LL;
  }
  else
  {
    if ( **((_QWORD **)CurrentLogicalCursorThread + 52) != gpepCSRSS
      && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
      && (!(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v5 + 52))
       || !(unsigned int)IsGpqForegroundAccessibleExplicit(
                           1LL,
                           v5,
                           *(_QWORD *)(*((_QWORD *)v5 + 52) + 880LL),
                           *(_DWORD *)(*((_QWORD *)v5 + 52) + 12LL) & 0x80000000)) )
    {
      return 0LL;
    }
    CCursorClip::GetClip(gpCursorClip, &v10);
    if ( *((_QWORD *)v5 + 53) != gpqForeground && !a2 && (unsigned int)IsRectEmptyInl(&v10) )
      return 0LL;
  }
  return 1LL;
}
