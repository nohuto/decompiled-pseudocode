/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x18010F994
 * Callers:
 *     RtlpHpVsChunkFree @ 0x18010FB5C (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkComputeCost @ 0x1800664B4 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006EA58 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v9; // r12d
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  int v12; // r13d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-24h]
  unsigned __int64 v19[4]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, &v17, v19);
  if ( v17 )
  {
    if ( v19[0] )
    {
      v10 = (0x101010101010101LL
           * ((((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( *(__int16 *)(a2 + 34) >= 0 )
      {
        if ( (*(_BYTE *)(a1 + 176) & 2) != 0 )
          goto LABEL_8;
        v11 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v11 <= 8 )
          v11 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v10 > v11 )
        {
LABEL_8:
          v9 = 1;
          v18 = v18 & 0xFF00FFFF | 0x10000;
          *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v18) ^ BYTE6(RtlpHpHeapGlobals);
          *(_DWORD *)(a3 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
          v12 = a4 & 1;
          if ( !v12 )
          {
            RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(a5 + 8));
            *(_QWORD *)(a5 + 8) = 0LL;
          }
          RtlpHpVsSubsegmentCommitPages(a1, a2, v19[0], (unsigned int)v10, 0);
          if ( !v12 )
          {
            *(_QWORD *)a5 = 0LL;
            *(_QWORD *)(a5 + 16) = 0LL;
            *(_QWORD *)(a5 + 8) = a1;
            RtlAcquireSRWLockExclusive(a1, v13, v14, v15);
          }
          *(_DWORD *)(a3 + 8) &= ~0x200u;
        }
      }
    }
  }
  return v9;
}
