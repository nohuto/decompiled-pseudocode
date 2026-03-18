/*
 * XREFs of _CLIPOBJ_bEnum@12 @ 0x8E3F8
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 */

BOOL __stdcall CLIPOBJ_bEnum(CLIPOBJ *pco, ULONG cj, ULONG *pul)
{
  return XCLIPOBJ::bEnum((XCLIPOBJ *)pco, cj, pul, 0);
}
