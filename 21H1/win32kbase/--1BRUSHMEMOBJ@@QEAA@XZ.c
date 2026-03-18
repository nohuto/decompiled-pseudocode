/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00A9338
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00A90C0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C00A92D0 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C029B478 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C029B520 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((__int64)v2, 0LL);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this, 0);
    *this = 0LL;
  }
}
