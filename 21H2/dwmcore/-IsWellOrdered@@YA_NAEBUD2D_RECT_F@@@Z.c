/*
 * XREFs of ?IsWellOrdered@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180085F58
 * Callers:
 *     ?Area@@YAMAEBUD2D_RECT_F@@@Z @ 0x180085F20 (-Area@@YAMAEBUD2D_RECT_F@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180212A4C (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWellOrdered(const struct D2D_RECT_F *a1)
{
  return a1->right >= a1->left && a1->bottom >= a1->top;
}
