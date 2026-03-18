/*
 * XREFs of ACPIInternalGetDeviceCapabilities @ 0x1C00A1F4C
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009ED54 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     memset @ 0x1C0032180 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009DDBC (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIInternalGetDeviceCapabilities(PDEVICE_OBJECT DeviceObject, _DWORD *a2)
{
  _QWORD v5[10]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  memset(v5, 0, 0x48uLL);
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[2] = -1;
  a2[3] = -1;
  return ACPIInternalSendSynchronousIrp(DeviceObject, (__int64)v5, &v6);
}
