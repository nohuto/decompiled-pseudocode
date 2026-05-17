/*
 * XREFs of _RtlSetTimer@28 @ 0x4B3851F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlSetTimer(int a1, _DWORD *a2, int a3, int a4, unsigned int a5, int a6, __int16 a7)
{
  return RtlCreateTimer(a1, a2, a3, a4, a5, a6, a7);
}
