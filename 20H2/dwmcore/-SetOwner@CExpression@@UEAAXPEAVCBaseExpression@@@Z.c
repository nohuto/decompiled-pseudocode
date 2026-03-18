/*
 * XREFs of ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801C0CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800705C8 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 */

void __fastcall CExpression::SetOwner(CExpression *this, struct CBaseExpression *a2)
{
  if ( *((_QWORD *)this + 53) )
    CExpression::UnregisterSources(this);
  *((_QWORD *)this + 53) = a2;
}
