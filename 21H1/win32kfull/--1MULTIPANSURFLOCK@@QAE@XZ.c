/*
 * XREFs of ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607
 * Callers:
 *     ?PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1F56EE (-PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1F57FD (-PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1F62D2 (-PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1F68ED (-PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?vUnLockBmpAndRemovePunt@PANSURFLOCK@@QAEXXZ @ 0x1F74B4 (-vUnLockBmpAndRemovePunt@PANSURFLOCK@@QAEXXZ.c)
 *     ?vUnLockBmp2AndRemovePunt@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F751F (-vUnLockBmp2AndRemovePunt@MULTIPANSURFLOCK@@QAEXXZ.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F761D (-vUnLockShadowR@MULTIPANSURFLOCK@@QAEXXZ.c)
 *     ?vUnLockShadowW@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F7673 (-vUnLockShadowW@MULTIPANSURFLOCK@@QAEXXZ.c)
 */

void __thiscall MULTIPANSURFLOCK::~MULTIPANSURFLOCK(MULTIPANSURFLOCK *this)
{
  int v2; // eax
  signed __int32 v3; // [esp+8h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)this == v2 )
  {
    if ( !*((_DWORD *)this + 4) && !*((_DWORD *)this + 5) )
    {
      PANSURFLOCK::vUnLockBmpAndRemovePunt(this);
      return;
    }
    if ( *((_BYTE *)this + 24) == 1 )
      MULTIPANSURFLOCK::vUnLockShadowR(this);
    v3 = 0;
    _InterlockedOr(&v3, 0);
    if ( *((_BYTE *)this + 25) == 1 )
      goto LABEL_18;
  }
  else
  {
    if ( v2 && !*((_DWORD *)this + 5) )
      MULTIPANSURFLOCK::vUnLockBmp2AndRemovePunt(this);
    v3 = 0;
    _InterlockedOr(&v3, 0);
    if ( *(_DWORD *)this && !*((_DWORD *)this + 4) )
      PANSURFLOCK::vUnLockBmpAndRemovePunt(this);
    if ( *((_BYTE *)this + 24) )
      MULTIPANSURFLOCK::vUnLockShadowR(this);
    v3 = 0;
    _InterlockedOr(&v3, 0);
    if ( *((_BYTE *)this + 25) )
LABEL_18:
      MULTIPANSURFLOCK::vUnLockShadowW(this);
  }
}
