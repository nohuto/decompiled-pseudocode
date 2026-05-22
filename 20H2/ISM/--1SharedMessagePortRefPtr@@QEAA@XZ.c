/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1801488F4
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$8 @ 0x18019EE0A (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  v2 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
