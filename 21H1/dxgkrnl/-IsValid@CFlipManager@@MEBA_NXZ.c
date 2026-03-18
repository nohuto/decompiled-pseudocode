/*
 * XREFs of ?IsValid@CFlipManager@@MEBA_NXZ @ 0x1C001B3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipManager::IsValid(CFlipManager *this)
{
  return *((_BYTE *)this + 32) & 1;
}
