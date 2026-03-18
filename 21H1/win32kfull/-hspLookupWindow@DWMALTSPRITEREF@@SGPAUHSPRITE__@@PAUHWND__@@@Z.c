/*
 * XREFs of ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E
 * Callers:
 *     _GreAdjustSpriteDirtyAccum@24 @ 0x1FEC6 (_GreAdjustSpriteDirtyAccum@24.c)
 *     _GreNotifyDirtySprite@4 @ 0x20098 (_GreNotifyDirtySprite@4.c)
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     _GreZorderSprite@16 @ 0x244DA (_GreZorderSprite@16.c)
 *     ??0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x245C4 (--0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     _GreGetWindowResizeDCompositionSynchronizationObject@8 @ 0xA6B0E (_GreGetWindowResizeDCompositionSynchronizationObject@8.c)
 *     _GreIsWindowResizeInProgress@8 @ 0xA6C58 (_GreIsWindowResizeInProgress@8.c)
 *     _GreWindowLayoutComplete@16 @ 0xA8D24 (_GreWindowLayoutComplete@16.c)
 *     _GreAddBitmapD3DDirtyRgn@12 @ 0xB93E6 (_GreAddBitmapD3DDirtyRgn@12.c)
 *     _GreGetSprite@8 @ 0xC3FF0 (_GreGetSprite@8.c)
 *     _GreWindowBeginLayoutUpdate@8 @ 0xC536E (_GreWindowBeginLayoutUpdate@8.c)
 *     ??0DWMALTSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x1CCCE8 (--0DWMALTSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     _GreCancelSynchronizedWindowResize@4 @ 0x1CDE96 (_GreCancelSynchronizedWindowResize@4.c)
 *     _GreConfirmWindowResizeCommit@4 @ 0x1CDF50 (_GreConfirmWindowResizeCommit@4.c)
 *     _GreGetWindowResizeTelemetry@16 @ 0x1CE370 (_GreGetWindowResizeTelemetry@16.c)
 *     _GreProtectSpriteContent@16 @ 0x1CE69D (_GreProtectSpriteContent@16.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 *     _GreWindowResizeStarted@20 @ 0x1CEC76 (_GreWindowResizeStarted@20.c)
 * Callees:
 *     <none>
 */

int __thiscall DWMALTSPRITEREF::hspLookupWindow(void *this)
{
  int v1; // edi
  _DWORD *v2; // eax
  _DWORD Buffer[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = 0;
  Buffer[0] = this;
  Buffer[1] = 0;
  if ( g_pDwmState != (struct DwmState *)-40 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)g_pDwmState + 40, 0);
  }
  v2 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
  if ( v2 )
    v1 = v2[1];
  if ( g_pDwmState != (struct DwmState *)-40 )
  {
    ExReleasePushLockExclusiveEx((char *)g_pDwmState + 40, 0);
    KeLeaveCriticalRegion();
  }
  return v1;
}
