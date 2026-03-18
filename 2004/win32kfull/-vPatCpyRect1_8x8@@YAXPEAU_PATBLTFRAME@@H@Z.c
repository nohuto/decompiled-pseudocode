/*
 * XREFs of ?vPatCpyRect1_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C6AB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z @ 0x1C02C814C (-vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z.c)
 */

void __fastcall vPatCpyRect1_8x8(struct _PATBLTFRAME *a1, int a2)
{
  struct _PATBLTFRAME *v2; // rdi
  struct _RECTL *v3; // r12
  unsigned int v4; // r11d
  unsigned int v5; // ebp
  unsigned int v6; // r10d
  int v7; // r9d
  unsigned __int64 v8; // rbx
  unsigned int *v9; // r14
  char v10; // si
  unsigned __int64 v11; // r15
  int v12; // r8d
  int v13; // r8d
  int v15; // [rsp+78h] [rbp-70h]
  int v17; // [rsp+88h] [rbp-60h]
  unsigned int *v18; // [rsp+90h] [rbp-58h]
  unsigned int v19[8]; // [rsp+98h] [rbp-50h] BYREF
  unsigned int v20[2]; // [rsp+B8h] [rbp-30h] BYREF

  v2 = a1;
  v3 = (struct _RECTL *)*((_QWORD *)a1 + 3);
  v15 = *((_DWORD *)a1 + 4);
  do
  {
    v4 = 0;
    v5 = aulMsk[v3->left & 0x1F];
    v6 = ~v5;
    if ( aulMsk[v3->right & 0x1F] != -1 )
      v4 = aulMsk[v3->right & 0x1F];
    v18 = (unsigned int *)(*(_QWORD *)v2 + *((_DWORD *)v2 + 4) * v3->top + 4 * ((__int64)v3->left >> 5));
    v17 = (v3->right >> 5) - ((v3->left + 31) >> 5);
    if ( v17 == -1 )
      goto LABEL_16;
    if ( !v17 )
    {
      if ( aulMsk[v3->left & 0x1F] != -1 && v4 )
      {
        v7 = 8;
        goto LABEL_17;
      }
LABEL_16:
      v5 &= ~v4;
      v7 = 9;
      v6 = ~v5;
      goto LABEL_17;
    }
    if ( (unsigned int)(v17 - 1) > 8 )
    {
      if ( aulMsk[v3->left & 0x1F] == -1 )
        v7 = 3 - (v4 != 0);
      else
        v7 = v4 == 0;
    }
    else if ( aulMsk[v3->left & 0x1F] == -1 )
    {
      v7 = 7 - (v4 != 0);
    }
    else
    {
      v7 = 5 - (v4 != 0);
    }
LABEL_17:
    v8 = *((_QWORD *)v2 + 1);
    v9 = v19;
    v10 = *((_BYTE *)v2 + 32);
    v11 = v8 + 32;
    if ( v8 < v8 + 32 )
    {
      do
      {
        v12 = *(unsigned __int8 *)(v8 + 3);
        v8 += 4LL;
        v13 = (((v12 << 8) | v12) << 16) | (v12 << 8) | v12;
        if ( v10 )
          v13 = __ROR4__(v13, v10);
        *v9++ = v13;
      }
      while ( v8 < v11 );
      v2 = a1;
    }
    vPatternCopyLoop(v3++, v18, v2, v7, ~v4, v5, v4, v6, v17, v15, 8 * v15, v19, v20);
    --a2;
  }
  while ( a2 );
}
