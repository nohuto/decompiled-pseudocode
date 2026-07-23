/*
 * XREFs of MiTrimWorkingSet @ 0x14029EC80
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiReduceWs @ 0x14036C53C (MiReduceWs.c)
 *     MiForcedTrim @ 0x14036C6D0 (MiForcedTrim.c)
 * Callees:
 *     MiLogTrimWs @ 0x14029EEA4 (MiLogTrimWs.c)
 *     MiGenerateRandomPte @ 0x14029EF88 (MiGenerateRandomPte.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r11d
  bool v14; // zf
  __int64 *v15; // r10
  __int64 v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // r9
  __int64 RandomPte; // rcx
  __int64 v20; // rax
  _QWORD v22[22]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v23[52]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v24[68]; // [rsp+280h] [rbp+180h] BYREF

  v6 = a4;
  memset(v23, 0, 0x198uLL);
  memset(v22, 0, sizeof(v22));
  memset(v24, 0, 0x108uLL);
  v9 = v6 & 0xF;
  LODWORD(v23[0]) = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x20u;
    LODWORD(v23[0]) = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x40u;
    LODWORD(v23[0]) = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x80u;
    LODWORD(v23[0]) = v9;
  }
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x100u;
    LODWORD(v23[0]) = v9;
  }
  if ( (a5 & 0x40) != 0 )
  {
    v9 |= 0x1000u;
    LODWORD(v23[0]) = v9;
  }
  if ( (a5 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 136);
    v9 |= 0x400u;
    LODWORD(v23[0]) = v9;
    v23[6] = v10;
    if ( a2 > v10 )
      a2 = v10;
    if ( (a5 & 0x20) != 0 )
    {
      v9 |= 0x800u;
      LODWORD(v23[0]) = v9;
    }
  }
  if ( dword_140C4E868 )
    LODWORD(v23[0]) = v9 | 0x10;
  v23[8] = 20LL;
  v11 = MiTbFlushType(a1);
  v14 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  LODWORD(v23[7]) = v11;
  WORD2(v23[7]) = 4;
  v23[9] = 0LL;
  v23[10] = 0LL;
  if ( v14 && *(_QWORD *)(a1 + 624) )
  {
    v24[1] = 32;
    v23[30] = v24;
  }
  v15 = *(__int64 **)(a1 + 16);
  v16 = 0LL;
  if ( (unsigned int)v6 >= 8 )
    return 0LL;
  v17 = (_QWORD *)(a1 + 8 * (v6 + 5));
  v18 = (unsigned int)(8 - v6);
  do
  {
    v16 += *v17++;
    --v18;
  }
  while ( v18 );
  v23[5] = v16;
  if ( !v16 )
    return 0LL;
  v23[1] = a2;
  BYTE4(v22[0]) = v23[0] & 0xF;
  v22[21] = v23;
  LOWORD(v22[0]) = 22;
  v22[19] = MiTrimPte;
  v22[20] = MiTrimWorkingSetTail;
  v22[3] = a1;
  BYTE6(v22[0]) = a3;
  if ( ((unsigned int)v12 & v13) != 0 )
  {
    RandomPte = MiGenerateRandomPte(v22, v12, v17);
    v22[7] = RandomPte;
  }
  else
  {
    RandomPte = *v15;
    v22[7] = *v15;
  }
  v20 = v22[5];
  if ( !RandomPte )
    v20 = -1LL;
  v22[5] = v20;
  MiWalkPageTables(v22);
  MiLogTrimWs(a1, v23[4], v23[2], v6, a5);
  return v23[2];
}
