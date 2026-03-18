/*
 * XREFs of EngCopyBits @ 0x1C01FD1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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

  result = (int)qword_1C0257148;
  if ( qword_1C0257148 )
    return qword_1C0257148(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return result;
}
