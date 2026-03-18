/*
 * XREFs of ?vPatCpyRow4_8x8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22DACA
 * Callers:
 *     ?vBrushPath4_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A4A5 (-vBrushPath4_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vPatternCopyLoopRow@@YGXJPAKPAU_PATBLTFRAME@@HKKKKJPBK@Z @ 0x22EB22 (-vPatternCopyLoopRow@@YGXJPAKPAU_PATBLTFRAME@@HKKKKJPBK@Z.c)
 */

void __userpurge vPatCpyRow4_8x8(int a1@<edx>, int a2@<ecx>, struct _PATBLTFRAME *a3, int a4, int a5)
{
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  char *v7; // ebx
  char v8; // cl
  char *v9; // edi
  int v10; // esi
  char v11; // al
  unsigned int v12; // edx
  int v13; // edi
  unsigned int v14; // ecx
  int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  bool v19; // zf
  int v20; // [esp-4h] [ebp-50h]
  int v21; // [esp+0h] [ebp-4Ch]
  const unsigned int *v22; // [esp+4h] [ebp-48h]
  char *v23; // [esp+Ch] [ebp-40h]
  int v25; // [esp+10h] [ebp-3Ch]
  int v26; // [esp+14h] [ebp-38h]
  _DWORD *v27; // [esp+18h] [ebp-34h]
  char v28; // [esp+1Ch] [ebp-30h]
  unsigned int v29; // [esp+1Ch] [ebp-30h]
  char v30; // [esp+20h] [ebp-2Ch]
  int v31; // [esp+20h] [ebp-2Ch]
  unsigned int v32; // [esp+24h] [ebp-28h]
  int v33; // [esp+24h] [ebp-28h]
  char v34; // [esp+28h] [ebp-24h] BYREF
  char v35; // [esp+2Ah] [ebp-22h] BYREF

  v5 = (_DWORD *)a2;
  v26 = a1;
  v6 = *(_DWORD **)(a2 + 16);
  v27 = v6;
  if ( *(_DWORD *)(a2 + 20) )
  {
    v7 = &v35;
    v23 = &v34;
    v8 = 4 * *(_BYTE *)(a2 + 20);
    v9 = (char *)(v5[1] + 2);
    v28 = 32 - v8;
    v30 = v8;
    v10 = 8;
    do
    {
      HIBYTE(v32) = *(v9 - 2);
      BYTE2(v32) = *(v9 - 1);
      v11 = *v9;
      v9 += 4;
      BYTE1(v32) = v11;
      LOBYTE(v32) = *(v9 - 3);
      v12 = v32 >> v8;
      v8 = v30;
      v33 = (v32 << v28) | v12;
      v7[1] = v33;
      *v7 = BYTE1(v33);
      v7 += 4;
      *(v7 - 5) = BYTE2(v33);
      *(v7 - 6) = HIBYTE(v33);
      --v10;
    }
    while ( v10 );
    v5 = (_DWORD *)a2;
    a1 = v26;
    v6 = v27;
  }
  else
  {
    v23 = *(char **)(a2 + 4);
  }
  v13 = *v5 + a1 * v5[2];
  do
  {
    v25 = *v6;
    v14 = dword_25D620[*v6 & 7];
    v15 = ~v14;
    v16 = dword_25D620[v27[1] & 7];
    v29 = v16;
    if ( !v16 )
    {
      v16 = -1;
      v29 = -1;
    }
    v17 = ~v16;
    v31 = (int)(((int)v27[1] >> 1) - (((v25 + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v31 == -1 )
      goto LABEL_20;
    if ( !v31 )
    {
      if ( v14 )
      {
        v20 = 8;
      }
      else
      {
LABEL_20:
        v15 &= v29;
        v20 = 9;
        v14 = ~v15;
      }
      v18 = v20;
      goto LABEL_22;
    }
    if ( (unsigned int)(v31 - 1) > 8 )
    {
      if ( v14 )
        v18 = v16 == -1;
      else
        v18 = 3 - (v16 != -1);
    }
    else if ( v14 )
    {
      v18 = 5 - (v16 != -1);
    }
    else
    {
      v18 = 7 - (v16 != -1);
    }
LABEL_22:
    vPatternCopyLoopRow(
      (int)v5,
      (unsigned int *)v18,
      (struct _PATBLTFRAME *)v29,
      v15,
      v17,
      v14,
      v31,
      (unsigned int)v23,
      v21,
      v22);
    v13 += v5[2];
    v6 = v27 + 2;
    ++v26;
    v19 = a3 == (struct _PATBLTFRAME *)1;
    a3 = (struct _PATBLTFRAME *)((char *)a3 - 1);
    v27 += 2;
  }
  while ( !v19 );
}
