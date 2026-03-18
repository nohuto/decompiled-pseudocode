/*
 * XREFs of ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F1960
 * Callers:
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F1920 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18022355C (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1802239BC (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18008C6E4 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800D52C4 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

void __fastcall CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(CLayerVisual *this, __int64 a2)
{
  CBrush **v2; // rax
  const struct CBackdropBrush *v3; // rbx
  unsigned __int8 v5; // bp
  char v6; // si
  struct CBrushRenderingGraph *BrushGraph; // rax

  v2 = (CBrush **)*((_QWORD *)this + 92);
  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    if ( *v2 )
    {
      BrushGraph = CBrush::GetBrushGraph(*v2, a2);
      if ( BrushGraph )
      {
        v6 = *((_BYTE *)BrushGraph + 196);
        v3 = (const struct CBackdropBrush *)*((_QWORD *)BrushGraph + 26);
        v5 = *((_BYTE *)BrushGraph + 198);
      }
    }
  }
  *((_BYTE *)this + 102) &= ~8u;
  *((_BYTE *)this + 102) |= 8 * (v6 & 1);
  CVisual::UpdateHasBackdropInputFlag((CVisual **)this, v3);
  CVisual::UpdateHasWindowBackdropInputFlag((CVisual **)this, v5);
}
