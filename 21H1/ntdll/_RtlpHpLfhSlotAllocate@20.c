/*
 * XREFs of _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9
 * Callers:
 *     _RtlpHpLfhContextAllocate@16 @ 0x4B376407 (_RtlpHpLfhContextAllocate@16.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpLfhBucketAddSubsegment@16 @ 0x4B375FDC (_RtlpHpLfhBucketAddSubsegment@16.c)
 *     _RtlpHpLfhBucketGetSubsegment@8 @ 0x4B3760FA (_RtlpHpLfhBucketGetSubsegment@8.c)
 *     _RtlpHpLfhBucketUpdateAffinityMapping@8 @ 0x4B37622D (_RtlpHpLfhBucketUpdateAffinityMapping@8.c)
 *     _RtlpHpLfhSlotAddSubsegment@8 @ 0x4B376A81 (_RtlpHpLfhSlotAddSubsegment@8.c)
 *     _RtlpHpLfhSlotReserveBlock@16 @ 0x4B376CD6 (_RtlpHpLfhSlotReserveBlock@16.c)
 *     _RtlpHpLfhSubsegmentAllocateBlock@16 @ 0x4B376D27 (_RtlpHpLfhSubsegmentAllocateBlock@16.c)
 *     _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41 (_RtlpHpLfhSubsegmentCreate@12.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 */

unsigned int __fastcall RtlpHpLfhSlotAllocate(unsigned int a1, volatile signed __int32 *a2, int a3, int a4, int a5)
{
  int v5; // esi
  unsigned int v6; // eax
  signed __int32 v7; // ebx
  signed __int32 v8; // eax
  unsigned int v9; // ebx
  int v10; // ebx
  unsigned int Block; // ebx
  unsigned int v12; // esi
  volatile signed __int32 *v13; // edi
  volatile signed __int32 *v15; // [esp-4h] [ebp-30h]
  volatile signed __int32 *v16; // [esp-4h] [ebp-30h]
  int v17; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v18; // [esp+18h] [ebp-14h]
  unsigned int i; // [esp+1Ch] [ebp-10h]
  int *Subsegment; // [esp+20h] [ebp-Ch]
  unsigned int v21; // [esp+24h] [ebp-8h]
  __int16 v22; // [esp+28h] [ebp-4h] BYREF

  v21 = a1;
  v5 = 0;
  v17 = 0;
  Subsegment = 0;
  v6 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v18 = a2;
  for ( i = v6; ; v6 = i )
  {
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(a3 + 28);
        if ( (v7 & 0xFFF) != 0 )
        {
          while ( 1 )
          {
            v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 28), v7 - 1, v7);
            if ( v8 == v7 )
              break;
            v17 = 1;
            v7 = v8;
            if ( (v8 & 0xFFF) == 0 )
              goto LABEL_6;
          }
          v9 = v7 & 0xFFFFF000;
        }
        else
        {
LABEL_6:
          v9 = 0;
        }
        if ( v9 )
          break;
        if ( v5 == 2 )
          goto LABEL_13;
        v5 = 2;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a3 + 8));
      }
      if ( v5 )
        RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a3 + 8));
      i = RtlpHpLfhSubsegmentAllocateBlock(v9, a4);
      if ( !i )
        RtlpHpLfhSubsegmentFreeBlock(0, a5);
      Block = i;
      goto LABEL_38;
    }
    if ( !v5 )
    {
      v5 = 1;
      RtlAcquireSRWLockShared((volatile signed __int32 *)(a3 + 8));
LABEL_13:
      v6 = i;
    }
    if ( *(_DWORD *)(a3 + 4) )
      break;
    v16 = (volatile signed __int32 *)(a3 + 8);
    if ( v5 == 2 )
      RtlReleaseSRWLockExclusive(v16);
    else
      RtlReleaseSRWLockShared(v16);
    Subsegment = (int *)RtlpHpLfhBucketGetSubsegment(v18);
    if ( !Subsegment )
    {
      Subsegment = (int *)RtlpHpLfhSubsegmentCreate(a5);
      if ( !Subsegment )
      {
        Block = 0;
LABEL_38:
        v12 = v21;
        goto LABEL_39;
      }
    }
    v5 = 2;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a3 + 8));
    Subsegment = RtlpHpLfhSlotAddSubsegment((_DWORD *)a3, (int)Subsegment);
LABEL_23:
    ;
  }
  v22 = v6 != 0 ? 4096 : 1;
  v10 = RtlpHpLfhSlotReserveBlock(&v22, &v17);
  if ( v10 && (unsigned __int16)v22 > 1u )
    *(_DWORD *)(a3 + 28) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v22 - 1)) & 0xFFF;
  v15 = (volatile signed __int32 *)(a3 + 8);
  if ( v5 == 2 )
    RtlReleaseSRWLockExclusive(v15);
  else
    RtlReleaseSRWLockShared(v15);
  if ( !v10 )
  {
    v5 = 2;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a3 + 8));
    goto LABEL_23;
  }
  v12 = v21;
  Block = RtlpHpLfhSubsegmentAllocateBlock(v10, a4);
  if ( !Block )
    RtlpHpLfhSubsegmentFreeBlock(0, a5);
LABEL_39:
  v13 = v18;
  if ( v17 )
    RtlpHpLfhBucketUpdateAffinityMapping(v12, (int)v18);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(v12, (int)v13, (int)Subsegment, a5);
  return Block;
}
