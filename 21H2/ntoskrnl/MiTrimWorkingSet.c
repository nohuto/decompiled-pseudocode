/*
 * XREFs of MiTrimWorkingSet @ 0x1403744D8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiForcedTrim @ 0x14037432C (MiForcedTrim.c)
 *     MiReduceWs @ 0x14037443C (MiReduceWs.c)
 * Callees:
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiLogTrimWs @ 0x140374708 (MiLogTrimWs.c)
 *     MiGenerateRandomPte @ 0x1403747E4 (MiGenerateRandomPte.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, unsigned __int64 a2, __int8 a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  int v9; // eax
  int v10; // eax
  int v11; // r11d
  bool v12; // zf
  __int64 *v13; // r10
  __int64 *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 RandomPte; // rcx
  __int64 v19; // rax
  __m128i v21[11]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[52]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v23[68]; // [rsp+280h] [rbp+180h] BYREF

  v6 = a4;
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  memset(v23, 0, 0x108uLL);
  v9 = v6 & 0xF;
  LODWORD(v22[0]) = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x200u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x400u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x800u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x1000u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 0x40) != 0 )
  {
    v9 |= 0x10000u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 0x10) != 0 )
  {
    LODWORD(v22[0]) = v9 | 0x4000;
    v22[7] = *(_QWORD *)(a1 + 144);
    if ( a2 > v22[7] )
      a2 = v22[7];
    v9 = v22[0];
    if ( (a5 & 0x20) != 0 )
    {
      v9 = LODWORD(v22[0]) | 0x8000;
      LODWORD(v22[0]) |= 0x8000u;
    }
  }
  if ( dword_140C52B68 )
    LODWORD(v22[0]) = v9 | 0x100;
  HIDWORD(v22[9]) = 0;
  v10 = MiTbFlushType(a1);
  v22[10] = 0LL;
  v22[11] = 0LL;
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  LODWORD(v22[8]) = v10;
  WORD2(v22[8]) = 4;
  LODWORD(v22[9]) = 20;
  if ( v12 && *(_QWORD *)(a1 + 624) )
  {
    v23[1] = 32;
    v22[31] = v23;
  }
  v22[6] = 0LL;
  v13 = *(__int64 **)(a1 + 16);
  if ( (unsigned int)v6 >= 8 )
    return 0LL;
  v14 = (__int64 *)(a1 + 8 * (v6 + 5));
  v15 = (unsigned int)(8 - v6);
  do
  {
    v16 = *v14++;
    v17 = v22[6] + v16;
    v22[6] = v17;
    --v15;
  }
  while ( v15 );
  if ( !v17 )
    return 0LL;
  v22[1] = a2;
  v21[0].m128i_i8[5] = v22[0] & 0xF;
  v21[10].m128i_i64[1] = (__int64)v22;
  v21[9].m128i_i64[1] = (__int64)MiTrimPte;
  v21[10].m128i_i64[0] = (__int64)MiTrimWorkingSetTail;
  v21[0].m128i_i32[0] = 22;
  v21[1].m128i_i64[1] = a1;
  v21[0].m128i_i8[7] = a3;
  if ( (v11 & v22[0]) != 0 )
  {
    RandomPte = MiGenerateRandomPte(v21);
    v21[3].m128i_i64[1] = RandomPte;
  }
  else
  {
    RandomPte = *v13;
    v21[3].m128i_i64[1] = *v13;
  }
  v19 = v21[2].m128i_i64[1];
  if ( !RandomPte )
    v19 = -1LL;
  v21[2].m128i_i64[1] = v19;
  MiWalkPageTables(v21);
  MiLogTrimWs(a1, v22[5], v22[2], v6, a5);
  return v22[2];
}
