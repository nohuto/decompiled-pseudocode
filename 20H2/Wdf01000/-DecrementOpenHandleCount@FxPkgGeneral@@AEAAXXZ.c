/*
 * XREFs of ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008D248
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z @ 0x1C008D204 (-CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxPkgGeneral::DecrementOpenHandleCount(FxPkgGeneral *this)
{
  FxDeviceBase *m_DeviceBase; // rcx

  if ( _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( BYTE5(m_DeviceBase[1].m_Globals) )
      FxObject::DeleteObject(m_DeviceBase);
  }
}
