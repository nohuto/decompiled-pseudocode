/*
 * XREFs of _RtlImageRvaToVa@16 @ 0x4B34D310
 * Callers:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 * Callees:
 *     _RtlImageRvaToSection@12 @ 0x4B34D2C0 (_RtlImageRvaToSection@12.c)
 */

unsigned int __stdcall RtlImageRvaToVa(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v4; // ecx

  if ( !a4 || (v4 = (_DWORD *)*a4) == 0 || a3 < v4[3] || a3 >= v4[3] + v4[4] )
    v4 = (_DWORD *)RtlImageRvaToSection(a1, a2, a3);
  if ( !v4 )
    return 0;
  if ( a4 )
    *a4 = v4;
  return a3 + a2 + v4[5] - v4[3];
}
