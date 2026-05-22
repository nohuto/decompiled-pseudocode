/*
 * XREFs of ??0?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@PEBD@Z @ 0x180041EE0
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x18002332C (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>(
        _QWORD *a1,
        __int64 a2)
{
  a1[16] = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[15] = 0LL;
  return a1;
}
