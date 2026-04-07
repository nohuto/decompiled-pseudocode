/*
 * XREFs of ?Destroy@CStoryboard@@UEAAXXZ @ 0x180042CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002F9E8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::Destroy(CStoryboard *this)
{
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
