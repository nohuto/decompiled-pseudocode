/*
 * XREFs of ?HasFinalValue@CExpressionForce@@W7EBA_NXZ @ 0x1800F0E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpressionForce::HasFinalValue(__int64 a1)
{
  return CWICBitmapRealization::IsProtected((CWICBitmapRealization *)(a1 - 8));
}
