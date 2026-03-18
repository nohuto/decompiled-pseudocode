/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001C1DC
 * Callers:
 *     SetSysColor @ 0x1C001BDF4 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001C060 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C013E150 (GreGetBrushColor.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C001C60C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
  }
}
