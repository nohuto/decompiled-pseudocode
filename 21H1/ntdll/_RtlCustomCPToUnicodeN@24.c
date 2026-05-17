/*
 * XREFs of _RtlCustomCPToUnicodeN@24 @ 0x4B343EC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 */

unsigned int __stdcall RtlCustomCPToUnicodeN(
        int a1,
        char *a2,
        unsigned int a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  int v6; // ecx
  unsigned int *v7; // eax
  int v8; // esi
  unsigned int v10; // esi
  unsigned int v11; // ebx
  unsigned int v12; // edi
  unsigned int v13; // edx
  int v14; // eax
  char *v15; // edx
  char *v16; // esi
  unsigned int v17; // eax
  char *v18; // esi
  unsigned __int16 v19; // ax
  int v20; // eax
  int v21; // [esp+4h] [ebp-10h] BYREF
  int v22; // [esp+8h] [ebp-Ch]
  unsigned int v23; // [esp+Ch] [ebp-8h]
  char *v24; // [esp+10h] [ebp-4h]

  v6 = a1;
  if ( *(_WORD *)a1 == 0xFDE9 )
  {
    v7 = a4;
    if ( !a4 )
      v7 = (unsigned int *)&v21;
    v8 = 0;
    if ( a6 )
    {
      if ( RtlUTF8ToUnicodeN(a2, a3, v7, a5, a6) == -1073741789 )
        return -2147483643;
    }
    else
    {
      *v7 = 0;
    }
    return v8;
  }
  else
  {
    v10 = 0;
    v11 = a3 >> 1;
    v12 = a6;
    v23 = a3 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v15 = a2;
      v16 = a2;
      v17 = *(_DWORD *)(a1 + 40);
      v24 = a2;
      v23 = v17;
      if ( v11 )
      {
        v18 = a5;
        while ( v12 )
        {
          --v11;
          v21 = 2 * (unsigned __int8)*v18;
          --v12;
          v19 = *(_WORD *)(v21 + v23);
          v22 = v19;
          if ( v19 )
          {
            if ( !v12 )
            {
              *(_WORD *)v15 = 0;
              v15 += 2;
              break;
            }
            ++v18;
            --v12;
            v20 = *(unsigned __int16 *)(v23 + 2 * (v19 + (unsigned __int8)*v18));
          }
          else
          {
            v20 = *(unsigned __int16 *)(v21 + *(_DWORD *)(a1 + 28));
          }
          v22 = v20;
          ++v18;
          *(_WORD *)v15 = v20;
          v15 += 2;
          if ( !v11 )
            break;
        }
        v16 = v24;
      }
      if ( a4 )
        *a4 = v15 - v16;
    }
    else
    {
      v13 = a3 >> 1;
      if ( v11 >= a6 )
        v13 = a6;
      if ( a4 )
      {
        *a4 = 2 * v13;
        v6 = a1;
      }
      v14 = *(_DWORD *)(v6 + 28);
      v22 = v14;
      if ( v13 )
      {
        do
        {
          *(_WORD *)&a2[2 * v10] = *(_WORD *)(v14 + 2 * (unsigned __int8)a5[v10]);
          ++v10;
        }
        while ( v10 < v13 );
        v12 = a6;
        v11 = v23;
      }
    }
    return v11 < v12 ? 0x80000005 : 0;
  }
}
