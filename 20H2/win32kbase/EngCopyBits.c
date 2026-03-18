/*
 * XREFs of EngCopyBits @ 0x1C01F5E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  BOOL result; // eax

  result = (int)qword_1C024F188;
  if ( qword_1C024F188 )
    return qword_1C024F188(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return result;
}
