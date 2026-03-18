/*
 * XREFs of ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800EC1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 */

__int64 __fastcall CColorBrush::GetBrushParameters(CColorBrush *this, struct CBrushDrawListGenerator *a2)
{
  __int64 result; // rax

  CBrushDrawListGenerator::Reset(a2);
  result = 0LL;
  *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)((char *)this + 88);
  return result;
}
