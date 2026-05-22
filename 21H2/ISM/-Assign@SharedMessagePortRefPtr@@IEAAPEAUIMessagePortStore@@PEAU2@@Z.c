/*
 * XREFs of ?Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z @ 0x180148E58
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180148F74 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

struct IMessagePortStore *__fastcall SharedMessagePortRefPtr::Assign(
        SharedMessagePortRefPtr *this,
        struct IMessagePortStore *a2)
{
  if ( a2 )
    (*(void (__fastcall **)(struct IMessagePortStore *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  *(_QWORD *)this = a2;
  return a2;
}
