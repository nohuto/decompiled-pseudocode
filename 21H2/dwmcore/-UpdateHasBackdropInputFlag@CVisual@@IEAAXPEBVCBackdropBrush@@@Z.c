/*
 * XREFs of ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18008C6E4
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008C4FC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F1960 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180048898 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x180049490 (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasBackdropInputFlag(CVisual **this, const struct CBackdropBrush *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  CVisual *v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 != 0LL) != ((_BYTE)this[34] & 1) )
  {
    v4 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v7, "m_fHasBackdropInput=%d", a2 != 0LL);
    v5 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v8, "Visual-HasBackdropInputFlagChanged");
    DwmDbg::Backdrops::LogBrushEtwEvent(v5, this, v4);
    v6 = this[11];
    if ( a2 )
    {
      if ( v6 )
        CVisual::PropagateBackdropUpdates(v6, 1, 0);
      *((_BYTE *)this + 272) |= 1u;
    }
    else
    {
      if ( v6 )
        CVisual::PropagateBackdropUpdates(v6, -1, 0);
      *((_BYTE *)this + 272) &= ~1u;
      CVisual::ClearAllBackdropVisualImages((CVisual *)this);
    }
  }
}
