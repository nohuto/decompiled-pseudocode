/*
 * XREFs of ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1C007BD10
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C744 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C984 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C001275C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0055598 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 */

void __fastcall FxUsbUrb::FxUsbUrb(
        FxUsbUrb *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        USBD_HANDLE__ *USBDHandle,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  FxMemoryObject::FxMemoryObject(this, FxDriverGlobals, 0x88u, BufferSize);
  this->m_pBuffer = Buffer;
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxUsbUrb::`vftable'{for `FxObject'};
  this->m_USBDHandle = USBDHandle;
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  FxObject::MarkDisposeOverride(this, ObjectLock);
}
