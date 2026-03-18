/*
 * XREFs of ?BltLnkReadPat1@@YGXPAEKPBEKKKK@Z @ 0x24878A
 * Callers:
 *     ?BltLnkSrcCopyMsk1@@YGXPAUBLTINFO@@PAU_BLTLNK_MASKINFO@@PAK2@Z @ 0x248C2C (-BltLnkSrcCopyMsk1@@YGXPAUBLTINFO@@PAU_BLTLNK_MASKINFO@@PAK2@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall BltLnkReadPat1(
        unsigned __int8 *a1,
        char a2,
        const unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned __int8 v15; // [esp+Ch] [ebp-4h]
  char v16; // [esp+2Bh] [ebp+1Bh]

  v15 = 0;
  v7 = a5;
  v8 = a2 & 7;
  v10 = a5 & 7;
  while ( a6 )
  {
    v16 = *((_BYTE *)&StartMask + v10) & a3[v7 >> 3];
    if ( v8 <= v10 )
    {
      v11 = 8 - v10;
      if ( 8 - v10 > a6 )
        v11 = a6;
      if ( v11 > a4 - v7 )
        v11 = a4 - v7;
      v12 = (unsigned __int8)(v16 & *((_BYTE *)&EndMask + v11 + v10)) << (v10 - v8);
    }
    else
    {
      v11 = 8 - v8;
      if ( 8 - v8 > a6 )
        v11 = a6;
      if ( v11 > a4 - v7 )
        v11 = a4 - v7;
      v12 = (unsigned __int8)(v16 & *((_BYTE *)&EndMask + v11 + v10)) >> (v8 - v10);
    }
    v15 |= v12;
    v13 = v11 + v7;
    a6 -= v11;
    a2 += v11;
    v14 = a4 != v13 ? v13 : 0;
    v10 = v13 != a4 ? v13 & 7 : 0;
    v8 = a2 & 7;
    if ( (a2 & 7) == 0 || !a6 )
    {
      *a1 = v15;
      v15 = 0;
      ++a1;
    }
    v7 = v14;
  }
}
