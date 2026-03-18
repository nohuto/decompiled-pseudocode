/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0034F20
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C0079700 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C007CD50 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C000DC54 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
  this->Remove(this);
  return 0;
}
