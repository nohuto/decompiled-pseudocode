/*
 * XREFs of ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02BFE9C
 * Callers:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02BFC3C (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTP_PATHMEMOBJ::bFetchNextPoint(struct _PATHDATA *this)
{
  __int64 pptfx_high; // rbp
  char v3; // di
  int count; // ecx
  int v5; // esi
  int v6; // eax

  pptfx_high = SHIDWORD(this[11].pptfx);
  v3 = 1;
  HIDWORD(this[11].pptfx) = pptfx_high + 1;
  if ( (int)pptfx_high + 1 > 2 )
    HIDWORD(this[11].pptfx) = pptfx_high - 2;
  count = this[8].count;
  v5 = 0;
  if ( !count )
  {
    if ( (this[8].flags & 2) != 0 )
    {
      *(&this[12].flags + pptfx_high) = 0;
      v3 = 3;
      *(POINTFIX **)((char *)&(&this[12].pptfx)[pptfx_high] + 4) = *(POINTFIX **)&this[9].flags;
      count = --this[8].count;
    }
    else
    {
      v6 = EPATHOBJ::bEnum((EPATHOBJ *)this, this + 8);
      count = this[8].count;
      LODWORD(this[7].pptfx) = v6;
      if ( !count || (this[8].flags & 1) != 0 || !this[8].pptfx )
        v3 = 2;
    }
  }
  if ( (v3 & 2) == 0 && count > 0 )
  {
    *(POINTFIX **)((char *)&(&this[12].pptfx)[pptfx_high] + 4) = (POINTFIX *)*this[8].pptfx;
    if ( this[8].count == 1 && (this[8].flags & 2) != 0 )
      v5 = 1;
    *(&this[12].flags + pptfx_high) = v5;
    ++this[8].pptfx;
    --this[8].count;
  }
  return v3 & 1;
}
