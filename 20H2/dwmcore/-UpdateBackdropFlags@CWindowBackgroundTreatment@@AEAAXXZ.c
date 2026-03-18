/*
 * XREFs of ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800BD4F8
 * Callers:
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800BCD9C (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BD4D0 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800BD548 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

void __fastcall CWindowBackgroundTreatment::UpdateBackdropFlags(CBrush **this)
{
  struct CBrushRenderingGraph *BrushGraph; // rax
  char v3; // dl

  BrushGraph = CBrush::GetBrushGraph(this[8]);
  v3 = 0;
  *((_BYTE *)this + 360) = 0;
  if ( BrushGraph )
  {
    if ( this != (CBrush **)-360LL )
      *((_BYTE *)this + 360) = *((_BYTE *)BrushGraph + 197);
    if ( *((_BYTE *)BrushGraph + 196) )
      v3 = 1;
  }
  *((_BYTE *)this + 359) = v3;
}
