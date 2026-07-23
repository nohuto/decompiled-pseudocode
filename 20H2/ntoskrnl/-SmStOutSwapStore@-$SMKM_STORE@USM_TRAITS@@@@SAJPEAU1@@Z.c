/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14025DCEC
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14033AA64 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14025DA54 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmArrayGrow @ 0x14025E08C (SmArrayGrow.c)
 *     SmPerformStoreSwapOperation @ 0x14025E160 (SmPerformStoreSwapOperation.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403570D8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1403572A0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  __int64 v1; // r14
  int v2; // r15d
  _DWORD *v3; // r12
  unsigned int v4; // r13d
  int v6; // r8d
  int v7; // r9d
  unsigned int *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  unsigned int v11; // r10d
  __int64 v12; // rdx
  unsigned int v13; // r9d
  _DWORD *v14; // r11
  _DWORD *v15; // r8
  int v16; // edx
  int v17; // r10d
  unsigned int v18; // ecx
  unsigned int i; // eax
  unsigned int v20; // r15d
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rdx
  int v25; // r8d
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _DWORD *v28; // r8
  int v29; // ebx
  struct _KTHREAD *v30; // rax
  _DWORD *v31; // rsi
  __int64 v32; // r14
  int v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+30h] [rbp-38h]
  PVOID P; // [rsp+38h] [rbp-30h] BYREF
  PVOID v37; // [rsp+40h] [rbp-28h]
  __int128 v38; // [rsp+48h] [rbp-20h] BYREF
  __int64 v39; // [rsp+58h] [rbp-10h]
  int v40; // [rsp+B0h] [rbp+48h] BYREF
  int v41; // [rsp+B8h] [rbp+50h]
  PVOID PoolWithTag; // [rsp+C8h] [rbp+60h]

  v1 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  v2 = 0;
  v35 = -1LL;
  P = 0LL;
  v3 = 0LL;
  PoolWithTag = 0LL;
  v4 = 0;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)a1);
  v8 = *(unsigned int **)(a1 + 6568);
  if ( (unsigned __int64)v8 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v29 = -1073700861;
    goto LABEL_41;
  }
  if ( v8 != (unsigned int *)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)(a1 + 6568),
                               -1LL,
                               (signed __int64)v8) )
    return (unsigned int)-1073700861;
  if ( *(_QWORD *)v8 )
  {
    v1 = (__int64)v8;
    v29 = -1073741791;
    goto LABEL_47;
  }
  CurrentThread = KeGetCurrentThread();
  v35 = 0LL;
  v37 = v8;
  v41 = 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * *(_DWORD *)(a1 + 6212)), 0x77536D73u);
  if ( !PoolWithTag )
  {
    v29 = -1073741670;
    goto LABEL_59;
  }
  v40 = 0;
  v10 = 0;
LABEL_6:
  while ( 1 )
  {
    v11 = v8[2];
    if ( v11 <= v10 )
      break;
    v12 = *((_QWORD *)v8 + 2);
    v13 = v10;
    v14 = (_DWORD *)(v12 + 4 * ((unsigned __int64)(v11 - 1) >> 5));
    v15 = (_DWORD *)(v12 + 4 * ((unsigned __int64)v10 >> 5));
    if ( v15 != v14 && (*v15 | *((_DWORD *)qword_140011D10 + (v10 & 0x1F))) == -1 )
    {
      v13 = v10 - (v10 & 0x1F) + 32;
      for ( ++v15; v15 < v14 && *v15 == -1; ++v15 )
        v13 += 32;
    }
    for ( ; v13 < v11; ++v13 )
    {
      if ( !_bittest(*((const signed __int32 **)v8 + 2), v13) )
        break;
    }
    v16 = 0;
    if ( v15 != v14 )
    {
      v17 = v13 & 0x1F;
      if ( (*v15 & ~*((_DWORD *)qword_140011D10 + (v13 & 0x1F))) == 0 )
      {
        v16 = 32 - v17;
        if ( v17 == 33 )
          goto LABEL_22;
        v28 = v15 + 1;
        while ( v28 < v14 && !*v28 )
        {
          ++v28;
          v16 += 32;
          if ( v16 == -1 )
            goto LABEL_22;
        }
      }
    }
    v18 = v8[2];
    for ( i = v16 + v13; i < v18; ++v16 )
    {
      if ( _bittest(*((const signed __int32 **)v8 + 2), i) )
        break;
      if ( v16 == -1 )
        break;
      ++i;
    }
LABEL_22:
    v10 = v13;
    if ( !v16 )
      break;
    v20 = v16 + v13;
    if ( v13 < v16 + v13 )
    {
      v21 = 8LL * v13;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v21 + *(_QWORD *)(a1 + 6216));
        if ( (v22 & 0x7FFFFFFFFFFF0000LL) != 0 && v22 >= 0 )
        {
          v23 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v10, 0, v13, 4);
          if ( !(unsigned int)SmArrayGrow(v4, v24, &v40, &P) )
          {
            SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v10, v25, v13, v34, 2);
            v2 = v41;
            v29 = -1073741670;
            goto LABEL_40;
          }
          v26 = P;
          *((_DWORD *)PoolWithTag + v4) = v10;
          v27 = 2LL * v4++;
          v26[v27] = v23;
          v26[v27 + 1] = *(unsigned int *)(a1 + 6208);
        }
        ++v10;
        v21 += 8LL;
        if ( v10 >= v20 )
          goto LABEL_6;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v2 = 0;
  if ( v4 )
  {
    *((_QWORD *)&v38 + 1) = P;
    v39 = v4;
    v29 = SmPerformStoreSwapOperation(1LL, &v38);
    if ( v29 >= 0 )
    {
      v29 = 0;
      *(_QWORD *)v8 = v38;
      v35 = (__int64)v8;
      v37 = 0LL;
    }
LABEL_40:
    v3 = PoolWithTag;
LABEL_41:
    if ( v4 )
    {
      if ( !v2 )
      {
        v30 = KeGetCurrentThread();
        v2 = 1;
        --v30->SpecialApcDisable;
        ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
      }
      v31 = v3;
      v32 = v4;
      do
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v31++, v6, v7, v34, 2);
        --v32;
      }
      while ( v32 );
    }
    v1 = v35;
    if ( !v2 )
    {
LABEL_47:
      if ( v1 != -1 )
        goto LABEL_48;
      goto LABEL_49;
    }
LABEL_59:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_47;
  }
  v1 = 0LL;
  v29 = -1073741607;
LABEL_48:
  _InterlockedExchange64((volatile __int64 *)(a1 + 6568), v1);
LABEL_49:
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v29;
}
