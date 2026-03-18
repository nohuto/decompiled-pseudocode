/*
 * XREFs of _vAlphaConstOnly@16 @ 0xF9375
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vAlphaConstOnly(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int result; // eax
  _DWORD *i; // edi
  int v7; // ebx
  unsigned int v8; // edx

  result = BYTE2(a4);
  for ( i = a1;
        i != &a1[a3];
        *(i - 1) = (((((v7 & 0xFF00FF00) >> 8) + v7) & 0xFF00FF00) >> 8) | (v8 + ((v8 & 0xFF00FF00) >> 8)) & 0xFF00FF00 )
  {
    v7 = 255 * (*i & 0xFF00FF) + BYTE2(a4) * ((*a2 & 0xFF00FF) - (*i & 0xFF00FF)) + 8388736;
    v8 = BYTE2(a4) * (((*a2++ >> 8) & 0xFF00FF) - ((*i & 0xFF00FF00) >> 8)) + 8388736 + 255 * ((*i & 0xFF00FF00) >> 8);
    ++i;
  }
  return result;
}
