/*
 * XREFs of ?GetVariableRefreshOverrideEligible@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1C00201E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetVariableRefreshOverrideEligible(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x10000000) != 0;
}
