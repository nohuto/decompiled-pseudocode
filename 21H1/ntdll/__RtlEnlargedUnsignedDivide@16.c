/*
 * XREFs of __RtlEnlargedUnsignedDivide@16 @ 0x4B30833C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall _RtlEnlargedUnsignedDivide(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  int result; // eax

  result = a1 / a2;
  if ( a3 )
    *a3 = a1 % a2;
  return result;
}
