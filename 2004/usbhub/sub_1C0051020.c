/*
 * XREFs of sub_1C0051020 @ 0x1C0051020
 * Callers:
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C004EA58 @ 0x1C004EA58 (sub_1C004EA58.c)
 */

__int64 __fastcall sub_1C0051020(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // si
  _OWORD *PoolWithTag; // rax
  unsigned int v11; // ebx
  _DWORD *v12; // rdi
  _WORD *v13; // rcx
  int v14; // r15d
  char *v15; // rax
  char *v16; // rsi
  _WORD *v17; // rcx

  v6 = sub_1C0011220(a2);
  v7 = sub_1C000F050(a1);
  v8 = sub_1C004EA58(*((_WORD *)v7 + 688));
  v9 = sub_1C004EA58(*((_WORD *)v6 + 714));
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x14uLL, 0x42554855u);
  v11 = 0;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  v13 = PoolWithTag;
  *PoolWithTag = xmmword_1C0064D80;
  for ( *((_DWORD *)PoolWithTag + 4) = 7209070; *v13 != 110; ++v13 )
    ;
  v14 = 42;
  *v13 = (v9 >> 12) + 48;
  v13[1] = (HIBYTE(v9) & 0xF) + 48;
  v13[3] = (v9 & 0xF) + 48;
  v13[2] = ((unsigned __int8)v9 >> 4) + 48;
  v15 = (char *)ExAllocatePoolWithTag(PoolType, 0x2AuLL, 0x42554855u);
  v16 = v15;
  if ( v15 )
  {
    v17 = v15 + 20;
    *(_OWORD *)v15 = 0LL;
    *((_OWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 4) = 0LL;
    *((_WORD *)v15 + 20) = 0;
    *(_OWORD *)v15 = *(_OWORD *)v12;
    *((_DWORD *)v15 + 4) = v12[4];
    *(_OWORD *)(v15 + 20) = xmmword_1C0064D98;
    *((_DWORD *)v15 + 9) = 7209070;
    while ( *v17 != 110 )
      ++v17;
    *v17 = (v8 >> 12) + 48;
    v17[1] = (HIBYTE(v8) & 0xF) + 48;
    v17[2] = ((unsigned __int8)v8 >> 4) + 48;
    v17[3] = (v8 & 0xF) + 48;
  }
  else
  {
    v14 = 0;
  }
  ExFreePoolWithTag(v12, 0);
  if ( v16 )
  {
    *(_DWORD *)(a4 + 4) = v14;
    *(_WORD *)a4 = 1033;
    *(_QWORD *)(a4 + 8) = v16;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
