/*
 * XREFs of ?vConvertAndSaveBGRATo32Bitfields@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BC9E
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

unsigned int __stdcall vConvertAndSaveBGRATo32Bitfields(
        int a1,
        ULONG *a2,
        int a3,
        int a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7)
{
  unsigned int v8; // edi
  unsigned int result; // eax
  unsigned int v10; // ebx
  ULONG *v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // [esp+1Ch] [ebp+14h]

  v13 = 0;
  v8 = a1 + 4 * a4;
  result = 4 * a3 + v8;
  v10 = result >= v8 ? (unsigned int)(4 * a3) >> 2 : 0;
  if ( v10 )
  {
    v11 = a2;
    v12 = v8 - (_DWORD)a2;
    do
    {
      *(ULONG *)((char *)v11 + v12) = XLATEOBJ_iXlate(pxlo, *v11);
      ++v11;
      result = v13 + 1;
      v13 = result;
    }
    while ( result != v10 );
  }
  return result;
}
