/*
 * XREFs of ??0?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAA@PEBD@Z @ 0x1800411D8
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x1800235DC (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[15] = 0LL;
  a1[16] = "CMK:LLKbdInput";
  return a1;
}
