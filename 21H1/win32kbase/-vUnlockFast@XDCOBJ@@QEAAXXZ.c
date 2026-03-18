/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68
 * Callers:
 *     GreGetClipBox @ 0x1C008C160 (GreGetClipBox.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C33C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C009B2E0 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x1C00A89F0 (GreGetNearestColor.c)
 *     GreGetDeviceCaps @ 0x1C00AA530 (GreGetDeviceCaps.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C00B4640 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreGetDCPoint @ 0x1C00B4970 (GreGetDCPoint.c)
 *     GreSelectBrushInternal @ 0x1C00CE700 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C00CE780 (GreSelectPenInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0147A04 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014896C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C014C170 (NtGdiGetDeviceCapsAll.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C01524EC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0152990 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0152B60 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C01534DC (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C007FF50 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0082180 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0083970 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  DC *v2; // rdi
  DC *v3; // rax
  struct _DC_ATTR *UserAttr; // rdx
  int *v5; // rcx
  int v6; // edx
  HDC v7; // rdi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 2) )
  {
    v2 = *(DC **)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      v3 = *(DC **)this;
      if ( !*((_DWORD *)this + 3) )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        v3 = v2;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v2, UserAttr);
          v3 = *(DC **)this;
        }
      }
      *((_DWORD *)v3 + 11) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
  }
  v5 = *(int **)this;
  v6 = *((_DWORD *)this + 3);
  v8 = 0;
  v7 = *(HDC *)v5;
  HmgDecrementExclusiveReferenceCountEx(v5, v6, &v8);
  if ( v8 )
    bDeleteDCInternalEx(v7, 0LL);
}
