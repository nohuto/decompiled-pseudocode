/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x1402CCAF0
 * Callers:
 *     SmpKeyedStoreReference @ 0x1402CC918 (SmpKeyedStoreReference.c)
 *     SmStoreExistsForProcess @ 0x1402CCAB8 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x14030D858 (SmpKeyedStoreSetVaRanges.c)
 *     SmpProcessQueryStoreStats @ 0x140597B88 (SmpProcessQueryStoreStats.c)
 *     SmpKeyedStoreCreate @ 0x1406D0054 (SmpKeyedStoreCreate.c)
 *     SmSwapStore @ 0x1406D081C (SmSwapStore.c)
 *     SmStoreCompressionStart @ 0x1406D2974 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1406D2A04 (SmStoreCompressionStop.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x14070C444 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessDeleteNotification @ 0x14092649C (SmProcessDeleteNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x140360D50 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, __int64 *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r15d
  __int64 v9; // r14
  __int64 v10; // r10
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rdi
  struct _KTHREAD *v15; // rdi
  unsigned __int8 v16; // r12
  unsigned int v17; // edx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // r15
  unsigned int v24; // esi
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  char *v29; // r8
  int v30; // edi
  _QWORD *i; // rdx
  char j; // cl
  unsigned __int64 v33; // rcx
  unsigned int v34; // edi
  __int64 v35; // r10
  __int64 v36; // r15
  _QWORD *v37; // r9
  __int64 v38; // rdx
  struct _PRIVILEGE_SET *v39; // rcx
  int v40; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v41; // [rsp+38h] [rbp-28h]
  __int64 v42; // [rsp+40h] [rbp-20h]
  __int64 v43; // [rsp+48h] [rbp-18h]
  __int64 v44; // [rsp+50h] [rbp-10h]
  __int64 v45; // [rsp+58h] [rbp-8h]
  int v46; // [rsp+B0h] [rbp+50h] BYREF
  int v47; // [rsp+B8h] [rbp+58h]

  v47 = a4;
  v46 = 0;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    else
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  }
  SessionId = -1;
  if ( !a3 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v9 && *(_QWORD *)(v9 + 8) == *a2 )
      goto LABEL_17;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v9 = 0LL;
      goto LABEL_17;
    }
  }
  v10 = *a2;
  v11 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
  v12 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
  v13 = v12 & *a2;
  v41 = v13;
  if ( !v11 )
    goto LABEL_15;
  v44 = v13;
  v9 = *(_QWORD *)(BugCheckParameter2 + 16)
     + 8LL
     * ((37
       * (BYTE6(v41)
        + 37
        * (BYTE5(v41)
         + 37
         * (BYTE4(v41)
          + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v13 + 11623883)))))))
       + HIBYTE(v41)) & (unsigned int)(v11 - 1));
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( v13 == (v12 & *(_QWORD *)(v9 + 8)) )
      goto LABEL_14;
  }
  v9 = 0LL;
LABEL_14:
  if ( v9 )
  {
    if ( a3 == 2 )
    {
      v30 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
      v41 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      v45 = v41;
      for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v41)
                            + 37
                            * (BYTE5(v41)
                             + 37
                             * (BYTE4(v41)
                              + 37
                              * (BYTE3(v41)
                               + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                           + HIBYTE(v41)) & (unsigned int)(v30 - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( *i == v9 )
        {
          *i = *(_QWORD *)v9;
          --*(_DWORD *)(BugCheckParameter2 + 8);
          *(_QWORD *)v9 |= 0x8000000000000002uLL;
          break;
        }
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 24) == v9 )
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 24) = v9;
    }
  }
  else
  {
LABEL_15:
    if ( a3 != 1 )
    {
      *(_QWORD *)(BugCheckParameter2 + 32) = v10;
      v9 = 0LL;
      goto LABEL_17;
    }
    v23 = BugCheckParameter2 + 8;
    v46 = 1414032755;
    v24 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v25 = 2 * (v24 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v25 )
    {
      v28 = v25;
      if ( v25 < 4 )
        v28 = 4LL;
      v29 = (char *)SmAllocWrapper(8LL * (unsigned int)v28, &v46);
      if ( v29 )
      {
        if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
        {
          for ( j = -1; (_DWORD)v28; LODWORD(v28) = (unsigned int)v28 >> 1 )
            ++j;
          v28 = (unsigned int)(1 << j);
        }
        if ( (unsigned int)v28 > 0x4000000 )
          v28 = 0x4000000LL;
        v33 = (unsigned int)v28;
        if ( v29 > &v29[8 * v28] )
          v33 = 0LL;
        if ( v33 )
          memset64(v29, v23 | 1, v33);
        v34 = 0;
        v35 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v36 = *(_QWORD *)(v23 + 8);
            while ( 1 )
            {
              v37 = *(_QWORD **)(v36 + 8LL * v34);
              if ( ((unsigned __int8)v37 & 1) != 0 )
                break;
              *(_QWORD *)(v36 + 8LL * v34) = *v37;
              v42 = v35 & v37[1];
              v38 = (37
                   * (BYTE6(v42)
                    + 37
                    * (BYTE5(v42)
                     + 37
                     * (BYTE4(v42)
                      + 37
                      * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                   + HIBYTE(v42)) & (unsigned int)(v28 - 1);
              *v37 = *(_QWORD *)&v29[8 * v38];
              *(_QWORD *)&v29[8 * v38] = v37;
            }
            v23 = BugCheckParameter2 + 8;
            ++v34;
          }
          while ( v34 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v39 = *(struct _PRIVILEGE_SET **)(v23 + 8);
        v24 = *(_DWORD *)(v23 + 4) & 0x1F | (32 * v28);
        *(_QWORD *)(v23 + 8) = v29;
        *(_DWORD *)(v23 + 4) = v24;
        if ( v39 )
        {
          CmSiFreeMemory(v39);
          v24 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v24 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v24 < 0x20 )
        {
          v9 = 0LL;
          SessionId = -1;
          goto LABEL_17;
        }
      }
    }
    v43 = *a2 & (-1LL << (v24 & 0x1F));
    v26 = *(_QWORD *)(v23 + 8);
    v27 = (37
         * (BYTE6(v43)
          + 37
          * (BYTE5(v43)
           + 37
           * (BYTE4(v43)
            + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
         + HIBYTE(v43)) & ((v24 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v9;
    ++*(_DWORD *)v23;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v47 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      v40 = 0;
      v15 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
      --v15->SpecialApcDisable;
      v16 = ++v15->AbAllocationRegionCount;
      v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        if ( v18 )
          break;
        v20 = (__int64)&v15->LockEntries[v19];
        v17 &= ~(1 << v19);
        if ( (*(_BYTE *)(v20 + 26) & 1) != 0
          && (*(_DWORD *)(v20 + 32) & 1) == 0
          && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v20 + 40) == SessionId )
        {
          *(_BYTE *)(v20 + 26) &= ~1u;
          if ( *(_QWORD *)(v20 + 32) )
          {
            if ( v20 )
            {
              *(_BYTE *)(v20 + 32) |= 2u;
              if ( *(__int64 *)(v20 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
              v40 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
              *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v20 + 25) &= ~1u;
              *(_QWORD *)(v20 + 32) = 0LL;
              v21 = (signed __int64)(v20 - (unsigned __int64)v15->LockEntries) / 96;
              if ( v16 == 1 )
                v15->AbEntrySummary |= 1 << v21;
              else
                _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v21);
              goto LABEL_45;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, BugCheckParameter2, SessionId, 0LL);
LABEL_45:
      --v15->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v15, BugCheckParameter2, &v40);
      v18 = v15->SpecialApcDisable++ == -1;
      if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery(v22);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    KeLeaveCriticalRegion();
  }
  return v9;
}
