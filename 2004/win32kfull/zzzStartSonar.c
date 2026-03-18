/*
 * XREFs of zzzStartSonar @ 0x1C01E8D28
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C0111800 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7568 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E7AE4 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     StopFade @ 0x1C01E84B0 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01E8ABC (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01E8C4C (zzzStartFade.c)
 */

HDC zzzStartSonar()
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  _BYTE v2[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v3; // [rsp+38h] [rbp-20h] BYREF

  gptSonarCenter = *(_QWORD *)(gpsi + 4960LL);
  if ( LODWORD(gfade[6]) )
    StopFade();
  giSonarRadius = 100;
  v3.left = gptSonarCenter - 100;
  v3.right = gptSonarCenter + 100;
  v3.top = HIDWORD(gptSonarCenter) - 100;
  v3.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(gptSonarCenter));
  result = CreateFadeInternal(0LL, &v3, 1000, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
    return (HDC)1;
  }
  return result;
}
