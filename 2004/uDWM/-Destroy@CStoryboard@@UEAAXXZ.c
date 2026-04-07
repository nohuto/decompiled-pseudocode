/*
 * XREFs of ?Destroy@CStoryboard@@UEAAXXZ @ 0x180035BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180032048 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::Destroy(CStoryboard *this)
{
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
