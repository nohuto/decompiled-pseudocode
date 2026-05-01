/*
 * XREFs of ?SetViewData@CAppLayoutItem@@UEAAXPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180484890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayoutItem::SetViewData(RTL_SRWLOCK *this, const struct APPLICATION_VIEW_DATA *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  *(_OWORD *)&this[10].Ptr = *(_OWORD *)a2;
  *(_OWORD *)&this[12].Ptr = *((_OWORD *)a2 + 1);
  this[14].Ptr = *(PVOID *)((char *)a2 + 32);
  LODWORD(this[15].Ptr) = *((_DWORD *)a2 + 10);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
