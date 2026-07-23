/*
 * XREFs of MiSimpleAging @ 0x14036C5D8
 * Callers:
 *     MiReduceWs @ 0x14036C53C (MiReduceWs.c)
 * Callees:
 *     MiGenerateRandomPte @ 0x14029EF88 (MiGenerateRandomPte.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiSimpleAging(__int64 a1, char a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  char v9; // r11
  unsigned __int64 RandomPte; // rax
  _QWORD v12[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v14[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v15[68]; // [rsp+290h] [rbp+190h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v14, 0, 0xB8uLL);
  memset(v12, 0, sizeof(v12));
  *(_QWORD *)&v4 = memset(v15, 0, 0x108uLL);
  if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v4 = *(unsigned __int64 *)(a1 + 152) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v5 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v4 = v5 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v7 + v6 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) && v5 - v7 - v6 < 0x400 )
      {
        v8 = v6 >> 5;
        if ( v8 < 8 )
          v8 = 8LL;
        v13[6] = v8;
        LODWORD(v14[0]) = MiTbFlushType(a1);
        WORD2(v14[0]) = 0;
        v13[7] = v14;
        v14[2] = 0LL;
        LODWORD(v14[1]) = 20;
        v14[3] = 0LL;
        if ( (v9 & 7) == 0 && *(_QWORD *)(a1 + 624) )
        {
          v15[1] = 32;
          v13[31] = v15;
        }
        LODWORD(v13[0]) |= 4u;
        v12[21] = v13;
        v12[3] = a1;
        BYTE6(v12[0]) = a2;
        RandomPte = MiGenerateRandomPte((__int64)v12);
        v12[5] = -1LL;
        v12[7] = RandomPte;
        v12[19] = MiSimpleAgePte;
        v12[20] = MiSimpleAgeWorkingSetTail;
        LOWORD(v12[0]) = 6;
        *(_QWORD *)&v4 = MiWalkPageTables((__int64)v12);
      }
    }
  }
  return v4;
}
