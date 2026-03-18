/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_555@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BEA3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_WORD *__stdcall vConvertAndSaveBGRAToRGB16_555(int a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7)
{
  _WORD *v8; // edi
  _WORD *result; // eax
  unsigned int v10; // esi
  unsigned int v12; // eax
  unsigned int v13; // edx
  _WORD *v14; // [esp+1Ch] [ebp+14h]

  v14 = 0;
  v8 = (_WORD *)(a1 + 2 * a4);
  result = &v8[a3];
  v10 = result >= v8 ? (unsigned int)(2 * a3) >> 1 : 0;
  if ( v10 )
  {
    do
    {
      v12 = *a2;
      v13 = HIWORD(*a2++);
      LOWORD(v13) = ((unsigned __int8)v12 >> 3) | (4 * ((v12 >> 8) & 0xF8 | (32 * (v13 & 0xF8))));
      result = (_WORD *)((char *)v14 + 1);
      *v8 = v13;
      v14 = result;
      ++v8;
    }
    while ( result != (_WORD *)v10 );
  }
  return result;
}
