/*
 * XREFs of ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x1800C0F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF07C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1800BF818 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x1800C16E0 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 */

void __fastcall SipcServer::OnDisposePublic(SipcServer *this)
{
  SipcServer::EndpointListEntry *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = (SipcServer::EndpointListEntry *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    SipcServer::EndpointListEntry::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 18) = 0LL;
  }
  NtList<SipcServer::EndpointListEntry>::Clear((SipcServer::EndpointListEntry **)this + 15);
  AggregateWaitHandle::Reset((SipcServer *)((char *)this + 72));
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 8);
  if ( v3 )
  {
    (**v3)(v3, 1LL);
    *((_QWORD *)this + 8) = 0LL;
  }
}
