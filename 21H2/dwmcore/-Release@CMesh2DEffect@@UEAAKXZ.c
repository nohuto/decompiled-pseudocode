/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x180214F70
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800F6CB0 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800F6CC0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CDrawListEntry::Release((CMesh2DEffect *)((char *)this + 16));
}
