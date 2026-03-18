/*
 * XREFs of ?bFetchSubPath@RTP_PATHMEMOBJ@@AAEHXZ @ 0x228470
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QAEHPAVEPATHOBJ@@@Z @ 0x228189 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QAEHPAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall RTP_PATHMEMOBJ::bFetchSubPath(struct _PATHDATA *this)
{
  int v2; // edi
  struct _PATHDATA *v3; // ebx
  POINTFIX *v4; // eax
  POINTFIX *pptfx; // ecx

  v2 = 0;
  if ( this[5].pptfx )
  {
    v3 = this + 6;
    while ( 1 )
    {
      v4 = (POINTFIX *)EPATHOBJ::bEnum((EPATHOBJ *)this, this + 6);
      this[5].pptfx = v4;
      if ( this[6].count )
        break;
      if ( !v4 )
        return v2;
    }
    if ( (v3->flags & 1) != 0 )
    {
      pptfx = this[6].pptfx;
      if ( pptfx )
      {
        this[7].flags = pptfx->x;
        v2 = 1;
        this[7].count = pptfx->y;
      }
    }
  }
  return v2;
}
