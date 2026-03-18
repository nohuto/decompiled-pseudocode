/*
 * XREFs of PiCMFastIoDeviceDispatch @ 0x1406A6760
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x1402E5AE0 (IoIs32bitProcess.c)
 *     PiCMHandleIoctl @ 0x1406A67D0 (PiCMHandleIoctl.c)
 */

char __fastcall PiCMFastIoDeviceDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  BOOLEAN v9; // al

  v9 = IoIs32bitProcess(0LL);
  *a8 = PiCMHandleIoctl(a3, a8 + 2, a7, v9);
  return 1;
}
