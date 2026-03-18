/*
 * XREFs of ?GetIndependentFlipCandidate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x1C0020020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipCandidate(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 84LL);
}
