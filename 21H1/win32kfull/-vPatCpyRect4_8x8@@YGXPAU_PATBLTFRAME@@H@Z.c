/*
 * XREFs of ?vPatCpyRect4_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D5D4
 * Callers:
 *     ?vBrushPath4_8x8Enum@@YGXPAU_RECTL@@KPAX@Z @ 0x23A487 (-vBrushPath4_8x8Enum@@YGXPAU_RECTL@@KPAX@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vPatternCopyLoop@@YGXPAU_RECTL@@PAKPAU_PATBLTFRAME@@HKKKKJJJPBK3@Z @ 0x22E796 (-vPatternCopyLoop@@YGXPAU_RECTL@@PAKPAU_PATBLTFRAME@@HKKKKJJJPBK3@Z.c)
 */

void __stdcall vPatCpyRect4_8x8(struct _RECTL *a1, int a2)
{
  struct _RECTL *v2; // esi
  _DWORD *left; // ebx
  char *v4; // ebx
  char v5; // cl
  char *v6; // edi
  int v7; // esi
  char v8; // al
  unsigned int v9; // edx
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ebx
  int v17; // eax
  bool v18; // zf
  int v19; // [esp-4h] [ebp-58h]
  const unsigned int *v20; // [esp+0h] [ebp-54h]
  const unsigned int *v21; // [esp+4h] [ebp-50h]
  unsigned int right; // [esp+Ch] [ebp-48h]
  char *top; // [esp+18h] [ebp-3Ch]
  int *v24; // [esp+1Ch] [ebp-38h]
  char v25; // [esp+20h] [ebp-34h]
  int v26; // [esp+20h] [ebp-34h]
  _DWORD *v27; // [esp+24h] [ebp-30h]
  char v28; // [esp+28h] [ebp-2Ch]
  unsigned int v29; // [esp+28h] [ebp-2Ch]
  unsigned int v30; // [esp+2Ch] [ebp-28h]
  int v31; // [esp+2Ch] [ebp-28h]
  char v32; // [esp+30h] [ebp-24h] BYREF
  char v33; // [esp+32h] [ebp-22h] BYREF
  int v34; // [esp+50h] [ebp-4h] BYREF

  v2 = a1;
  left = (_DWORD *)a1[1].left;
  right = a1->right;
  v27 = left;
  if ( a1[1].top )
  {
    v4 = &v33;
    top = &v32;
    v24 = &v34;
    v5 = 4 * LOBYTE(a1[1].top);
    v6 = (char *)(a1->top + 2);
    v25 = 32 - v5;
    v28 = v5;
    v7 = 8;
    do
    {
      HIBYTE(v30) = *(v6 - 2);
      BYTE2(v30) = *(v6 - 1);
      v8 = *v6;
      v6 += 4;
      BYTE1(v30) = v8;
      LOBYTE(v30) = *(v6 - 3);
      v9 = v30 >> v5;
      v5 = v28;
      v31 = (v30 << v25) | v9;
      v4[1] = v31;
      *v4 = BYTE1(v31);
      v4 += 4;
      *(v4 - 5) = BYTE2(v31);
      *(v4 - 6) = HIBYTE(v31);
      --v7;
    }
    while ( v7 );
    v2 = a1;
    left = v27;
  }
  else
  {
    top = (char *)a1->top;
    v24 = (int *)(top + 32);
  }
  do
  {
    v10 = *left;
    v11 = left[2];
    v26 = v10;
    v12 = dword_25D620[v10 & 7];
    v13 = ~v12;
    v14 = dword_25D620[v11 & 7];
    v29 = v14;
    if ( !v14 )
    {
      v14 = -1;
      v29 = -1;
    }
    v15 = ~v14;
    v16 = (int)((v11 >> 1) - (((v26 + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v16 == -1 )
      goto LABEL_19;
    if ( !v16 )
    {
      if ( v12 )
      {
        v19 = 8;
      }
      else
      {
LABEL_19:
        v13 &= v29;
        v19 = 9;
        v12 = ~v13;
      }
      v17 = v19;
      goto LABEL_21;
    }
    if ( v16 - 1 > 8 )
    {
      if ( v12 )
        v17 = v14 == -1;
      else
        v17 = 3 - (v14 != -1);
    }
    else if ( v12 )
    {
      v17 = 5 - (v14 != -1);
    }
    else
    {
      v17 = 7 - (v14 != -1);
    }
LABEL_21:
    vPatternCopyLoop(
      v2,
      (unsigned int *)v17,
      (struct _PATBLTFRAME *)v29,
      v13,
      v15,
      v12,
      v16,
      right,
      8 * right,
      (int)top,
      (int)v24,
      v20,
      v21);
    left = v27 + 4;
    v18 = a2-- == 1;
    v27 += 4;
  }
  while ( !v18 );
}
