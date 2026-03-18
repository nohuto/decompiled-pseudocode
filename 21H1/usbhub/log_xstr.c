/*
 * XREFs of log_xstr @ 0x1C00412A8
 * Callers:
 *     UsbhIoctlTraceOutput @ 0x1C0040ACC (UsbhIoctlTraceOutput.c)
 *     UsbhExceptionTrace @ 0x1C004A8FC (UsbhExceptionTrace.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall log_xstr(_OWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _OWORD *result; // rax
  __int128 v4; // [rsp+0h] [rbp-18h]

  *((_QWORD *)&v4 + 1) = 0x7FFFLL;
  *(_QWORD *)&v4 = a3;
  if ( a2 < 0x7FFF )
    WORD4(v4) = a2;
  result = a1;
  *a1 = v4;
  return result;
}
