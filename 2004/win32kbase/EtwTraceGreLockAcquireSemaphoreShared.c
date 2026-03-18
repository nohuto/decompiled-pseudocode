/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0024CC0
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C0004750 (DxgkEngVisRgnUniq.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C002903C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0050E50 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C0052210 (GreSfmOpenTokenEvent.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DrvEnumDisplaySettings @ 0x1C00A3CE0 (DrvEnumDisplaySettings.c)
 *     GreSfmGetNotificationTokens @ 0x1C00A48C0 (GreSfmGetNotificationTokens.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A57E0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00B5AB0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B9E20 (DrvNotifyModeChangeStartStop.c)
 *     GreLockVisRgnShared @ 0x1C00B9FE0 (GreLockVisRgnShared.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     DxEngLockShareSem @ 0x1C014E0F0 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C014E580 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockAcquireShared, a3, a2, a1);
  }
  return result;
}
