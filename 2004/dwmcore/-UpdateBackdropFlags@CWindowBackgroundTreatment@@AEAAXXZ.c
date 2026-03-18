/*
 * XREFs of ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800BD878
 * Callers:
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800BD11C (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BD850 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18009DFA0 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

void __fastcall CWindowBackgroundTreatment::UpdateBackdropFlags(CBrush **this, __int64 a2)
{
  struct CBrushRenderingGraph *BrushGraph; // rax
  char v4; // dl

  BrushGraph = CBrush::GetBrushGraph(this[8], a2);
  v4 = 0;
  *((_BYTE *)this + 360) = 0;
  if ( BrushGraph )
  {
    if ( this != (CBrush **)-360LL )
      *((_BYTE *)this + 360) = *((_BYTE *)BrushGraph + 197);
    if ( *((_BYTE *)BrushGraph + 196) )
      v4 = 1;
  }
  *((_BYTE *)this + 359) = v4;
}
