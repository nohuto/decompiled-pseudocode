/*
 * XREFs of _vSrcAlphaCopyS4D32@44 @ 0x1D5534
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall vSrcAlphaCopyS4D32(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v11; // esi
  int v12; // ebx
  _BYTE *v13; // esi
  int v14; // eax
  int *v15; // edi
  _BYTE *v16; // edx
  int *v17; // ecx
  int v18; // esi
  char v19; // bl
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h]
  _BYTE *v23; // [esp+1Ch] [ebp+8h]
  int *v24; // [esp+20h] [ebp+Ch]
  char v25; // [esp+2Fh] [ebp+1Bh]
  int v26; // [esp+30h] [ebp+1Ch]

  v11 = a6 & 0xFFFFFFFE;
  v26 = a6 - (a6 & 0xFFFFFFFE);
  v12 = a8;
  v22 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v21 = (int)(v11 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v13 = (_BYTE *)(a2 / 2 + a1);
  LOBYTE(v14) = a4;
  v15 = (int *)(a4 + 4 * a5);
  while ( 1 )
  {
    v23 = v13;
    if ( !v12 )
      break;
    v16 = v13;
    v17 = v15;
    if ( v22 )
    {
      if ( (*v13 & 0xF) != 0 )
        *v15 = dword_25D200[*v13 & 0xF];
      v16 = v13 + 1;
      v17 = v15 + 1;
    }
    LOBYTE(v14) = v21;
    if ( v21 > 0 )
    {
      v18 = v21;
      do
      {
        LOBYTE(v14) = *v16;
        v24 = v17 + 1;
        v25 = *v16;
        v19 = *v16;
        if ( (*v16 & 0xF0) != 0 )
        {
          *v17 = dword_25D200[(unsigned __int8)v14 >> 4];
          LOBYTE(v14) = v25;
        }
        v17 += 2;
        if ( (v14 & 0xF) != 0 )
        {
          v14 = dword_25D200[v19 & 0xF];
          *v24 = v14;
        }
        ++v16;
        --v18;
      }
      while ( v18 );
      v13 = v23;
      v12 = a8;
    }
    if ( v26 )
    {
      LOBYTE(v14) = *v16;
      if ( (*v16 & 0xF0) != 0 )
      {
        v14 = dword_25D200[(unsigned __int8)v14 >> 4];
        *v17 = v14;
      }
    }
    v13 += a3;
    --v12;
    v15 = (int *)((char *)v15 + a7);
    a8 = v12;
  }
  return v14;
}
