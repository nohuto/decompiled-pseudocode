/*
 * XREFs of ?vPatCpyRow4_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C5E9C
 * Callers:
 *     ?vBrushPath4_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02CEE60 (-vBrushPath4_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?vPatternCopyLoopRow@@YAXJPEAKPEAU_PATBLTFRAME@@HKKKKJPEBK@Z @ 0x1C02C7294 (-vPatternCopyLoopRow@@YAXJPEAKPEAU_PATBLTFRAME@@HKKKKJPEBK@Z.c)
 */

void __fastcall vPatCpyRow4_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v4; // r14
  const unsigned int *v7; // rbp
  char *v8; // r9
  char v9; // r11
  char *v10; // r8
  char v11; // al
  int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // edx
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  int v17; // r15d
  int v18; // r9d
  int v19; // [rsp+50h] [rbp-68h]
  char v20; // [rsp+58h] [rbp-60h] BYREF
  char v21; // [rsp+5Ah] [rbp-5Eh] BYREF
  __int64 v22; // [rsp+78h] [rbp-40h] BYREF

  v4 = (int *)*((_QWORD *)a1 + 3);
  if ( *((_DWORD *)a1 + 8) )
  {
    v7 = (const unsigned int *)&v20;
    v8 = &v21;
    v9 = 4 * *((_BYTE *)a1 + 32);
    v10 = (char *)(*((_QWORD *)a1 + 1) + 2LL);
    do
    {
      HIBYTE(v19) = *(v10 - 2);
      BYTE2(v19) = *(v10 - 1);
      v11 = *v10;
      v10 += 4;
      BYTE1(v19) = v11;
      LOBYTE(v19) = *(v10 - 3);
      v12 = __ROR4__(v19, v9);
      v8[1] = v12;
      *v8 = BYTE1(v12);
      *(v8 - 1) = BYTE2(v12);
      *(v8 - 2) = HIBYTE(v12);
      v8 += 4;
    }
    while ( v8 - 2 < (char *)&v22 );
  }
  else
  {
    v7 = (const unsigned int *)*((_QWORD *)a1 + 1);
  }
  v13 = *(_QWORD *)a1 + a2 * *((_DWORD *)a1 + 4);
  do
  {
    v14 = dword_1C02F9FB0[*v4 & 7];
    v15 = ~v14;
    v16 = dword_1C02F9FB0[v4[1] & 7];
    if ( !v16 )
      v16 = -1;
    v17 = (int)((v4[1] >> 1) - (((*v4 + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v17 == -1 )
      goto LABEL_20;
    if ( !v17 )
    {
      if ( v14 && v16 != -1 )
      {
        v18 = 8;
        goto LABEL_21;
      }
LABEL_20:
      v15 &= v16;
      v18 = 9;
      v14 = ~v15;
      goto LABEL_21;
    }
    if ( (unsigned int)(v17 - 1) > 8 )
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
LABEL_21:
    vPatternCopyLoopRow(
      a2,
      (unsigned int *)(v13 + (((__int64)*v4 >> 1) & 0xFFFFFFFFFFFFFFFCuLL)),
      a1,
      v18,
      v16,
      v15,
      ~v16,
      v14,
      v17,
      v7);
    v13 += *((int *)a1 + 4);
    v4 += 2;
    ++a2;
    --a3;
  }
  while ( a3 );
}
