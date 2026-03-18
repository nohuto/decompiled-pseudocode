/*
 * XREFs of ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C0026DE0
 * Callers:
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0026D34 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002CAD0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C003420C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxIoTarget::GetTargetIoType(FxIoTarget *this)
{
  unsigned int Flags; // ecx

  Flags = this->m_TargetDevice->Flags;
  if ( (Flags & 4) != 0 )
    return 2;
  else
    return (unsigned __int8)(Flags & 0x10 | 8) >> 3;
}
