/*
 * XREFs of CcExtendVacbArray @ 0x140212CB4
 * Callers:
 *     CcSetFileSizesEx @ 0x1402D2970 (CcSetFileSizesEx.c)
 * Callees:
 *     CcFreeUnusedVacbLevels @ 0x140213140 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x14021319C (CcAllocateVacbLevel.c)
 *     CcAllocateVacbLevels @ 0x140213284 (CcAllocateVacbLevels.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     VacbLevelReference @ 0x1403004AC (VacbLevelReference.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14031BA74 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14031BAF4 (CcAcquireBcbLockAndVacbLock.c)
 *     CcCalculateVacbLevelLockCount @ 0x14037D370 (CcCalculateVacbLevelLockCount.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r15d
  __int64 v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // r13d
  char *PoolWithTag; // r12
  char *v12; // r14
  __int64 v14; // rax
  char *v15; // rdx
  char *v16; // r8
  __int64 v17; // r9
  char **v18; // rcx
  char **v19; // r8
  char *j; // rcx
  char *v21; // r9
  unsigned int v22; // esi
  int v23; // ecx
  unsigned int v24; // ebp
  char **i; // rcx
  char *v26; // r8
  KIRQL v27; // al
  _QWORD *v28; // r14
  __int64 v29; // r8
  _QWORD *v30; // rax
  _QWORD *VacbLevel; // rax
  _DWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD v34[3]; // [rsp+20h] [rbp-48h] BYREF
  int v35; // [rsp+38h] [rbp-30h]
  int v36; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v37; // [rsp+78h] [rbp+10h]

  v2 = 0;
  v36 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v34[2] = 0LL;
  v35 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v34[1] = v34;
  v34[0] = v34;
  if ( a2 <= v5 )
    goto LABEL_30;
  if ( v5 >= 0x2000000 )
    goto LABEL_29;
  v5 = a2;
  if ( a2 >= 0x2000000 )
    v5 = 0x2000000LL;
  v6 = -1;
  if ( HIDWORD(v5) )
  {
    v7 = -1;
  }
  else if ( (unsigned int)v5 <= 0x100000 )
  {
    v7 = 32;
  }
  else
  {
    v7 = 8 * ((unsigned int)v5 >> 18);
  }
  v37 = v7;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v8 = *(_DWORD *)(a1 + 32);
    if ( v8 > 0x100000 )
      v6 = 8 * (v8 >> 18);
    else
      v6 = 32;
  }
  if ( v7 <= v6 )
  {
LABEL_28:
    *(_QWORD *)(a1 + 32) = v5;
LABEL_29:
    if ( a2 <= v5 )
    {
LABEL_30:
      CcFreeUnusedVacbLevels(v34);
      return 0LL;
    }
    v22 = 1;
    v23 = 25;
    if ( v5 > 0x2000000 )
    {
      do
      {
        v23 += 7;
        ++v22;
      }
      while ( *(_QWORD *)(a1 + 32) > 1LL << v23 );
    }
    v24 = v22;
    if ( !((a2 - 1) >> v23) )
      goto LABEL_48;
    do
    {
      v23 += 7;
      ++v24;
    }
    while ( (a2 - 1) >> v23 );
    if ( v24 <= v22 )
    {
LABEL_48:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_30;
    }
    v27 = KeAcquireQueuedSpinLock(4uLL);
    if ( v24 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v24 + 1;
    KeReleaseQueuedSpinLock(4uLL, v27);
    if ( (unsigned __int8)CcAllocateVacbLevels(v24 - v22, 0LL, v34) )
    {
      CcAcquireBcbLockAndVacbLock(v2, a1);
      if ( v22 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD *)(a1 + 88));
      v28 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, v28, v22 - 1) )
      {
        do
        {
          ++v22;
          VacbLevel = (_QWORD *)CcAllocateVacbLevel(v34, 0LL);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v32 = (_DWORD *)VacbLevelReference(a1, VacbLevel, v22);
          ++*v32;
          *(_QWORD *)(a1 + 88) = v33;
        }
        while ( v22 < v24 );
      }
      else if ( v22 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel(v34, 0LL);
        v29 = v28[128];
        v30 = (_QWORD *)v28[255];
        *(_QWORD *)(v29 + 8) = v30;
        *v30 = v29;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v28);
      }
      *(_QWORD *)(a1 + 32) = a2;
      CcReleaseBcbLockAndVacbLock(v2, a1);
      goto LABEL_48;
    }
    return 3221225626LL;
  }
  if ( v2 )
    v7 += (v7 + 15) & 0xFFFFFFF0;
  v9 = v7 + 8;
  if ( a2 < 0x2000000 )
    v9 = v7;
  v10 = v9;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x70566343u);
  if ( PoolWithTag )
  {
    CcAcquireBcbLockAndVacbLock(v2, a1);
    v12 = *(char **)(a1 + 88);
    if ( v12 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v6);
    else
      v6 = 0;
    memset(&PoolWithTag[v6], 0, v37 - v6);
    if ( a2 >= 0x2000000 )
      *(_QWORD *)&PoolWithTag[v10 - 8] = 0LL;
    if ( v2 )
    {
      v14 = 0LL;
      v15 = &PoolWithTag[v37];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v12 )
      {
        v16 = &v12[v6];
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = (char **)*((_QWORD *)v16 + 1);
          if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
            goto LABEL_74;
          if ( *v18 != v16 )
            goto LABEL_74;
          *v18 = (char *)v17;
          *(_QWORD *)(v17 + 8) = v18;
          if ( *v18 != (char *)v17 )
            goto LABEL_74;
          *(_QWORD *)v15 = v17;
          v14 += 0x80000LL;
          *(_QWORD *)&PoolWithTag[v37 - (unsigned __int64)v6 - (_QWORD)v12 + 8 + (_QWORD)v16] = v18;
          v16 += 16;
          *v18 = v15;
          *(_QWORD *)(v17 + 8) = v15;
          v15 += 16;
          if ( v14 >= *(_QWORD *)(a1 + 32) )
            goto LABEL_39;
        }
      }
      for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
      {
        if ( v14 <= (__int64)*(i - 1) )
        {
          v26 = *i;
          while ( *((char ***)v26 + 1) == i )
          {
            *(_QWORD *)v15 = v26;
            v14 += 0x80000LL;
            *((_QWORD *)v15 + 1) = i;
            *((_QWORD *)v26 + 1) = v15;
            v26 = v15;
            *i = v15;
            v15 += 16;
            if ( v14 > (__int64)*(i - 1) )
              goto LABEL_52;
          }
LABEL_74:
          __fastfail(3u);
        }
LABEL_52:
        ;
      }
LABEL_39:
      if ( v14 < v5 )
      {
        v19 = (char **)(a1 + 16);
        for ( j = *(char **)(a1 + 16); ; j = v21 )
        {
          v21 = v15;
          if ( *((char ***)j + 1) != v19 )
            break;
          *(_QWORD *)v15 = j;
          v14 += 0x80000LL;
          *((_QWORD *)v15 + 1) = v19;
          *((_QWORD *)j + 1) = v15;
          *v19 = v15;
          v15 += 16;
          if ( v14 >= v5 )
            goto LABEL_25;
        }
        goto LABEL_74;
      }
    }
LABEL_25:
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v5;
    CcReleaseBcbLockAndVacbLock(v2, a1);
    if ( v12 != (char *)(a1 + 56) && v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_28;
  }
  return 3221225626LL;
}
