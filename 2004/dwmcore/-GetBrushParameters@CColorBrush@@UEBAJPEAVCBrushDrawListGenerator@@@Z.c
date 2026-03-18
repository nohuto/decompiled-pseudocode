/*
 * XREFs of ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180047560
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18004A66C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 */

__int64 __fastcall CColorBrush::GetBrushParameters(CColorBrush *this, struct CBrushDrawListGenerator *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  CBrushDrawListGenerator::Reset(a2);
  v4 = *((_OWORD *)this + 5);
  result = 0LL;
  *((_BYTE *)a2 + 76) = 0;
  *(_OWORD *)((char *)a2 + 20) = v4;
  return result;
}
