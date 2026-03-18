/*
 * XREFs of ?GetHDRMetaDataChanged@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x1C001FF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetHDRMetaDataChanged(CIFlipPresentHistoryTokenFlipManager *this)
{
  return ***(_BYTE ***)(*((_QWORD *)this + 1) + 64LL) & 1;
}
