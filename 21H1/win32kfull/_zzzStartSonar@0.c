/*
 * XREFs of _zzzStartSonar@0 @ 0x15406B
 * Callers:
 *     _EditionHandleSonarKeyEvent@8 @ 0xAB072 (_EditionHandleSonarKeyEvent@8.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YGXPAUHDC__@@@Z @ 0x1532D7 (-DrawSonar@@YGXPAUHDC__@@@Z.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     _zzzAnimateFade@0 @ 0x153DEC (_zzzAnimateFade@0.c)
 *     _zzzStartFade@0 @ 0x153F74 (_zzzStartFade@0.c)
 */

HDC __stdcall zzzStartSonar()
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // eax
  unsigned int v2; // [esp+0h] [ebp-20h]
  unsigned int v3[2]; // [esp+4h] [ebp-1Ch] BYREF
  struct HDEV__ v4[4]; // [esp+Ch] [ebp-14h] BYREF

  gptSonarCenter = *(_DWORD *)(_gpsi + 4428);
  dword_275DA8 = *(_DWORD *)(_gpsi + 4432);
  if ( _gfade[9] )
    StopFade();
  giSonarRadius = 100;
  v4[0].unused = gptSonarCenter - 100;
  v4[2].unused = gptSonarCenter + 100;
  v4[1].unused = dword_275DA8 - 100;
  v4[3].unused = dword_275DA8 + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  result = CreateFadeInternal(v4, 0, (struct tagWND *)0x3E8, 0xC0u, CurrentThreadDpiAwarenessContext, v2, v3[0]);
  if ( result )
  {
    DrawSonar(result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v3);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v3);
    return (HDC)1;
  }
  return result;
}
