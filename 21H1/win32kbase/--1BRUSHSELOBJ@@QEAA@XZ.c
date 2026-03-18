/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00A8C74
 * Callers:
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C00A8878 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A8AF8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     GreGetBrushColor @ 0x1C01467F0 (GreGetBrushColor.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00A909C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
  }
}
