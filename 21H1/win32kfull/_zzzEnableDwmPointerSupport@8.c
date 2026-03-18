/*
 * XREFs of _zzzEnableDwmPointerSupport@8 @ 0xB0B78
 * Callers:
 *     _SetPointerMetaVisibility@4 @ 0xB0292 (_SetPointerMetaVisibility@4.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     _GreDwmHasSoftwareCursor@8 @ 0xB1736 (_GreDwmHasSoftwareCursor@8.c)
 *     _GreDwmEnableSoftwareCursorRendering@8 @ 0xB250C (_GreDwmEnableSoftwareCursorRendering@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzEnableDwmPointerSupport(int a1, int a2)
{
  int HasSoftwareCursor; // eax
  struct PDEVOBJ *v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // [esp+0h] [ebp-Ch]

  ++_gdwDeferWinEvent;
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  GreLockPointer(*(_DWORD *)(_gpDispInfo + 20));
  GreLockSprite(*(_DWORD *)(_gpDispInfo + 20));
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(struct PDEVOBJ **)(_gpDispInfo + 20));
  if ( !a2 || HasSoftwareCursor || a1 )
  {
    v6 = 0;
    if ( HasSoftwareCursor != a1 )
    {
      LOBYTE(v5) = 0;
      v6 = 1;
      SetPointerInternal(v5, 6, v8);
      gbForceSoftwareCursor = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5);
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      gbForceSoftwareCursor = gSoftwareCursorCount > 0;
      SetPointerInternal(v7, 6, v8);
      if ( !a2 )
        zzzInternalSetCursorPos(*(struct tagPOINT **)(_gpsi + 4428), *(_DWORD *)(_gpsi + 4432), 2, 0);
    }
  }
  GreUnlockSprite(*(_DWORD *)(_gpDispInfo + 20));
  GreUnlockPointer(*(_DWORD *)(_gpDispInfo + 20));
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  zzzEndDeferWinEventNotify();
}
