/*
 * XREFs of ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18
 * Callers:
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     _OffLineTo@44 @ 0xBC28A (_OffLineTo@44.c)
 *     _OffGradientFill@48 @ 0xBDDCE (_OffGradientFill@48.c)
 *     _OffTransparentBlt@44 @ 0xCAB1A (_OffTransparentBlt@44.c)
 *     _OffAlphaBlend@40 @ 0xE51D2 (_OffAlphaBlend@40.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     ?SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1DB6EA (-SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1DC5A3 (-SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_.c)
 *     ?SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1DC97B (-SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@.c)
 *     ?PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F6656 (-PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 *     _OffCopyBits@36 @ 0x22EF0F (_OffCopyBits@36.c)
 *     _OffDrawStream@44 @ 0x22EFE7 (_OffDrawStream@44.c)
 *     _OffFillPath@36 @ 0x22F0D3 (_OffFillPath@36.c)
 *     _OffPlgBlt@56 @ 0x22F17C (_OffPlgBlt@56.c)
 *     _OffStretchBlt@56 @ 0x22F2C1 (_OffStretchBlt@56.c)
 *     _OffStretchBltROP@64 @ 0x22F3E8 (_OffStretchBltROP@64.c)
 *     _OffStrokeAndFillPath@48 @ 0x22F539 (_OffStrokeAndFillPath@48.c)
 *     _OffStrokePath@40 @ 0x22F5F4 (_OffStrokePath@40.c)
 *     _OffTextOut@48 @ 0x22F6AF (_OffTextOut@48.c)
 * Callees:
 *     <none>
 */

void __fastcall CLIPOBJ_vOffset(struct _CLIPOBJ *a1, LONG a2, LONG a3)
{
  struct _POINTL v3; // [esp+0h] [ebp-8h] BYREF

  if ( a1 && (a2 || a3) )
  {
    a1->rclBounds.left += a2;
    a1->rclBounds.right += a2;
    a1->rclBounds.top += a3;
    a1->rclBounds.bottom += a3;
    if ( a1->iDComplexity )
    {
      v3.y = a3;
      v3.x = a2;
      RGNOBJ::bOffset((RGNOBJ *)&a1[2], &v3);
    }
  }
}
