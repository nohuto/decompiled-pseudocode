/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28
 * Callers:
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0060600 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreGetDCPoint @ 0x1C0060930 (GreGetDCPoint.c)
 *     hbmSelectBitmap @ 0x1C009AF40 (hbmSelectBitmap.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 *     GreSelectBrushInternal @ 0x1C00CE850 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C00CE8D0 (GreSelectPenInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C0149CCC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014A160 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014A330 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C003A1C0 (bDeleteDCInternalEx.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C00410F0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0043C00 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0044FB0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
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
