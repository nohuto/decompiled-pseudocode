/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001B2C8
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0005420 (FxIoTargetFormatIoctl.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001A074 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C001ADA0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     FxIoTargetFormatIo @ 0x1C00724F4 (FxIoTargetFormatIo.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C0076410 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C0076F20 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0078240 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C0078400 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00799DC (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C007AB18 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestBuffer::SetMemory(FxRequestBuffer *this, IFxMemory *Memory, _WDFMEMORY_OFFSET *Offsets)
{
  _MDL *v6; // rax
  FxRequestBufferType v7; // eax

  v6 = Memory->GetMdl(Memory);
  if ( v6 )
  {
    this->u.RefMdl.Mdl = v6;
    v7 = FxRequestBufferReferencedMdl;
  }
  else
  {
    v7 = FxRequestBufferMemory;
  }
  this->DataType = v7;
  this->u.Memory.Memory = Memory;
  this->u.Memory.Offsets = Offsets;
}
