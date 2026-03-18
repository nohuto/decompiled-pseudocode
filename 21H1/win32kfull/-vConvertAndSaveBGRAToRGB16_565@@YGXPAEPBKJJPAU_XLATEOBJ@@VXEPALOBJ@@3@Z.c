/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_565@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BF14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_WORD *__stdcall vConvertAndSaveBGRAToRGB16_565(int a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7)
{
  _WORD *v8; // edi
  _WORD *result; // eax
  unsigned int v10; // esi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int16 v14; // dx
  _WORD *v15; // [esp+1Ch] [ebp+14h]

  v15 = 0;
  v8 = (_WORD *)(a1 + 2 * a4);
  result = &v8[a3];
  v10 = result >= v8 ? (unsigned int)(2 * a3) >> 1 : 0;
  if ( v10 )
  {
    do
    {
      v12 = *a2;
      v13 = HIWORD(*a2++);
      v14 = ((unsigned __int8)v12 >> 3) | (8 * ((v12 >> 8) & 0xFC | (32 * (v13 & 0xF8))));
      result = (_WORD *)((char *)v15 + 1);
      *v8 = v14;
      v15 = result;
      ++v8;
    }
    while ( result != (_WORD *)v10 );
  }
  return result;
}
