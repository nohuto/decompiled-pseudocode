/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C002AEDC
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C001C008 (zzzDecomposeDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C002A16C (SetPointerMetaVisibility.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 * Callees:
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C002A800 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C002ACF0 (GreDwmHasSoftwareCursor.c)
 *     SetPointer @ 0x1C002B0A0 (SetPointer.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzEnableDwmPointerSupport(unsigned int a1, int a2)
{
  int HasSoftwareCursor; // eax
  __int64 v5; // rcx
  int v6; // edi

  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
  if ( !a2 || HasSoftwareCursor || a1 )
  {
    if ( HasSoftwareCursor == a1 )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      SetPointer(0LL);
      HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, (struct PDEVOBJ *)a1);
    if ( v6 )
    {
      HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(unsigned int *)(gpsi + 4960LL), *(unsigned int *)(gpsi + 4964LL), 2LL);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return zzzEndDeferWinEventNotify();
}
