/*
 * XREFs of _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpLfhBucketAddSubsegment@16 @ 0x4B375FDC (_RtlpHpLfhBucketAddSubsegment@16.c)
 *     _RtlpHpLfhOwnerMoveSubsegment@12 @ 0x4B3769A2 (_RtlpHpLfhOwnerMoveSubsegment@12.c)
 *     _RtlpHpLfhSubsegmentDecBlockCounts@20 @ 0x4B3770E8 (_RtlpHpLfhSubsegmentDecBlockCounts@20.c)
 *     _RtlpHpLfhSubsegmentDecommitPages@20 @ 0x4B37719A (_RtlpHpLfhSubsegmentDecommitPages@20.c)
 *     _RtlpHpLfhSubsegmentLockOwner@12 @ 0x4B37790D (_RtlpHpLfhSubsegmentLockOwner@12.c)
 */

int __fastcall RtlpHpLfhSubsegmentFreeBlock(_RTL_SRWLOCK *a1, unsigned int a2, int a3, char a4)
{
  int v5; // esi
  int v6; // eax
  _RTL_SRWLOCK *v7; // edi
  unsigned int Value; // ecx
  unsigned int v9; // edi
  unsigned int v10; // edx
  char v11; // cl
  int v12; // edx
  int v13; // edi
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  unsigned __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  int *v21; // ebx
  unsigned __int16 v23; // [esp+10h] [ebp-18h]
  int v24; // [esp+14h] [ebp-14h]
  int v25; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h]
  unsigned __int16 v28; // [esp+20h] [ebp-8h]
  char v29; // [esp+27h] [ebp-1h] BYREF

  v5 = 0;
  v6 = dword_4B3A4324 ^ *(_DWORD *)(a2 + 24) ^ (a2 >> 12);
  v29 = -1;
  v23 = v6;
  v7 = 0;
  if ( !a3 )
    goto LABEL_14;
  v24 = (unsigned __int16)v6;
  Value = a1[(unsigned __int8)RtlpLfhBucketIndexMap[((unsigned int)(unsigned __int16)v6 + 7) >> 3] + 32].Value;
  v9 = a3 - HIWORD(v6) - a2;
  v10 = *(_DWORD *)(Value + 36);
  v11 = *(_BYTE *)(Value + 40);
  if ( v10 )
  {
    v12 = (v10 * (unsigned __int64)v9) >> v11;
    v13 = v9 - v12 * (unsigned __int16)v6;
  }
  else
  {
    v12 = v9 >> v11;
    v13 = ((1 << v11) - 1) & v9;
  }
  v26 = v12;
  if ( !v13 )
  {
    v14 = *(_WORD *)(a2 + 20);
    if ( v14 >= (unsigned __int16)v12 )
      v14 = v12;
    *(_WORD *)(a2 + 20) = v14;
    v15 = (2 * v12) & 0x1F;
    if ( (((unsigned int)_InterlockedAnd(
                           (volatile signed __int32 *)(a2 + 4 * (((unsigned int)(2 * v12) >> 5) + 8)),
                           ~(3 << v15)) >> v15) & 1) == 0 )
    {
      v5 = 0;
      RtlpLogHeapFailure(17, a1->Value, a3, a2, v26, 0);
      return v5;
    }
    if ( *(_BYTE *)(a2 + 29) > 1u )
    {
      v16 = RtlpHpLfhSubsegmentDecBlockCounts((int)a1, a2, a3 - a2, v24, v15);
      if ( v16 != -1 )
        RtlpHpLfhSubsegmentDecommitPages(a1, a2, v16, 2u, a4);
    }
    v7 = 0;
LABEL_14:
    v17 = *(unsigned __int16 *)(a2 + 18);
    v25 = v17;
    v18 = *(_WORD *)(a2 + 16);
    v28 = v18;
    while ( 1 )
    {
      if ( !v7 )
      {
        if ( !v18 || v18 == v17 - 1 )
        {
          v7 = (_RTL_SRWLOCK *)RtlpHpLfhSubsegmentLockOwner(&v29);
          if ( !v7 )
            return 1;
        }
        v18 = v28;
      }
      v19 = (unsigned __int16)(v18 + 1);
      v18 = _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 16), v18 + 1, v18);
      v28 = v18;
      if ( v19 == v18 + 1 )
        break;
      v17 = v25;
    }
    if ( v18 )
    {
      if ( v18 != v25 - 1 )
      {
LABEL_29:
        v5 = 1;
        if ( v7 )
          RtlReleaseSRWLockExclusive(v7 + 2);
        return v5;
      }
      v20 = 2;
    }
    else
    {
      v20 = 0;
    }
    v21 = RtlpHpLfhOwnerMoveSubsegment(v7, (int *)a2, v20);
    RtlReleaseSRWLockExclusive(v7 + 2);
    v7 = 0;
    if ( v21 )
      RtlpHpLfhBucketAddSubsegment(
        (int)a1,
        (_RTL_SRWLOCK *)a1[(unsigned __int8)RtlpLfhBucketIndexMap[((unsigned int)v23 + 7) >> 3] + 32].Value,
        (int)v21,
        a4);
    goto LABEL_29;
  }
  return v5;
}
