/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0014748
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00144D0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C00146E0 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C02933EC (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
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
