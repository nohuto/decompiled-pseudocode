/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x18010F954
 * Callers:
 *     RtlpHpVsChunkFree @ 0x18010FB1C (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkComputeCost @ 0x1800664B4 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006EA58 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v9; // r12d
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  int v12; // r13d
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-24h]
  unsigned __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, &v14, v16);
  if ( v14 )
  {
    if ( v16[0] )
    {
      v10 = (0x101010101010101LL
           * ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( *(__int16 *)(a2 + 34) >= 0 )
      {
        if ( (*(_BYTE *)&SRWLock[22].0 & 2) != 0 )
          goto LABEL_8;
        v11 = SRWLock[6].Value >> 7;
        if ( v11 <= 8 )
          v11 = 8LL;
        if ( SRWLock[7].Value + (unsigned int)v10 > v11 )
        {
LABEL_8:
          v9 = 1;
          v15 = v15 & 0xFF00FFFF | 0x10000;
          *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v15) ^ BYTE6(RtlpHpHeapGlobals);
          *(_DWORD *)(a3 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
          v12 = a4 & 1;
          if ( !v12 )
          {
            RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
            *(_QWORD *)(a5 + 8) = 0LL;
          }
          RtlpHpVsSubsegmentCommitPages((__int64)SRWLock, (_RTL_SRWLOCK *)a2, v16[0], v10, 0);
          if ( !v12 )
          {
            *(_QWORD *)a5 = 0LL;
            *(_QWORD *)(a5 + 16) = 0LL;
            *(_QWORD *)(a5 + 8) = SRWLock;
            RtlAcquireSRWLockExclusive(SRWLock);
          }
          *(_DWORD *)(a3 + 8) &= ~0x200u;
        }
      }
    }
  }
  return v9;
}
