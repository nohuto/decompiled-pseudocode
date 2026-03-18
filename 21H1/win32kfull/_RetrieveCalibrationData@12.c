/*
 * XREFs of _RetrieveCalibrationData@12 @ 0x13EF9A
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z @ 0x13E409 (-ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z.c)
 *     _GetPointerDeviceKey@12 @ 0x1442BA (_GetPointerDeviceKey@12.c)
 */

NTSTATUS __stdcall RetrieveCalibrationData(int a1, struct tagHID_POINTER_DEVICE_INFO *a2, int a3)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING v4; // [esp-4h] [ebp-8h] BYREF
  void *savedregs; // [esp+4h] [ebp+0h]

  v4.Buffer = 0;
  result = GetPointerDeviceKey((PHANDLE)&v4.Buffer, (char)a2, a3);
  if ( result )
  {
    *(_DWORD *)&v4.Length = a3;
    ReadLinearityData((int)v4.Buffer, a1, a2, v4, savedregs);
    return ZwClose(v4.Buffer);
  }
  return result;
}
