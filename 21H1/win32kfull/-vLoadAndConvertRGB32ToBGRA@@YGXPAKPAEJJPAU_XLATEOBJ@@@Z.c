/*
 * XREFs of ?vLoadAndConvertRGB32ToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C7EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vLoadAndConvertRGB32ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  int v5; // ebx
  unsigned __int8 *v6; // edx
  unsigned int v7; // edi
  unsigned int *v8; // esi
  int v9; // edx
  unsigned __int8 *v10; // [esp+14h] [ebp+Ch]

  v5 = 0;
  v6 = &a2[4 * a3];
  v7 = &v6[4 * a4] >= v6 ? (unsigned int)(4 * a4) >> 2 : 0;
  if ( v7 )
  {
    v8 = a1;
    v9 = v6 - (unsigned __int8 *)a1;
    do
    {
      BYTE2(v10) = *(unsigned int *)((char *)v8 + v9);
      ++v5;
      BYTE1(v10) = BYTE1(*(unsigned int *)((char *)v8 + v9));
      LOBYTE(v10) = BYTE2(*(unsigned int *)((char *)v8 + v9));
      HIBYTE(v10) = -1;
      *v8++ = (unsigned int)v10;
    }
    while ( v5 != v7 );
  }
}
