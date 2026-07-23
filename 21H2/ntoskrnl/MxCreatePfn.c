/*
 * XREFs of MxCreatePfn @ 0x140A57F34
 * Callers:
 *     MxCreatePfns @ 0x140A57C60 (MxCreatePfns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiSetResidentPageMemberInPfn @ 0x1403F4998 (MiSetResidentPageMemberInPfn.c)
 */

unsigned __int64 __fastcall MxCreatePfn(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r10
  __int64 v7; // rax
  char v8; // dl
  __int64 v9; // rax
  int v10; // edx
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 result; // rax
  __int16 v15; // r9
  __int64 v16; // r10

  v6 = 48 * a1 - 0x58000000000LL;
  if ( a6 == 1 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_OWORD *)(v6 + 32) = 0LL;
  }
  v7 = a4 ^ *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 8) = a2;
  *(_WORD *)(v6 + 32) = 1;
  *(_QWORD *)(v6 + 40) ^= v7 & 0xFFFFFFFFFLL;
  LOBYTE(v7) = *(_BYTE *)(v6 + 34) & 0xFE;
  *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v6 + 34) = v7 | 6;
  if ( (a3 & 0x10) != 0 || (a3 & 8) == 0 )
    v8 = (a3 & 0x10) == 0;
  else
    v8 = 2;
  *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0x3F | (v8 << 6);
  v9 = MiSwizzleInvalidPte(128LL);
  if ( v10 == v11 )
  {
    v9 |= 0x300uLL;
  }
  else if ( !v10 )
  {
    v9 |= 0x100uLL;
  }
  *(_QWORD *)(v12 + 16) = v9;
  *(_BYTE *)(v12 + 34) |= 0x10u;
  result = 0x4000000000000LL;
  *(_QWORD *)(v12 + 40) |= 0x4000000000000uLL;
  if ( a5 == 1 )
  {
    if ( v13 == (v13 & 0xFFFFFFFFFFFFFE00uLL) )
      *(_BYTE *)(v12 + 39) = v11 | *(_BYTE *)(v12 + 39) & 0xFE;
    result = MiSetResidentPageMemberInPfn(v12, 1u);
    *(_WORD *)(v16 + 32) = v15;
  }
  return result;
}
