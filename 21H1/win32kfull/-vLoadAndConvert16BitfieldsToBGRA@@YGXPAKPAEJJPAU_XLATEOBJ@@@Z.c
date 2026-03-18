/*
 * XREFs of ?vLoadAndConvert16BitfieldsToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C026
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

void __stdcall vLoadAndConvert16BitfieldsToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  unsigned __int8 *v6; // esi
  unsigned int v7; // ebx
  ULONG v9; // eax
  int v10; // [esp+18h] [ebp+10h]

  v10 = 0;
  v6 = &a2[2 * a3];
  v7 = &v6[2 * a4] >= v6 ? (unsigned int)(2 * a4) >> 1 : 0;
  if ( v7 )
  {
    do
    {
      v9 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v6);
      v6 += 2;
      *a1++ = v9 | 0xFF000000;
      ++v10;
    }
    while ( v10 != v7 );
  }
}
