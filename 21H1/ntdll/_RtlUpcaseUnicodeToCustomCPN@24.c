/*
 * XREFs of _RtlUpcaseUnicodeToCustomCPN@24 @ 0x4B3443C0
 * Callers:
 *     <none>
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

unsigned int __stdcall RtlUpcaseUnicodeToCustomCPN(
        int a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // ecx
  unsigned int i; // esi
  unsigned __int16 v11; // ax
  _BYTE *v12; // edi
  int v13; // ecx
  unsigned __int16 *v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned __int16 v18; // cx
  __int16 v19; // dx
  unsigned int v20; // eax
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+10h] [ebp-Ch]
  int v24; // [esp+14h] [ebp-8h]
  unsigned __int16 *v25; // [esp+18h] [ebp-4h]
  unsigned int v26; // [esp+38h] [ebp+1Ch]

  v6 = a3;
  v7 = a6 >> 1;
  v26 = a6 >> 1;
  if ( *(_WORD *)(a1 + 12) )
  {
    v12 = a2;
    v13 = *(_DWORD *)(a1 + 32);
    v24 = *(_DWORD *)(a1 + 40);
    v23 = v13;
    if ( v7 )
    {
      v14 = a5;
      v25 = a5;
      do
      {
        if ( !v6 )
          break;
        ++v25;
        v15 = *(unsigned __int16 *)(v13 + 2 * *v14);
        v16 = (unsigned __int8)v15;
        v17 = *(unsigned __int16 *)(v24 + 2 * (v15 >> 8));
        if ( (_WORD)v17 )
          v18 = *(_WORD *)(v24 + 2 * (v16 + v17));
        else
          v18 = *(_WORD *)(*(_DWORD *)(a1 + 28) + 2 * v16);
        v19 = *(_WORD *)(v23 + 2 * NLS_UPCASE(v18));
        if ( HIBYTE(v19) )
        {
          v20 = v6--;
          if ( v20 < 2 )
            break;
          *v12++ = HIBYTE(v19);
        }
        v14 = v25;
        v13 = v23;
        *v12++ = v19;
        --v6;
        --v7;
      }
      while ( v7 );
    }
    if ( a4 )
      *a4 = v12 - a2;
  }
  else
  {
    v8 = v7;
    if ( v7 >= a3 )
      v8 = a3;
    if ( a4 )
      *a4 = v8;
    v9 = *(_DWORD *)(a1 + 32);
    v22 = v9;
    if ( v8 )
    {
      for ( i = 0; i < v8; ++i )
      {
        v11 = NLS_UPCASE(*(_WORD *)(*(_DWORD *)(a1 + 28) + 2 * *(unsigned __int8 *)(a5[i] + v9)));
        v9 = v22;
        a2[i] = *(_BYTE *)(v11 + v22);
      }
      v6 = a3;
      v7 = v26;
    }
  }
  return v6 < v7 ? 0x80000005 : 0;
}
