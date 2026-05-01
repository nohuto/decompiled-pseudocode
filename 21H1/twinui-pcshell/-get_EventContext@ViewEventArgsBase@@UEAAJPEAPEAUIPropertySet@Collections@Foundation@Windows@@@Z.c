/*
 * XREFs of ?get_EventContext@ViewEventArgsBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007BF00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsBase::get_EventContext(
        ViewEventArgsBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  struct Windows::Foundation::Collections::IPropertySet *v3; // rax
  __int64 v4; // rcx

  v3 = 0LL;
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 7);
  }
  *a2 = v3;
  return 0LL;
}
