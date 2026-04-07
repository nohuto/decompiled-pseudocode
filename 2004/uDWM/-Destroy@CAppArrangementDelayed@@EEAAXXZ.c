/*
 * XREFs of ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800AEAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180032048 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CAppArrangementDelayed::Destroy(CAppArrangementDelayed *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
