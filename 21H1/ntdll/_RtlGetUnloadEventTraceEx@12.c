/*
 * XREFs of _RtlGetUnloadEventTraceEx@12 @ 0x4B32F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlGetUnloadEventTraceEx(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  *a1 = &RtlpUnloadEventTraceExSize;
  *a2 = &RtlpUnloadEventTraceExNumber;
  result = a3;
  *a3 = &RtlpUnloadEventTraceEx;
  return result;
}
