/*
 * XREFs of ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801F0C64
 * Callers:
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F0B88 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x1801F0C90 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRender.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801F1098 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSynchronousSuperWetInk::IsSuperWetCompatible(CSynchronousSuperWetInk *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 11) )
  {
    if ( *((_QWORD *)this + 15) )
      return *((_QWORD *)this + 21) != 0LL;
  }
  return result;
}
