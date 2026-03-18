/*
 * XREFs of zzzDecomposeDesktop @ 0x1C000EF2C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C000DF88 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C000E180 (xxxDwmStopRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 * Callees:
 *     MagpDecomposeDesktop @ 0x1C000EDCC (MagpDecomposeDesktop.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C000F0A8 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C000F0D8 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C000F13C (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C000FE44 (GreRemoveDisplayDriverRealizations.c)
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x1C004CCD0 (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rsi
  __int64 v4; // rbx

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    MagpDecomposeDesktop(*(_QWORD **)&gMagnContext, (__int64)a1);
    v2 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v2 + gSharedInfo[1] + 24) == 1 )
      {
        v4 = *(_QWORD *)(gpKernelHandleTable + 24 * v2);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v4, a1) )
        {
          if ( !(unsigned int)IsDesktopWindow(v4) && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v4 + 16),
              *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 424LL),
              0x10u,
              (struct tagWND *)v4,
              0,
              0LL,
              0LL,
              0LL);
          ComposeWindow((struct tagWND *)v4);
        }
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
