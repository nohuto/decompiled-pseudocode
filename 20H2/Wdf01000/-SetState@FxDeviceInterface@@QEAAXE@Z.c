/*
 * XREFs of ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x1C0061928
 * Callers:
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B734 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDeviceInterface::SetState(FxDeviceInterface *this, unsigned __int8 State)
{
  bool v2; // zf

  v2 = this->m_SymbolicLinkName.Buffer == 0LL;
  this->m_State = State;
  if ( !v2 )
    IoSetDeviceInterfaceState(&this->m_SymbolicLinkName, State);
}
