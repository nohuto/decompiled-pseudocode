/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00A73C8
 * Callers:
 *     SetSysColor @ 0x1C00A6AF4 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A724C (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00A7400 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C01404A0 (GreGetBrushColor.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00A77FC (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
  }
}
