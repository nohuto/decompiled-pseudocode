/*
 * XREFs of ?vPatCpyRect1_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D41E
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vPatternCopyLoop@@YGXPAU_RECTL@@PAKPAU_PATBLTFRAME@@HKKKKJJJPBK3@Z @ 0x22E796 (-vPatternCopyLoop@@YGXPAU_RECTL@@PAKPAU_PATBLTFRAME@@HKKKKJJJPBK3@Z.c)
 */

void __stdcall vPatCpyRect1_8x8(struct _RECTL *a1, int a2)
{
  struct _RECTL *v2; // edi
  _DWORD *left; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // edx
  unsigned int top; // ecx
  char v9; // ah
  int *v10; // esi
  int v11; // edi
  int v12; // edi
  bool v13; // zf
  int v14; // [esp-4h] [ebp-74h]
  const unsigned int *v15; // [esp+0h] [ebp-70h]
  const unsigned int *v16; // [esp+4h] [ebp-6Ch]
  unsigned int right; // [esp+10h] [ebp-60h]
  unsigned int v18; // [esp+24h] [ebp-4Ch]
  int v19; // [esp+28h] [ebp-48h]
  unsigned int v20; // [esp+2Ch] [ebp-44h]
  unsigned int v21; // [esp+30h] [ebp-40h]
  _DWORD *v22; // [esp+38h] [ebp-38h]
  int v23; // [esp+3Ch] [ebp-34h]
  unsigned int v24; // [esp+40h] [ebp-30h]
  int v25[8]; // [esp+4Ch] [ebp-24h] BYREF
  int v26; // [esp+6Ch] [ebp-4h] BYREF

  v2 = a1;
  left = (_DWORD *)a1[1].left;
  right = a1->right;
  v22 = left;
  do
  {
    v23 = (int)(&aulMsk)[*left & 0x1F];
    v4 = ~v23;
    v19 = ~v23;
    v5 = (unsigned int *)((char *)(&aulMsk)[left[2] & 0x1F] + 1) != 0 ? (unsigned int)(&aulMsk)[left[2] & 0x1F] : 0;
    v20 = v5;
    v18 = ~v5;
    v6 = ((int)left[2] >> 5) - ((*left + 31) >> 5);
    v24 = v6;
    if ( v6 == -1 )
      goto LABEL_14;
    if ( !v6 )
    {
      if ( v23 == -1 || !v5 )
      {
LABEL_14:
        v23 &= v18;
        v4 = ~v23;
        v14 = 9;
        v19 = ~v23;
      }
      else
      {
        v14 = 8;
      }
      v7 = v14;
      goto LABEL_16;
    }
    if ( (unsigned int)(v6 - 1) > 8 )
    {
      if ( v23 == -1 )
        v7 = 3 - (v5 != 0);
      else
        v7 = v5 == 0;
    }
    else if ( v23 == -1 )
    {
      v7 = 7 - (v5 != 0);
    }
    else
    {
      v7 = 5 - (v5 != 0);
    }
LABEL_16:
    top = v2->top;
    v9 = v2[1].top;
    v21 = top + 32;
    if ( top < top + 32 )
    {
      v10 = v25;
      do
      {
        v11 = *(unsigned __int8 *)(top + 3);
        top += 4;
        v12 = (((v11 << 8) | v11) << 16) | (v11 << 8) | v11;
        if ( v9 )
          v12 = __ROR4__(v12, v9);
        *v10++ = v12;
      }
      while ( top < v21 );
      v5 = v20;
      v4 = v19;
      v2 = a1;
    }
    vPatternCopyLoop(
      v2,
      (unsigned int *)v7,
      (struct _PATBLTFRAME *)v18,
      v23,
      v5,
      v4,
      v24,
      right,
      8 * right,
      (int)v25,
      (int)&v26,
      v15,
      v16);
    left = v22 + 4;
    v13 = a2-- == 1;
    v22 += 4;
  }
  while ( !v13 );
}
