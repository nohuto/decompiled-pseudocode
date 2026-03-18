/*
 * XREFs of ?Dispatch@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0051D70
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C00136D0 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 */

int __fastcall FxDevice::Dispatch(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  return DispatchWorker(
           *((FxDevice **)DeviceObject->DeviceExtension - 6),
           Irp,
           *(_LIST_ENTRY **)(*((_QWORD *)DeviceObject->DeviceExtension - 6) + 368LL));
}
