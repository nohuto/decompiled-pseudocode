/*
 * XREFs of ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C0080310
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EA4C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C0041054 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxPkgPnp::Dispose(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _SINGLE_LIST_ENTRY *Next; // rdi
  _SINGLE_LIST_ENTRY *v5; // rax
  FxQueryInterface *v6; // rcx
  void (__fastcall *InterfaceDereference)(void *); // rax

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, a2, 0LL);
  Next = this->m_QueryInterfaceHead.Next;
  this->m_QueryInterfaceHead.Next = 0LL;
  p_m_QueryInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_QueryInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  while ( Next )
  {
    v5 = Next;
    v6 = (FxQueryInterface *)&Next[-5];
    Next = Next->Next;
    v5->Next = 0LL;
    if ( !v6->m_EmbeddedInterface )
      FxQueryInterface::`scalar deleting destructor'(v6);
  }
  InterfaceDereference = this->m_D3ColdInterface.InterfaceDereference;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_D3ColdInterface.Context);
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  return 1;
}
