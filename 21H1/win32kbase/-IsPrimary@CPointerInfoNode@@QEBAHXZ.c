/*
 * XREFs of ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C019B1F4
 * Callers:
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01939E4 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C019B224 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimary(CPointerInfoNode *this)
{
  int IsValid; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsValid = CPointerInfoNode::IsValid(this);
  v3 = 0;
  if ( IsValid )
    return (*(_DWORD *)(v2 + 180) & 0x2000) != 0;
  return v3;
}
