/*
 * XREFs of _RtlUnicodeToCustomCPN@24 @ 0x4B3442B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 */

unsigned int __stdcall RtlUnicodeToCustomCPN(
        int a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // eax
  int v7; // esi
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // edx
  int v13; // eax
  _BYTE *v14; // edx
  _BYTE *v15; // ebx
  unsigned int v16; // eax
  unsigned int *v17; // esi
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // [esp+4h] [ebp-Ch] BYREF
  unsigned int v23; // [esp+8h] [ebp-8h]
  _BYTE *v24; // [esp+Ch] [ebp-4h]

  if ( *(_WORD *)a1 == 0xFDE9 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = &v22;
    v7 = 0;
    if ( a6 )
    {
      if ( RtlUnicodeToUTF8N(a2, a3, v6, a5, a6) == -1073741789 )
        return -2147483643;
    }
    else
    {
      *v6 = 0;
    }
    return v7;
  }
  else
  {
    v9 = a3;
    v10 = 0;
    v11 = a6 >> 1;
    v23 = a6 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v14 = a2;
      v15 = a2;
      v16 = *(_DWORD *)(a1 + 32);
      v24 = a2;
      v23 = v16;
      if ( v11 )
      {
        v17 = a5;
        do
        {
          if ( !v9 )
            break;
          v18 = *(unsigned __int16 *)v17;
          v17 = (unsigned int *)((char *)v17 + 2);
          v19 = *(unsigned __int16 *)(v23 + 2 * v18);
          v22 = v19;
          v20 = v19 >> 8;
          if ( BYTE1(v19) )
          {
            v21 = v9--;
            if ( v21 < 2 )
              break;
            LOBYTE(v19) = v22;
            *v14++ = v20;
          }
          *v14++ = v19;
          --v9;
          --v11;
        }
        while ( v11 );
        v15 = v24;
      }
      if ( a4 )
        *a4 = v14 - v15;
    }
    else
    {
      v12 = a6 >> 1;
      if ( v11 >= a3 )
        v12 = a3;
      if ( a4 )
        *a4 = v12;
      v13 = *(_DWORD *)(a1 + 32);
      if ( v12 )
      {
        do
        {
          a2[v10] = *(_BYTE *)(*((unsigned __int16 *)a5 + v10) + v13);
          ++v10;
        }
        while ( v10 < v12 );
        v9 = a3;
        v11 = v23;
      }
    }
    return v9 < v11 ? 0x80000005 : 0;
  }
}
