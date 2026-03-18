/*
 * XREFs of ?BltLnkAccel8888@@YGXPAE0JJJJ@Z @ 0x248233
 * Callers:
 *     ?BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z @ 0x4F4D0 (-BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge BltLnkAccel8888(
        _DWORD *a1@<edx>,
        unsigned __int8 *a2@<ecx>,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // esi
  char *v12; // edx
  _DWORD *v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  int v18; // [esp+Ch] [ebp-Ch]
  unsigned __int8 *v19; // [esp+10h] [ebp-8h]
  _DWORD *v20; // [esp+14h] [ebp-4h]
  int v21; // [esp+28h] [ebp+10h]

  v8 = a1;
  v20 = a1;
  v9 = a5 >> 2;
  v10 = a5 & 3;
  v19 = a2;
  v18 = a5 >> 2;
  v21 = v10;
  while ( a6 )
  {
    --a6;
    v12 = (char *)a2;
    v13 = v8;
    if ( v9 )
    {
      v14 = v9;
      do
      {
        v15 = *(_DWORD *)v12;
        if ( *(_DWORD *)v12 != -1 )
        {
          if ( v15 )
            *v13 &= v15;
          else
            *v13 = 0;
        }
        v12 += 4;
        ++v13;
        --v14;
      }
      while ( v14 );
      v10 = v21;
      v8 = v20;
    }
    v16 = v10;
    if ( v10 )
    {
      v17 = v12 - (char *)v13;
      do
      {
        *(_BYTE *)v13 &= *((_BYTE *)v13 + v17);
        v13 = (_DWORD *)((char *)v13 + 1);
        --v16;
      }
      while ( v16 );
      v8 = v20;
    }
    v8 = (_DWORD *)((char *)v8 + (_DWORD)a4);
    a2 = &v19[(_DWORD)a3];
    v9 = v18;
    v20 = v8;
    v19 = &v19[(_DWORD)a3];
  }
}
