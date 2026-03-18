/*
 * XREFs of ?vConvertAndSaveBGRAToRGB24@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BF8D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vConvertAndSaveBGRAToRGB24(int a1, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  _BYTE *v7; // edx
  _BYTE *i; // esi
  int result; // eax
  unsigned int v11; // ecx

  v7 = (_BYTE *)(a1 + 3 * a4);
  for ( i = &v7[3 * a3]; v7 != i; v7 += 3 )
  {
    result = *a2;
    v11 = HIWORD(*a2++);
    *v7 = v11;
    v7[1] = BYTE1(result);
    v7[2] = result;
  }
  return result;
}
