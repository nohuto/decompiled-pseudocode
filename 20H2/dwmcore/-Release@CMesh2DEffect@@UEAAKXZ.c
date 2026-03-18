/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x180212350
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800F0EA0 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800F0EB0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CDrawListEntry::Release((CMesh2DEffect *)((char *)this + 16));
}
