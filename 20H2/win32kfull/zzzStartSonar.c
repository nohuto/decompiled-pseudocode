/*
 * XREFs of zzzStartSonar @ 0x1C01E8068
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C0112B30 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E6E24 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     StopFade @ 0x1C01E77F0 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01E7DFC (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01E7F8C (zzzStartFade.c)
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
