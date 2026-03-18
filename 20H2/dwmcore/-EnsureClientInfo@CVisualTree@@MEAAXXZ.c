/*
 * XREFs of ?EnsureClientInfo@CVisualTree@@MEAAXXZ @ 0x1800C2000
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C2030 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 */

void __fastcall CVisualTree::EnsureClientInfo(CVisualTree *this)
{
  if ( *((_BYTE *)this + 5893) )
  {
    CVisualTree::UpdateClientBounds(this);
    *((_BYTE *)this + 5893) = 0;
  }
}
