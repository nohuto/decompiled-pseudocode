/*
 * XREFs of ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C007E3D0
 * Callers:
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C007C124 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C007D260 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxUsbInterface::CleanUpAndDelete(FxUsbInterface *this, __int64 a2, unsigned __int8 a3)
{
  FxUsbPipe **m_ConfiguredPipes; // rdi
  unsigned int m_NumberOfConfiguredPipes; // ebp
  unsigned __int8 v6; // dl
  FxUsbDevice *m_UsbDevice; // rcx
  unsigned __int8 v8; // r8
  unsigned int v9; // esi
  FxUsbPipe **v10; // rbx
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this->m_UsbDevice, &irql, a3);
  m_ConfiguredPipes = this->m_ConfiguredPipes;
  m_NumberOfConfiguredPipes = this->m_NumberOfConfiguredPipes;
  v6 = irql;
  m_UsbDevice = this->m_UsbDevice;
  this->m_ConfiguredPipes = 0LL;
  this->m_NumberOfConfiguredPipes = 0;
  FxNonPagedObject::Unlock(m_UsbDevice, v6, v8);
  if ( m_ConfiguredPipes )
  {
    v9 = 0;
    if ( m_NumberOfConfiguredPipes )
    {
      v10 = m_ConfiguredPipes;
      do
      {
        if ( !*v10 )
          break;
        (*v10)->DeleteObject(*v10);
        ++v9;
        ++v10;
      }
      while ( v9 < m_NumberOfConfiguredPipes );
    }
    FxPoolFree((FX_POOL_TRACKER *)m_ConfiguredPipes);
  }
}
