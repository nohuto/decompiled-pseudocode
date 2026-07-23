/*
 * XREFs of _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F
 * Callers:
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 *     _RtlpHpVsContextGrowInPlace@20 @ 0x4B37F6C2 (_RtlpHpVsContextGrowInPlace@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     _RtlpHpVsChunkFree@20 @ 0x4B37EC44 (_RtlpHpVsChunkFree@20.c)
 *     _RtlpHpVsFreeChunkRemove@12 @ 0x4B37FAC1 (_RtlpHpVsFreeChunkRemove@12.c)
 *     _RtlpHpVsSubsegmentCommitPages@24 @ 0x4B37FC3B (_RtlpHpVsSubsegmentCommitPages@24.c)
 */

int __fastcall RtlpHpVsChunkSplit(int a1, int a2, unsigned int *a3, int a4, char a5, int a6)
{
  _DWORD *v6; // ebx
  int v7; // esi
  int v8; // edi
  int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // eax
  bool v12; // cf
  int v13; // eax
  int v14; // edx
  int v15; // esi
  unsigned int *v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v20; // [esp+Ch] [ebp-1Ch]
  unsigned int v21; // [esp+10h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-Ch]
  unsigned __int64 v25; // [esp+20h] [ebp-8h]
  __int64 v26; // [esp+20h] [ebp-8h]

  v6 = a3;
  v7 = (unsigned int)a3 ^ RtlpHpHeapGlobals ^ *a3;
  RtlpHpVsFreeChunkRemove(a3);
  v8 = a4;
  v9 = ((unsigned __int16)v7 >> 1) - a4;
  if ( v9 && (*(_BYTE *)(a1 + 152) & 1) != 0 )
  {
    v10 = ((((unsigned int)&a3[2 * a4 + 1023] + 3) & 0xFFFFF000) - (unsigned int)&a3[2 * a4]) >> 3;
    v11 = 8 * v10;
    if ( 8 * v10 < 0x10 )
    {
      v8 = v10 + a4;
      v9 -= v10;
LABEL_8:
      a4 = v8;
      goto LABEL_9;
    }
    if ( v11 != 16 && v11 < 0x20 )
    {
      v8 = a4 + 1;
      --v9;
      goto LABEL_8;
    }
  }
LABEL_9:
  v12 = (unsigned int)(8 * v9) < 0x10;
  if ( (unsigned int)(8 * v9) < 0x10 )
  {
    v8 += v9;
    v12 = (unsigned int)(8 * v9) < 0x10;
    a4 = v8;
  }
  v24 = v12 ? 0 : v9;
  *a3 = (unsigned int)a3 ^ ~RtlpHpHeapGlobals ^ ((unsigned int)a3 ^ *a3 ^ ~RtlpHpHeapGlobals) & 0x7FFFFFFF;
  v21 = ((unsigned int)a3 - a2) >> 12;
  v20 = (unsigned __int8)((unsigned __int8)a3 ^ RtlpHpHeapGlobals ^ v21);
  a3[1] = v20;
  v13 = 2 * v8;
  if ( v24 )
    v13 += 4;
  v25 = 0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)(((unsigned int)&a3[v13 - 1] - a2 + 3) >> 12));
  v15 = v12 ? 0 : v9;
  v26 = ((-1LL << v21) & v25 ^ *(_QWORD *)(a2 + 8)) & (-1LL << v21) & v25;
  v14 = v26;
  if ( v26 )
  {
    a3[1] = v20 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 4));
      *(_DWORD *)(a6 + 4) = 0;
      v14 = v26;
    }
    v15 = v24;
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                v26,
                HIDWORD(v26),
                (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~v14 >> 16)]
                                + RtlpBitsClearTotal[(unsigned int)~v14 >> 24]
                                + RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v14 >> 8]
                                + RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v14])
              + (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~HIDWORD(v26) >> 16)]
                                + RtlpBitsClearTotal[(unsigned int)~HIDWORD(v26) >> 24]
                                + RtlpBitsClearTotal[(unsigned __int16)~WORD2(v26) >> 8]
                                + RtlpBitsClearTotal[(unsigned __int8)~BYTE4(v26)]),
                1) < 0 )
    {
      v15 = v8 + v24;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
    {
      *(_DWORD *)a6 = 0;
      *(_DWORD *)(a6 + 4) = 0;
      *(_DWORD *)(a6 + 8) = 0;
      *(_DWORD *)(a6 + 4) = a1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a1);
    }
    v6 = a3;
    v8 = a4;
    a3[1] &= ~0x200u;
  }
  *v6 ^= ((unsigned __int16)v6 ^ (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v6 ^ (2 * v8))) & 0xFFFE;
  if ( v15 )
  {
    v16 = &v6[2 * v8];
    if ( v8 )
      v17 = v8 << 16;
    else
      v17 = ((unsigned int)v16 ^ RtlpHpHeapGlobals ^ *v16) & 0x7FFF0000;
    *v16 = (unsigned int)v16 ^ RtlpHpHeapGlobals ^ (v17 | (2 * (v15 & 0x7FFF | 0xC0000000)));
    v18 = (unsigned int)&v16[2 * v15];
    v16[1] = (unsigned __int8)((unsigned __int8)v16 ^ RtlpHpHeapGlobals ^ (((unsigned int)v16 - a2) >> 12));
    if ( v18 < a2 + 8 * ((unsigned int)*(unsigned __int16 *)(a2 + 20) + 3) )
      *(_DWORD *)v18 ^= (v18 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v18 ^ (v15 << 16)) & 0x7FFF0000;
    RtlpHpVsChunkFree(a1, a2, v16, a5, a6);
  }
  return v8;
}
