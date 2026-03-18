/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001C8A8
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001C630 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C001C840 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C02915F4 (bInitBrush.c)
 * Callees:
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(HBRUSH **this)
{
  HBRUSH *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx(v2, 0LL);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
}
