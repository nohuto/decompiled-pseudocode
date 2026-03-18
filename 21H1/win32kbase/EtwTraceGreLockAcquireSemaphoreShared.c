/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C0004600 (DxgkEngVisRgnUniq.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0019388 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C002B060 (DrvEnumDisplaySettings.c)
 *     GreSfmOpenTokenEvent @ 0x1C002E7C0 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C002E8F0 (GreSfmGetNotificationTokens.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00433F0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00749B0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgnShared @ 0x1C0090470 (GreLockVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0090510 (GreLockVisRgnSharedOrExclusive.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0095D6C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B2230 (DrvNotifyModeChangeStartStop.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 *     DxEngLockShareSem @ 0x1C0154440 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C01548D0 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
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
