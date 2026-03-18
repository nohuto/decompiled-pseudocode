/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00142D0
 * Callers:
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C0014270 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C00316A0 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0031730 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C003A2C8 (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C003DFB0 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C003E980 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C003F8E0 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 *     ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x1C0043530 (--_GFxCompanionTarget@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C004D488 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C00539D0 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C00542B0 (--1FxTimer@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0055030 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0055DD0 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C0061820 (--1FxCollection@@UEAA@XZ.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C00647A0 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C006C6FC (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C006F520 (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C0071B18 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C00747C8 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C0075854 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C007EE70 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C0088F80 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C008D5A0 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C0090E20 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C00079A0 (--1FxObject@@UEAA@XZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0031770 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2, unsigned int a3)
{
  _LIST_ENTRY *Blink; // rcx

  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ChildEntry.Blink;
    if ( Blink )
    {
      FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Blink, a2);
      this[-1].m_ChildEntry.Blink = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this, a2, a3);
}
