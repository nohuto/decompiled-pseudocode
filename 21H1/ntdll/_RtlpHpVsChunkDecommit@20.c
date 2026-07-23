/*
 * XREFs of _RtlpHpVsChunkDecommit@20 @ 0x4B37EAB0
 * Callers:
 *     _RtlpHpVsChunkFree@20 @ 0x4B37EC44 (_RtlpHpVsChunkFree@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpVsChunkComputeCost@16 @ 0x4B37E9EC (_RtlpHpVsChunkComputeCost@16.c)
 *     _RtlpHpVsSubsegmentCommitPages@24 @ 0x4B37FC3B (_RtlpHpVsSubsegmentCommitPages@24.c)
 */

int __fastcall RtlpHpVsChunkDecommit(_RTL_SRWLOCK *a1, int a2, int a3, char a4, int a5)
{
  int v5; // edi
  char v6; // dh
  _RTL_SRWLOCK *v7; // ebx
  unsigned int v8; // ecx
  bool v9; // zf
  int v12; // [esp+10h] [ebp-10h] BYREF
  PRTL_SRWLOCK SRWLock; // [esp+14h] [ebp-Ch]
  __int64 v14; // [esp+18h] [ebp-8h] BYREF
  int v15; // [esp+2Ch] [ebp+Ch]

  SRWLock = a1;
  v5 = 0;
  RtlpHpVsChunkComputeCost((_WORD *)a3, a2, (unsigned int *)&v12, (int *)&v14);
  if ( v12 )
  {
    if ( v14 )
    {
      v6 = RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v14];
      v12 = (unsigned int)~(_DWORD)v14 >> 16;
      v12 = (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v14 >> 8]
                            + v6
                            + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~(_DWORD)v14 >> 16)]
                            + RtlpBitsClearTotal[(unsigned int)~(_DWORD)v14 >> 24])
          + (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~WORD2(v14) >> 8]
                            + RtlpBitsClearTotal[(unsigned __int8)~BYTE4(v14)]
                            + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~HIDWORD(v14) >> 16)]
                            + RtlpBitsClearTotal[(unsigned int)~HIDWORD(v14) >> 24]);
      if ( *(__int16 *)(a2 + 22) >= 0 )
      {
        v7 = SRWLock;
        if ( (*(_BYTE *)&SRWLock[38].0 & 2) != 0 )
          goto LABEL_8;
        v8 = SRWLock[6].Value >> 7;
        if ( v8 <= 8 )
          v8 = 8;
        if ( v12 + SRWLock[7].Value > v8 )
        {
LABEL_8:
          *(_DWORD *)a3 = a3 ^ ~RtlpHpHeapGlobals ^ (a3 ^ *(_DWORD *)a3 ^ ~RtlpHpHeapGlobals) & 0x7FFFFFFF;
          v9 = (a4 & 1) == 0;
          v15 = a4 & 1;
          *(_DWORD *)(a3 + 4) = (unsigned __int8)(a3 ^ RtlpHpHeapGlobals ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
          if ( v9 )
          {
            RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 4));
            *(_DWORD *)(a5 + 4) = 0;
          }
          RtlpHpVsSubsegmentCommitPages(v14, HIDWORD(v14), v12, 0);
          v5 = 1;
          SRWLock = (PRTL_SRWLOCK)1;
          if ( !v15 )
          {
            *(_DWORD *)a5 = 0;
            *(_DWORD *)(a5 + 4) = 0;
            *(_DWORD *)(a5 + 8) = 0;
            *(_DWORD *)(a5 + 4) = v7;
            RtlAcquireSRWLockExclusive(v7);
            v5 = (int)SRWLock;
          }
          *(_DWORD *)(a3 + 4) &= ~0x200u;
        }
      }
    }
  }
  return v5;
}
