/*
 * XREFs of ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0026218
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C001207C (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001ED40 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020D0C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C002256C (-InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0022E2C (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C00259D0 (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C0026138 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002693C (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C00813E0 (-ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxObject::MarkNoDeleteDDI(FxObject *this, FxObjectLockState State)
{
  KIRQL v3; // al

  if ( State == ObjectLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    this->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
  }
  else
  {
    this->m_ObjectFlags |= 2u;
  }
}
