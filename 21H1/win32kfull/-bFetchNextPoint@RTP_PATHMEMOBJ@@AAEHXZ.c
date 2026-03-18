/*
 * XREFs of ?bFetchNextPoint@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2283B6
 * Callers:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2281CA (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AAEHXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall RTP_PATHMEMOBJ::bFetchNextPoint(struct _PATHDATA *this)
{
  char v2; // bl
  ULONG count; // edi
  int v4; // eax
  int v5; // edx
  POINTFIX *pptfx; // ecx
  char v8; // [esp-4h] [ebp-10h]

  v2 = 1;
  count = this[10].count;
  this[10].count = count + 1;
  if ( (int)(count + 1) > 2 )
    this[10].count = count - 2;
  v4 = this[6].count;
  v5 = 0;
  if ( !v4 )
  {
    if ( (this[6].flags & 2) != 0 )
    {
      *((_DWORD *)&this[10].pptfx + count) = 0;
      (&this[11].pptfx)[2 * count] = (POINTFIX *)this[7].flags;
      *(&this[12].flags + 2 * count) = this[7].count;
      v4 = --this[6].count;
      v8 = 3;
LABEL_10:
      v2 = v8;
      goto LABEL_11;
    }
    this[5].pptfx = (POINTFIX *)EPATHOBJ::bEnum((EPATHOBJ *)this, this + 6);
    v5 = 0;
    v4 = this[6].count;
    if ( !v4 || (this[6].flags & 1) != 0 || !this[6].pptfx )
    {
      v8 = 2;
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( (v2 & 2) == 0 && v4 > 0 )
  {
    pptfx = this[6].pptfx;
    (&this[11].pptfx)[2 * count] = (POINTFIX *)pptfx->x;
    *(&this[12].flags + 2 * count) = pptfx->y;
    if ( this[6].count == 1 && (this[6].flags & 2) != 0 )
      v5 = 1;
    *((_DWORD *)&this[10].pptfx + count) = v5;
    ++this[6].pptfx;
    --this[6].count;
  }
  return v2 & 1;
}
