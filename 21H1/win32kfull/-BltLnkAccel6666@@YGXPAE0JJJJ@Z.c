/*
 * XREFs of ?BltLnkAccel6666@@YGXPAE0JJJJ@Z @ 0x2481B3
 * Callers:
 *     ?BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z @ 0x4F4D0 (-BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge BltLnkAccel6666(
        _DWORD *a1@<edx>,
        char *a2@<ecx>,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  char *v8; // eax
  int v11; // esi
  char *v12; // edx
  _DWORD *v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // [esp+Ch] [ebp-8h]
  char *v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+24h] [ebp+10h]

  v8 = a2;
  v17 = a2;
  v16 = a5 >> 2;
  v18 = a5 & 3;
  while ( a6 )
  {
    --a6;
    v11 = v18;
    v12 = v8;
    v13 = a1;
    if ( v16 )
    {
      v14 = v16;
      do
      {
        if ( *(_DWORD *)v12 )
          *v13 ^= *(_DWORD *)v12;
        v12 += 4;
        ++v13;
        --v14;
      }
      while ( v14 );
      v11 = v18;
      v8 = v17;
    }
    if ( v11 )
    {
      v15 = v12 - (char *)v13;
      do
      {
        *(_BYTE *)v13 ^= *((_BYTE *)v13 + v15);
        v13 = (_DWORD *)((char *)v13 + 1);
        --v11;
      }
      while ( v11 );
      v8 = v17;
    }
    a1 = (_DWORD *)((char *)a1 + (_DWORD)a4);
    v8 = &v8[(_DWORD)a3];
    v17 = v8;
  }
}
