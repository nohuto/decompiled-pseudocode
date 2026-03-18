/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16Bitfields@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BE54
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

ULONG __stdcall vConvertAndSaveBGRAToRGB16Bitfields(int a1, ULONG *a2, int a3, int a4, XLATEOBJ *pxlo, int a6, int a7)
{
  int v7; // ebx
  _WORD *v8; // esi
  ULONG result; // eax
  ULONG v11; // [esp+1Ch] [ebp+14h]

  v7 = 0;
  v8 = (_WORD *)(a1 + 2 * a4);
  result = &v8[a3] >= v8 ? (unsigned int)(2 * a3) >> 1 : 0;
  v11 = result;
  if ( result )
  {
    do
    {
      result = XLATEOBJ_iXlate(pxlo, *a2);
      ++v7;
      *v8 = result;
      ++a2;
      ++v8;
    }
    while ( v7 != v11 );
  }
  return result;
}
