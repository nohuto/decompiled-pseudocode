/*
 * XREFs of ?cSpSubtract@@YIKPBU_RECTL@@0PAU1@@Z @ 0x1DEF61
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z @ 0x1E262E (-vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall cSpSubtract(const struct _RECTL *a1, const struct _RECTL *a2, struct _RECTL *a3)
{
  LONG top; // eax
  struct _RECTL *v5; // esi
  LONG bottom; // eax
  struct _RECTL v9; // [esp+14h] [ebp-18h] BYREF

  v9.left = 0x80000000;
  v9.top = 0x80000000;
  top = a2->top;
  v5 = a3;
  v9.right = 0x7FFFFFFF;
  v9.bottom = top;
  if ( bIntersect(&v9, a1, a3) )
    v5 = a3 + 1;
  v9.top = a2->top;
  v9.right = a2->left;
  v9.bottom = a2->bottom;
  if ( bIntersect(&v9, a1, v5) )
    ++v5;
  v9.left = a2->right;
  v9.right = 0x7FFFFFFF;
  if ( bIntersect(&v9, a1, v5) )
    ++v5;
  bottom = a2->bottom;
  v9.left = 0x80000000;
  v9.top = bottom;
  v9.bottom = 0x7FFFFFFF;
  if ( bIntersect(&v9, a1, v5) )
    ++v5;
  return v5 - a3;
}
