/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C004CCD0
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C000DF88 (zzzDwmStartRedirection.c)
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C004A88C (SetPointerMetaVisibility.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C004C220 (GreDwmEnableSoftwareCursorRendering.c)
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00509C8 (GreDwmHasSoftwareCursor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
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
      HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, (struct PDEVOBJ *)a1);
    if ( v6 )
    {
      HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 2, 0);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return zzzEndDeferWinEventNotify();
}
