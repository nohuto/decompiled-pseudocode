/*
 * XREFs of ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0070C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EC9C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00648E0 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C00657A0 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0066260 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxUsbDevice::Purge(FxUsbDevice *this, __int64 Action)
{
  _WDF_IO_TARGET_PURGE_IO_ACTION v2; // r15d
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // rsi
  FxUsbInterface *v8; // rdi
  __int64 j; // r14
  FxUsbPipe *v10; // rcx
  __int64 k; // rdi
  FxUsbInterface *v12; // rsi
  __int64 m; // r14
  FxUsbPipe *v14; // rcx
  int v15; // [rsp+28h] [rbp-28h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+98h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+A0h] [rbp+50h] BYREF

  sentHead.Next = 0LL;
  v2 = (int)Action;
  irql = 0;
  FxIoTarget::Purge(this, Action);
  if ( v2 != WdfIoTargetPurgeIo )
    FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, v4, 0LL);
  FxNonPagedObject::Lock(this, &irql, v5);
  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v8 = this->m_Interfaces[i];
    if ( v8->m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v8->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        v10 = v8->m_ConfiguredPipes[j];
        if ( v10 )
        {
          wait = 0;
          LOBYTE(v15) = 1;
          pendedHead.Blink = &pendedHead;
          pendedHead.Flink = &pendedHead;
          v10->GotoPurgeState(v10, v2, &pendedHead, &sentHead, &wait, v15);
          FxIoTarget::CompletePendedRequestList(v8->m_ConfiguredPipes[j], &pendedHead);
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  FxIoTarget::_CancelSentRequests(&sentHead);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v12 = this->m_Interfaces[k];
    if ( v12->m_ConfiguredPipes )
    {
      for ( m = 0LL; (unsigned int)m < v12->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v14 = v12->m_ConfiguredPipes[m];
        if ( v14 )
          v14->WaitForSentIoToComplete(v14);
      }
    }
  }
  if ( v2 != WdfIoTargetPurgeIo )
  {
    this->m_InterfaceIterationLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_InterfaceIterationLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
}
