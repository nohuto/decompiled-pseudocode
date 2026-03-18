/*
 * XREFs of _IsCurrentDesktopComposed@0 @ 0x7C988
 * Callers:
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     _SetAppCompatFlags@4 @ 0x7C302 (_SetAppCompatFlags@4.c)
 *     __DwmLockScreenUpdates@4 @ 0xEC08E (__DwmLockScreenUpdates@4.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x141425 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DI.c)
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall IsCurrentDesktopComposed()
{
  int v0; // ecx
  int v1; // eax

  v0 = 0;
  if ( _grpdeskRitInput )
  {
    v1 = *(_DWORD *)(_grpdeskRitInput + 4);
    if ( v1 )
      return *(_DWORD *)(*(_DWORD *)v1 + 32) & 1;
  }
  return v0;
}
