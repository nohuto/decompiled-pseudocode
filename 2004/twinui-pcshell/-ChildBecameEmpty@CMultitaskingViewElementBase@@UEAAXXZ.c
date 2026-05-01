/*
 * XREFs of ?ChildBecameEmpty@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1803A2A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::ChildBecameEmpty(CMultitaskingViewElementBase *this)
{
  if ( *((_QWORD *)this + 10) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 408LL))(this) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 416LL))(*((_QWORD *)this + 10));
  }
}
