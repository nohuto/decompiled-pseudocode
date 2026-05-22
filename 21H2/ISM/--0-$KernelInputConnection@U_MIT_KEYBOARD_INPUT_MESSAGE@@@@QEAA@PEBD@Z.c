/*
 * XREFs of ??0?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAA@PEBD@Z @ 0x180041F04
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x18002332C (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[15] = 0LL;
  a1[16] = "CMK:KbdInput";
  return a1;
}
