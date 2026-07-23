/*
 * XREFs of _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpHpLfhBucketComputeNewSubsegmentBlockCount@8 @ 0x4B3760A1 (_RtlpHpLfhBucketComputeNewSubsegmentBlockCount@8.c)
 *     _RtlpHpLfhBucketSubsegmentStatsUpdate@8 @ 0x4B3761A2 (_RtlpHpLfhBucketSubsegmentStatsUpdate@8.c)
 *     _RtlpHpLfhSubsegmentComputeCommitUnit@8 @ 0x4B376ED2 (_RtlpHpLfhSubsegmentComputeCommitUnit@8.c)
 *     _RtlpHpLfhSubsegmentInitialize@20 @ 0x4B377743 (_RtlpHpLfhSubsegmentInitialize@20.c)
 *     _RtlpCalculateSubsegmentSizeIndex@8 @ 0x4B379AE0 (_RtlpCalculateSubsegmentSizeIndex@8.c)
 */

int __fastcall RtlpHpLfhSubsegmentCreate(_RTL_SRWLOCK *a1, int a2, int a3)
{
  int v5; // edx
  int v6; // esi
  BOOL v7; // eax
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  char v16; // cl
  int v17; // eax
  int v18; // esi
  unsigned int v19; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // eax
  unsigned int Value; // [esp-Ch] [ebp-38h]
  char v25[4]; // [esp+10h] [ebp-1Ch] BYREF
  int v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  char v28[4]; // [esp+1Ch] [ebp-10h] BYREF
  int v29; // [esp+20h] [ebp-Ch]
  unsigned int v30; // [esp+24h] [ebp-8h]
  int v31; // [esp+28h] [ebp-4h]

  v27 = a2;
  v5 = *(unsigned __int8 *)(a2 + 1);
  v6 = (unsigned __int16)RtlpBucketBlockSizes[v5];
  v29 = v6;
  v7 = (RtlpHpLfhPerfFlags & 1) != 0 && RtlpHpLfhBucketSubsegmentStatsUpdate((volatile signed __int32 *)&a1[16], v5);
  v30 = v7;
  v8 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2);
  v9 = v6 * v8;
  v10 = (4 * ((unsigned int)(2 * v8 + 31) >> 5) + 39) & 0xFFFFFFF8;
  v11 = v10 + 2 * ((v6 * v8 + v10 + 4095) >> 12);
  v12 = RtlpCalculateSubsegmentSizeIndex(v11 + v9);
  if ( v12 <= 0xC )
    LOBYTE(v12) = 12;
  v14 = 1 << v12;
  if ( (RtlpHpLfhPerfFlags & 8) != 0 && v11 <= v13 >> 6 )
  {
    v15 = RtlpCalculateSubsegmentSizeIndex(v13);
    v16 = v15;
    if ( v15 <= 0xC )
      v16 = 12;
    if ( v14 > 1 << v16 )
      v14 = 1 << v16;
  }
  v26 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 17);
  v17 = ((int (__thiscall *)(unsigned int, unsigned int, unsigned int, int, char *, char *))((unsigned int)a1 ^ RtlpHpHeapGlobals ^ a1[1].Value))(
          (unsigned int)a1 ^ RtlpHpHeapGlobals ^ a1[1].Value,
          a1->Value,
          v14,
          a3,
          v28,
          v25);
  v31 = v17;
  if ( v17 )
  {
    if ( v30 && (RtlpHpLfhPerfFlags & 2) != 0 || (v28[0] & 1) != 0 )
    {
      v19 = v14;
    }
    else
    {
      v19 = RtlpHpLfhSubsegmentComputeCommitUnit(v14, v29);
      v17 = v31;
    }
    v20 = RtlpHpHeapGlobals ^ a1[3].Value;
    Value = a1->Value;
    v30 = v19;
    if ( ((int (__thiscall *)(unsigned int, unsigned int, int, unsigned int))((unsigned int)a1 ^ v20))(
           (unsigned int)a1 ^ v20,
           Value,
           v17,
           v19) >= 0 )
    {
      v18 = v31;
      RtlpHpLfhSubsegmentInitialize(v30, v29, a1);
      v22 = v27;
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 32));
      _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 28), *(unsigned __int16 *)(v18 + 18));
      v21 = 0;
    }
    else
    {
      v21 = v31;
      v18 = 0;
    }
    v29 = v18;
    if ( v21 )
    {
      ((void (__thiscall *)(unsigned int, unsigned int, int, unsigned int, int))((unsigned int)a1 ^ RtlpHpHeapGlobals ^ a1[2].Value))(
        (unsigned int)a1 ^ RtlpHpHeapGlobals ^ a1[2].Value,
        a1->Value,
        v21,
        v14,
        a3);
      v18 = v29;
    }
  }
  else
  {
    v18 = 0;
  }
  if ( !v26 )
    RtlReleaseSRWLockShared(a1 + 17);
  return v18;
}
