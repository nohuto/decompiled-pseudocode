/*
 * XREFs of DriverEntry @ 0x1C0008FDC
 * Callers:
 *     GsDriverEntry @ 0x1C0027010 (GsDriverEntry.c)
 * Callees:
 *     memset @ 0x1C00054C0 (memset.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  _QWORD v5[26]; // [rsp+20h] [rbp-79h] BYREF

  memset(v5, 0, sizeof(v5));
  LODWORD(v5[23]) |= 0x11B8u;
  v5[1] = NVMeHwInitialize;
  v5[0] = 0x5000000D0LL;
  v5[2] = NVMeHwStartIo;
  LODWORD(v5[11]) = 16843010;
  v5[3] = NVMeHwInterrupt;
  v5[4] = NVMeHwFindAdapter;
  BYTE4(v5[11]) = 1;
  v5[5] = NVMeHwResetBus;
  v5[15] = NVMeHwAdapterControl;
  v5[16] = NVMeHwBuildIo;
  v5[22] = NVMeHwTracingEnabled;
  v5[25] = NVMeHwUnitControl;
  HIDWORD(v5[23]) = 2;
  LODWORD(v5[8]) = 3992;
  v5[9] = 0x2000020A0LL;
  return ((__int64 (__fastcall *)(_DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD))StorPortInitialize)(
           DriverObject,
           RegistryPath,
           v5,
           0LL);
}
