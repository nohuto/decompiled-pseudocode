/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x140239CC0
 * Callers:
 *     SmpKeyedStoreReference @ 0x140239AE8 (SmpKeyedStoreReference.c)
 *     SmStoreExistsForProcess @ 0x140239C88 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1402CBC18 (SmpKeyedStoreSetVaRanges.c)
 *     SmpProcessQueryStoreStats @ 0x140597498 (SmpProcessQueryStoreStats.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1405CEF78 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmpKeyedStoreCreate @ 0x1406559F4 (SmpKeyedStoreCreate.c)
 *     SmSwapStore @ 0x1406561BC (SmSwapStore.c)
 *     SmStoreCompressionStop @ 0x1406D11CC (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406D12B0 (SmStoreCompressionStart.c)
 *     SmProcessDeleteNotification @ 0x1409251EC (SmProcessDeleteNotification.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x140323260 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r15d
  __int64 v9; // r14
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rdi
  struct _KTHREAD *v14; // rdi
  unsigned __int8 v15; // r12
  unsigned int v16; // edx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // r15
  unsigned int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  char *v31; // r8
  _QWORD *i; // rdx
  char j; // cl
  unsigned __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // r10
  __int64 v37; // r15
  _QWORD *v38; // r9
  __int64 v39; // rdx
  struct _PRIVILEGE_SET *v40; // rcx
  __int64 v41; // [rsp+40h] [rbp-20h]
  __int64 v42; // [rsp+48h] [rbp-18h]
  __int64 v43; // [rsp+58h] [rbp-8h]
  int v44; // [rsp+B0h] [rbp+50h] BYREF
  int v45; // [rsp+B8h] [rbp+58h]

  v45 = a4;
  v44 = 0;
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
  v10 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
  v11 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
  v12 = v11 & *a2;
  if ( !v10 )
    goto LABEL_15;
  v9 = *(_QWORD *)(BugCheckParameter2 + 16)
     + 8LL
     * ((37
       * (BYTE6(v12)
        + 37
        * (BYTE5(v12)
         + 37
         * (BYTE4(v12)
          + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
       + HIBYTE(v12)) & (unsigned int)(v10 - 1));
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( v12 == (v11 & *(_QWORD *)(v9 + 8)) )
      goto LABEL_14;
  }
  v9 = 0LL;
LABEL_14:
  if ( v9 )
  {
    if ( a3 == 2 )
    {
      v43 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v43)
                            + 37
                            * (BYTE5(v43)
                             + 37
                             * (BYTE4(v43)
                              + 37
                              * (BYTE3(v43)
                               + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
                           + HIBYTE(v43)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
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
      *(_QWORD *)(BugCheckParameter2 + 32) = *a2;
      v9 = 0LL;
      goto LABEL_17;
    }
    v25 = BugCheckParameter2 + 8;
    v44 = 1414032755;
    v26 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v27 = 2 * (v26 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v27 )
    {
      v30 = v27;
      if ( v27 < 4 )
        v30 = 4LL;
      v31 = (char *)SmAllocWrapper(8LL * (unsigned int)v30, &v44);
      if ( v31 )
      {
        if ( (((_DWORD)v30 - 1) & (unsigned int)v30) != 0 )
        {
          for ( j = -1; (_DWORD)v30; LODWORD(v30) = (unsigned int)v30 >> 1 )
            ++j;
          v30 = (unsigned int)(1 << j);
        }
        if ( (unsigned int)v30 > 0x4000000 )
          v30 = 0x4000000LL;
        v34 = (unsigned int)v30;
        if ( v31 > &v31[8 * v30] )
          v34 = 0LL;
        if ( v34 )
          memset64(v31, v25 | 1, v34);
        v35 = 0;
        v36 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v37 = *(_QWORD *)(v25 + 8);
            while ( 1 )
            {
              v38 = *(_QWORD **)(v37 + 8LL * v35);
              if ( ((unsigned __int8)v38 & 1) != 0 )
                break;
              *(_QWORD *)(v37 + 8LL * v35) = *v38;
              v41 = v36 & v38[1];
              v39 = (37
                   * (BYTE6(v41)
                    + 37
                    * (BYTE5(v41)
                     + 37
                     * (BYTE4(v41)
                      + 37
                      * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                   + HIBYTE(v41)) & (unsigned int)(v30 - 1);
              *v38 = *(_QWORD *)&v31[8 * v39];
              *(_QWORD *)&v31[8 * v39] = v38;
            }
            v25 = BugCheckParameter2 + 8;
            ++v35;
          }
          while ( v35 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v40 = *(struct _PRIVILEGE_SET **)(v25 + 8);
        v26 = *(_DWORD *)(v25 + 4) & 0x1F | (32 * v30);
        *(_QWORD *)(v25 + 8) = v31;
        *(_DWORD *)(v25 + 4) = v26;
        if ( v40 )
        {
          CmSiFreeMemory(v40);
          v26 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v26 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v26 < 0x20 )
        {
          v9 = 0LL;
          SessionId = -1;
          goto LABEL_17;
        }
      }
    }
    v42 = *a2 & (-1LL << (v26 & 0x1F));
    v28 = *(_QWORD *)(v25 + 8);
    v29 = (37
         * (BYTE6(v42)
          + 37
          * (BYTE5(v42)
           + 37
           * (BYTE4(v42)
            + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
         + HIBYTE(v42)) & ((v26 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v28 + 8 * v29);
    *(_QWORD *)(v28 + 8 * v29) = v9;
    ++*(_DWORD *)v25;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v45 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v14 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(v14->ApcState.Process);
      --v14->SpecialApcDisable;
      v15 = ++v14->AbAllocationRegionCount;
      v16 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v18, v16);
        if ( v17 )
          break;
        v19 = (__int64)&v14->LockEntries[v18];
        v16 &= ~(1 << v18);
        if ( (*(_BYTE *)(v19 + 26) & 1) != 0
          && (*(_DWORD *)(v19 + 32) & 1) == 0
          && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v19 + 40) == SessionId )
        {
          *(_BYTE *)(v19 + 26) &= ~1u;
          if ( *(_QWORD *)(v19 + 32) )
          {
            if ( v19 )
            {
              *(_BYTE *)(v19 + 32) |= 2u;
              if ( *(__int64 *)(v19 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
              *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v19 + 25) &= ~1u;
              *(_QWORD *)(v19 + 32) = 0LL;
              v20 = (signed __int64)(v19 - (unsigned __int64)v14->LockEntries) / 96;
              if ( v15 == 1 )
                v14->AbEntrySummary |= 1 << v20;
              else
                _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v20);
              goto LABEL_45;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v14, BugCheckParameter2, SessionId, 0LL);
LABEL_45:
      --v14->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v14);
      v17 = v14->SpecialApcDisable++ == -1;
      if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery(v22, v21, v23, v24);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    KeLeaveCriticalRegion();
  }
  return v9;
}
