/*
 * XREFs of ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x18008C634
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008C4FC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F1960 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180048898 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasWindowBackdropInputFlag(CVisual **this, unsigned __int8 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  CVisual *v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 != (((_BYTE)this[34] & 4) != 0) )
  {
    v4 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v7, "m_fHasWindowBackdropInput=%d", a2);
    v5 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v8, "Visual-HasWindowBackdropInputFlagChanged");
    DwmDbg::Backdrops::LogBrushEtwEvent(v5, this, v4);
    v6 = this[11];
    if ( a2 )
    {
      if ( v6 )
        CVisual::PropagateBackdropUpdates(v6, 0, 1);
      *((_BYTE *)this + 272) |= 4u;
    }
    else
    {
      if ( v6 )
        CVisual::PropagateBackdropUpdates(v6, 0, -1);
      *((_BYTE *)this + 272) &= ~4u;
    }
  }
}
