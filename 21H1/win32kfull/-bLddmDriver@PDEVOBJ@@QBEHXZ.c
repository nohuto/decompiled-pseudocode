/*
 * XREFs of ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC
 * Callers:
 *     _UpdateGammaRampOnDevice@8 @ 0xB00CE (_UpdateGammaRampOnDevice@8.c)
 *     _GreLddmProcessDesktopSwitch@0 @ 0xB2310 (_GreLddmProcessDesktopSwitch@0.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z @ 0x1D2FCB (-DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z @ 0x1D32E2 (-DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z.c)
 *     _GreDxDwmShutdown@0 @ 0x1D4492 (_GreDxDwmShutdown@0.c)
 *     ?MulIcmSetDeviceGammaRamp@@YGKPAUDHPDEV__@@KPAX@Z @ 0x203998 (-MulIcmSetDeviceGammaRamp@@YGKPAUDHPDEV__@@KPAX@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall PDEVOBJ::bLddmDriver(PDEVOBJ *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_DWORD *)this + 1832);
  if ( !v1 || v1 == -4 )
    return 0;
  else
    return (*(_DWORD *)(v1 + 144) >> 23) & 1;
}
