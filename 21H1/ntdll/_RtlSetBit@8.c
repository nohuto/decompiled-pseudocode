/*
 * XREFs of _RtlSetBit@8 @ 0x4B306FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlSetBit(int a1, unsigned int a2)
{
  _BYTE *v2; // edx
  int result; // eax

  v2 = (_BYTE *)(*(_DWORD *)(a1 + 4) + (a2 >> 3));
  result = (char)*v2 | (1 << (a2 & 7));
  *v2 = result;
  return result;
}
