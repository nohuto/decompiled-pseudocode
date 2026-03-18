/*
 * XREFs of ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C0089400
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled@@YAHXZ @ 0x1C001C9CC (-Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C0089060 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

void __fastcall FxInterrupt::DeleteObject(FxInterrupt *this)
{
  _LIST_ENTRY *p_m_PnpList; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned int MessageNumber; // edi
  FxDevicePwrRequirementMachine *m_WakeInterruptMachine; // rcx

  if ( this->m_AddedToList )
  {
    p_m_PnpList = &this->m_PnpList;
    --*(_DWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1184LL);
    Flink = this->m_PnpList.Flink;
    if ( Flink->Blink != &this->m_PnpList || (Blink = this->m_PnpList.Blink, Blink->Flink != p_m_PnpList) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  if ( this->m_CmTranslatedResource )
  {
    MessageNumber = this->m_InterruptInfo.MessageNumber;
    memset(&this->m_InterruptInfo, 0, sizeof(this->m_InterruptInfo));
    this->m_InterruptInfo.Size = 64;
    this->m_CmTranslatedResource = 0LL;
    this->m_InterruptInfo.MessageNumber = MessageNumber;
  }
  m_WakeInterruptMachine = (FxDevicePwrRequirementMachine *)this->m_WakeInterruptMachine;
  if ( m_WakeInterruptMachine )
  {
    FxWakeInterruptMachine::`scalar deleting destructor'(m_WakeInterruptMachine);
    this->m_WakeInterruptMachine = 0LL;
    if ( (unsigned int)Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled() )
      --*(_DWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1208LL);
  }
  FxObject::DeleteObject(this);
}
