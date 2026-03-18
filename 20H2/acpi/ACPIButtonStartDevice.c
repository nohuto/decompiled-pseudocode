/*
 * XREFs of ACPIButtonStartDevice @ 0x1C0090B30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalSetDeviceInterface @ 0x1C000CE70 (ACPIInternalSetDeviceInterface.c)
 */

__int64 __fastcall ACPIButtonStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = ACPIInternalSetDeviceInterface(a1, &GUID_DEVICE_SYS_BUTTON);
  a2->IoStatus.Status = v3;
  v4 = v3;
  IofCompleteRequest(a2, 0);
  return v4;
}
