/*
 * XREFs of ?BltLnkAccelEEEE@@YGXPAE0JJJJ@Z @ 0x2482BF
 * Callers:
 *     ?BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z @ 0x4F4D0 (-BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge BltLnkAccelEEEE(
        unsigned __int8 *a1@<edx>,
        unsigned __int8 *a2@<ecx>,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v8; // ebx
  int v9; // eax
  int v10; // esi
  char *v12; // edx
  unsigned __int8 *v13; // ecx
  int i; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  unsigned __int8 *v18; // [esp+Ch] [ebp-8h]
  unsigned __int8 *v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+24h] [ebp+10h]

  v8 = a1;
  v19 = a1;
  v9 = a5 >> 2;
  v10 = a5 & 3;
  v18 = a2;
  v20 = a5 >> 2;
  while ( a6 )
  {
    --a6;
    v12 = (char *)a2;
    v13 = v8;
    for ( i = v9; i; --i )
    {
      v15 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
      {
        if ( v15 == -1 )
          *(_DWORD *)v13 = -1;
        else
          *(_DWORD *)v13 |= v15;
      }
      v12 += 4;
      v13 += 4;
    }
    v16 = v10;
    if ( v10 )
    {
      v17 = v12 - (char *)v13;
      do
      {
        *v13 |= v13[v17];
        ++v13;
        --v16;
      }
      while ( v16 );
    }
    v8 = &v19[(_DWORD)a4];
    a2 = &v18[(_DWORD)a3];
    v9 = v20;
    v19 = &v19[(_DWORD)a4];
    v18 = &v18[(_DWORD)a3];
  }
}
