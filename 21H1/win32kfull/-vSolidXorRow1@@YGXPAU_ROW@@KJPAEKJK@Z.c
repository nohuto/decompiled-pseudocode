/*
 * XREFs of ?vSolidXorRow1@@YGXPAU_ROW@@KJPAEKJK@Z @ 0x248058
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidXorRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  unsigned int v7; // ebx
  unsigned __int8 *v8; // esi
  struct _ROW *v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  unsigned __int8 *v17; // ecx
  unsigned int v18; // edi
  int v19; // [esp+8h] [ebp-4h]
  char v20; // [esp+18h] [ebp+Ch]
  int v21; // [esp+1Ch] [ebp+10h]
  int v22; // [esp+1Ch] [ebp+10h]
  int v23; // [esp+20h] [ebp+14h]

  v7 = a2;
  v8 = &a4[a6 * a3];
  if ( a2 )
  {
    v20 = 5 - a7;
    v9 = a1;
    do
    {
      v10 = *(_DWORD *)v9;
      v11 = v10 >> v20;
      v12 = *((_DWORD *)a1 + 1);
      v21 = v12 - v10;
      v23 = v12 >> v20;
      v19 = (v10 << a7) & 0x1F;
      v13 = v12 >> v20;
      v22 = ((unsigned __int8)(v10 << a7) + (unsigned __int8)(v21 << a7)) & 0x1F;
      v14 = (unsigned int)(&aulMsk)[v19];
      v15 = ~(unsigned int)(&aulMsk)[v22];
      if ( v11 == v13 )
      {
        v14 &= v15;
      }
      else if ( !v19 )
      {
        goto LABEL_8;
      }
      *(_DWORD *)&v8[4 * v11] ^= a5 & v14;
      if ( v11 != v13 )
      {
        ++v11;
LABEL_8:
        v16 = v13 - v11;
        if ( v13 == v11 )
        {
          v18 = a5;
        }
        else
        {
          v17 = &v8[4 * v11];
          v18 = a5;
          do
          {
            *(_DWORD *)v17 ^= a5;
            v17 += 4;
            --v16;
          }
          while ( v16 );
          v13 = v23;
        }
        if ( v22 )
          *(_DWORD *)&v8[4 * v13] ^= v18 & v15;
      }
      v8 += a6;
      v9 = (struct _ROW *)((char *)a1 + 8);
      a1 = (struct _ROW *)((char *)a1 + 8);
      --v7;
    }
    while ( v7 );
  }
}
