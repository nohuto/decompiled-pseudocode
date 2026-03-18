/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140A801C0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1)
{
  return ((__int64 (__fastcall *)(_QWORD))pXdvIoBuildDeviceIoControlRequest)(a1);
}
