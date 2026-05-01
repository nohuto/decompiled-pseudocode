/*
 * XREFs of ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180072BE0
 * Callers:
 *     ?Release@CEnumerableObjectCollection@@W7EAAKXZ @ 0x1800F0F90 (-Release@CEnumerableObjectCollection@@W7EAAKXZ.c)
 *     ?Release@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x1800F0FA0 (-Release@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Release(CEnumerableObjectCollection *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
    (*(void (__fastcall **)(CEnumerableObjectCollection *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
  return v1;
}
