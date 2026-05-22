/*
 * XREFs of ??0?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAA@PEBD@Z @ 0x180041EB4
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x18002332C (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>::KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[15] = 0LL;
  a1[16] = "CMK:HotKeyRegistration";
  return a1;
}
