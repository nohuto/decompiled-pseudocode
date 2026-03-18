/*
 * XREFs of ?vConvertAndSaveBGRAToRGB32@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BFCC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall vConvertAndSaveBGRAToRGB32(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx
  unsigned int v8; // edx
  unsigned int result; // eax
  unsigned int v10; // edi
  _DWORD *v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // [esp+1Ch] [ebp+14h]

  v7 = 0;
  v8 = a1 + 4 * a4;
  result = 4 * a3 + v8;
  v10 = result >= v8 ? (unsigned int)(4 * a3) >> 2 : 0;
  if ( v10 )
  {
    v11 = a2;
    v12 = v8 - (_DWORD)a2;
    do
    {
      HIWORD(v13) = (unsigned __int8)*v11;
      ++v7;
      BYTE1(v13) = BYTE1(*v11);
      LOBYTE(v13) = BYTE2(*v11);
      result = v13;
      *(_DWORD *)((char *)v11++ + v12) = v13;
    }
    while ( v7 != v10 );
  }
  return result;
}
