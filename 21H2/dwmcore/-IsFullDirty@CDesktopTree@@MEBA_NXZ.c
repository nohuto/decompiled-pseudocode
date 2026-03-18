/*
 * XREFs of ?IsFullDirty@CDesktopTree@@MEBA_NXZ @ 0x1800FA290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDesktopTree::IsFullDirty(CDesktopTree *this)
{
  return CCommonRegistryData::ForceDesktopTreeFullDirty;
}
