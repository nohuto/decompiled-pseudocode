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
  ULONG_PTR v16; // r8
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG_PTR v26; // r15
  unsigned int v27; // esi
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  char *v32; // r8
  _QWORD *i; // rdx
  char j; // cl
  unsigned __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // r10
  __int64 v38; // r15
  _QWORD *v39; // r9
  __int64 v40; // rdx
  struct _PRIVILEGE_SET *v41; // rcx
  __int64 v42; // [rsp+40h] [rbp-20h]
  __int64 v43; // [rsp+48h] [rbp-18h]
  __int64 v44; // [rsp+58h] [rbp-8h]
  int v45; // [rsp+B0h] [rbp+50h] BYREF
  int v46; // [rsp+B8h] [rbp+58h]

  v46 = a4;
  v45 = 0;
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
      v44 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v44)
                            + 37
                            * (BYTE5(v44)
                             + 37
                             * (BYTE4(v44)
                              + 37
                              * (BYTE3(v44)
                               + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
                           + HIBYTE(v44)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
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
    v26 = BugCheckParameter2 + 8;
    v45 = 1414032755;
    v27 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v28 = 2 * (v27 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v28 )
    {
      v31 = v28;
      if ( v28 < 4 )
        v31 = 4LL;
      v32 = (char *)SmAllocWrapper(8LL * (unsigned int)v31, &v45);
      if ( v32 )
      {
        if ( (((_DWORD)v31 - 1) & (unsigned int)v31) != 0 )
        {
          for ( j = -1; (_DWORD)v31; LODWORD(v31) = (unsigned int)v31 >> 1 )
            ++j;
          v31 = (unsigned int)(1 << j);
        }
        if ( (unsigned int)v31 > 0x4000000 )
          v31 = 0x4000000LL;
        v35 = (unsigned int)v31;
        if ( v32 > &v32[8 * v31] )
          v35 = 0LL;
        if ( v35 )
          memset64(v32, v26 | 1, v35);
        v36 = 0;
        v37 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v38 = *(_QWORD *)(v26 + 8);
            while ( 1 )
            {
              v39 = *(_QWORD **)(v38 + 8LL * v36);
              if ( ((unsigned __int8)v39 & 1) != 0 )
                break;
              *(_QWORD *)(v38 + 8LL * v36) = *v39;
              v42 = v37 & v39[1];
              v40 = (37
                   * (BYTE6(v42)
                    + 37
                    * (BYTE5(v42)
                     + 37
                     * (BYTE4(v42)
                      + 37
                      * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                   + HIBYTE(v42)) & (unsigned int)(v31 - 1);
              *v39 = *(_QWORD *)&v32[8 * v40];
              *(_QWORD *)&v32[8 * v40] = v39;
            }
            v26 = BugCheckParameter2 + 8;
            ++v36;
          }
          while ( v36 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v41 = *(struct _PRIVILEGE_SET **)(v26 + 8);
        v27 = *(_DWORD *)(v26 + 4) & 0x1F | (32 * v31);
        *(_QWORD *)(v26 + 8) = v32;
        *(_DWORD *)(v26 + 4) = v27;
        if ( v41 )
        {
          CmSiFreeMemory(v41);
          v27 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v27 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v27 < 0x20 )
        {
          v9 = 0LL;
          SessionId = -1;
          goto LABEL_17;
        }
      }
    }
    v43 = *a2 & (-1LL << (v27 & 0x1F));
    v29 = *(_QWORD *)(v26 + 8);
    v30 = (37
         * (BYTE6(v43)
          + 37
          * (BYTE5(v43)
           + 37
           * (BYTE4(v43)
            + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
         + HIBYTE(v43)) & ((v27 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v9;
    ++*(_DWORD *)v26;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v46 )
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
      v16 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v17) = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        if ( v18 )
          break;
        v20 = (__int64)&v14->LockEntries[v19];
        v17 = ~(1 << v19) & (unsigned int)v17;
        if ( (*(_BYTE *)(v20 + 26) & 1) != 0
          && (*(_DWORD *)(v20 + 32) & 1) == 0
          && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v16
          && *(_DWORD *)(v20 + 40) == SessionId )
        {
          *(_BYTE *)(v20 + 26) &= ~1u;
          if ( *(_QWORD *)(v20 + 32) )
          {
            if ( v20 )
            {
              *(_BYTE *)(v20 + 32) |= 2u;
              if ( *(__int64 *)(v20 + 32) < 0 )
                KiAbEntryRemoveFromTree(v20, v17, v16);
              *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v20 + 25) &= ~1u;
              *(_QWORD *)(v20 + 32) = 0LL;
              v21 = (signed __int64)(v20 - (unsigned __int64)v14->LockEntries) / 96;
              if ( v15 == 1 )
                v14->AbEntrySummary |= 1 << v21;
              else
                _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v21);
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
      v18 = v14->SpecialApcDisable++ == -1;
      if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery(v23, v22, v24, v25);
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
