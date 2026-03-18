/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x180216B80
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800EE2C0 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800EE2D0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CDrawListEntry::Release((CMesh2DEffect *)((char *)this + 16));
}
