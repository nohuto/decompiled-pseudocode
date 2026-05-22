/*
 * XREFs of ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x1800C16B0
 * Callers:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF07C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::RemoveOwner(SipcEndpoint *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v2 )
  {
    (**v2)(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
}
