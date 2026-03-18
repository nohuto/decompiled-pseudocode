/*
 * XREFs of ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C0070164
 * Callers:
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C006FB1C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EC9C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0071100 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C0071330 (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 */

void __fastcall FxUsbDevice::PipesGotoRemoveState(FxUsbDevice *this, _FX_DRIVER_GLOBALS *ForceRemovePipes)
{
  FxWaitLockInternal *p_m_InterfaceIterationLock; // r15
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  __int64 i; // r14
  FxUsbInterface *v7; // rdi
  __int64 j; // rsi
  FxUsbPipe **m_ConfiguredPipes; // rax
  FxUsbPipe *v10; // rcx
  unsigned __int8 v11; // dl
  __int64 k; // rsi
  FxUsbInterface *v13; // rdi
  __int64 m; // r14
  FxUsbPipe *v15; // rcx
  int v16; // [rsp+20h] [rbp-40h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY interfaceHead; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int8 irql; // [rsp+98h] [rbp+38h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+A0h] [rbp+40h] BYREF

  sentHead.Next = 0LL;
  pendHead.Blink = &pendHead;
  p_m_InterfaceIterationLock = &this->m_InterfaceIterationLock;
  irql = 0;
  pendHead.Flink = &pendHead;
  interfaceHead.Blink = &interfaceHead;
  interfaceHead.Flink = &interfaceHead;
  FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, ForceRemovePipes, 0LL);
  FxNonPagedObject::Lock(this, &irql, v4);
  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v7 = this->m_Interfaces[i];
    if ( v7->m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v7->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        m_ConfiguredPipes = v7->m_ConfiguredPipes;
        wait = 0;
        v10 = m_ConfiguredPipes[j];
        if ( v10 )
        {
          LOBYTE(v16) = 1;
          v10->GotoRemoveState(v10, WdfIoTargetDeleted, &pendHead, &sentHead, v16, &wait);
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  FxUsbDevice::_CleanupPipesRequests(&pendHead, &sentHead);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v13 = this->m_Interfaces[k];
    if ( v13->m_ConfiguredPipes )
    {
      for ( m = 0LL; (unsigned int)m < v13->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v15 = v13->m_ConfiguredPipes[m];
        if ( v15 )
          v15->WaitForSentIoToComplete(v15);
      }
    }
    FxUsbInterface::CleanUpAndDelete(v13, v11);
  }
  p_m_InterfaceIterationLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_InterfaceIterationLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
