/*
 * XREFs of ??0?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAA@PEBD@Z @ 0x180041230
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x1800235DC (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[15] = 0LL;
  a1[16] = "CMK:PnpDeviceNotification";
  return a1;
}
