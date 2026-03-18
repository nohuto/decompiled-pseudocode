/*
 * XREFs of EngCopyBits @ 0x1C01F77C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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

  result = (int)qword_1C0251188;
  if ( qword_1C0251188 )
    return qword_1C0251188(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return result;
}
