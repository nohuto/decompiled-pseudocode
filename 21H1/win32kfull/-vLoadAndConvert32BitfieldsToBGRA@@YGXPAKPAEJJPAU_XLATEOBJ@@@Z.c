/*
 * XREFs of ?vLoadAndConvert32BitfieldsToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C296
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

void __stdcall vLoadAndConvert32BitfieldsToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  unsigned __int8 *v6; // edi
  unsigned int v7; // ebx
  unsigned int *v8; // esi
  int v9; // edi
  int v10; // [esp+18h] [ebp+10h]

  v10 = 0;
  v6 = &a2[4 * a3];
  v7 = &v6[4 * a4] >= v6 ? (unsigned int)(4 * a4) >> 2 : 0;
  if ( v7 )
  {
    v8 = a1;
    v9 = v6 - (unsigned __int8 *)a1;
    do
    {
      *v8 = XLATEOBJ_iXlate(pxlo, *(unsigned int *)((char *)v8 + v9)) | 0xFF000000;
      ++v8;
      ++v10;
    }
    while ( v10 != v7 );
  }
}
