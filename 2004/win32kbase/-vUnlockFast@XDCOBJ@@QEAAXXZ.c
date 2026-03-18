/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238
 * Callers:
 *     GreGetDeviceCaps @ 0x1C00138C0 (GreGetDeviceCaps.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C007BE98 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetClipBox @ 0x1C007C550 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C00A4250 (GreGetNearestColor.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C00A4C10 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreGetDCPoint @ 0x1C00A4F40 (GreGetDCPoint.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BF6C0 (pProcessDfbSurfacesInternal.c)
 *     GreSelectBrushInternal @ 0x1C00CF090 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C00CF110 (GreSelectPenInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01416B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014261C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0145E20 (NtGdiGetDeviceCapsAll.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C014C19C (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014C640 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014C810 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C014D18C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C014F940 (GreIntersectVisRect.c)
 * Callees:
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0086FF0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0089250 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C008AA40 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
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
