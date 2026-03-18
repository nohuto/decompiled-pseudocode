/*
 * XREFs of ?vConvertAndSaveBGRAToBGR24@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BE17
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall vConvertAndSaveBGRAToBGR24(int a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7)
{
  _BYTE *v7; // edx
  _BYTE *i; // esi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int result; // eax

  v7 = (_BYTE *)(a1 + 3 * a4);
  for ( i = &v7[3 * a3]; v7 != i; v7 += 3 )
  {
    v10 = *a2;
    *v7 = *a2++;
    v11 = v10 >> 8;
    result = HIWORD(v10);
    v7[1] = v11;
    v7[2] = result;
  }
  return result;
}
