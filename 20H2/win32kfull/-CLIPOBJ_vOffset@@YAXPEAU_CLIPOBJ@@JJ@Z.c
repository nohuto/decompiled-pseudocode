/*
 * XREFs of ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00849E4
 * Callers:
 *     OffTransparentBlt @ 0x1C0083698 (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C0083CBC (OffBitBlt.c)
 *     OffAlphaBlend @ 0x1C00845A0 (OffAlphaBlend.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00846E4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0136CA0 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     OffStrokeAndFillPath @ 0x1C0137968 (OffStrokeAndFillPath.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0138C10 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     OffStrokePath @ 0x1C013AE38 (OffStrokePath.c)
 *     OffLineTo @ 0x1C0146A7C (OffLineTo.c)
 *     OffGradientFill @ 0x1C0149DBC (OffGradientFill.c)
 *     OffStretchBltROP @ 0x1C014C468 (OffStretchBltROP.c)
 *     OffStretchBlt @ 0x1C014C8A8 (OffStretchBlt.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027EA80 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C02954C0 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C02C77F8 (OffCopyBits.c)
 *     OffDrawStream @ 0x1C02C7928 (OffDrawStream.c)
 *     OffFillPath @ 0x1C02C7A64 (OffFillPath.c)
 *     OffPlgBlt @ 0x1C02C7B94 (OffPlgBlt.c)
 *     OffTextOut @ 0x1C02C7D54 (OffTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall CLIPOBJ_vOffset(struct _CLIPOBJ *a1, LONG a2, LONG a3)
{
  struct _POINTL v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (a2 || a3) )
  {
    a1->rclBounds.left += a2;
    a1->rclBounds.right += a2;
    a1->rclBounds.top += a3;
    a1->rclBounds.bottom += a3;
    if ( a1->iDComplexity )
    {
      v3.x = a2;
      v3.y = a3;
      RGNOBJ::bOffset((RGNOBJ *)&a1[2].rclBounds.top, &v3);
    }
  }
}
