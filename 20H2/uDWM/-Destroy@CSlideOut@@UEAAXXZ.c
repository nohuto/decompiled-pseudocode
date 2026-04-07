/*
 * XREFs of ?Destroy@CSlideOut@@UEAAXXZ @ 0x180009B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002F9E8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CSlideOut::Destroy(CSlideOut *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
