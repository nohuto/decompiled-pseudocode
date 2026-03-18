/*
 * XREFs of _PFTOBJ_bUnloadWorkhorseWrap@16 @ 0x1D10B7
 * Callers:
 *     <none>
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 */

int __stdcall PFTOBJ_bUnloadWorkhorseWrap(PFTOBJ *a1, struct PFF *a2, struct PFF **a3, unsigned int a4)
{
  return PFTOBJ::bUnloadWorkhorse(a1, a2, a3, a4);
}
