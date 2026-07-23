/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x140253B98
 * Callers:
 *     SmpKeyedStoreReference @ 0x1402539C0 (SmpKeyedStoreReference.c)
 *     SmStoreExistsForProcess @ 0x140253B60 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140338FE8 (SmpKeyedStoreSetVaRanges.c)
 *     SmpProcessQueryStoreStats @ 0x14059B628 (SmpProcessQueryStoreStats.c)
 *     SmStoreCompressionStop @ 0x1406C5700 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406C57E4 (SmStoreCompressionStart.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406DE584 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmpKeyedStoreCreate @ 0x1406F064C (SmpKeyedStoreCreate.c)
 *     SmSwapStore @ 0x1406F0E7C (SmSwapStore.c)
 *     SmProcessDeleteNotification @ 0x14092C2C4 (SmProcessDeleteNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x140331B00 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
  int v33; // edi
  _QWORD *i; // rdx
  char j; // cl
  unsigned __int64 v36; // rcx
  unsigned int v37; // edi
  __int64 v38; // r10
  __int64 v39; // r15
  _QWORD *v40; // r9
  __int64 v41; // rdx
  struct _PRIVILEGE_SET *v42; // rcx
  int v43; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v44; // [rsp+38h] [rbp-28h]
  __int64 v45; // [rsp+40h] [rbp-20h]
  __int64 v46; // [rsp+48h] [rbp-18h]
  __int64 v47; // [rsp+50h] [rbp-10h]
  __int64 v48; // [rsp+58h] [rbp-8h]
  int v49; // [rsp+B0h] [rbp+50h] BYREF
  int v50; // [rsp+B8h] [rbp+58h]

  v50 = a4;
  v49 = 0;
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
  v44 = v13;
  if ( !v11 )
    goto LABEL_15;
  v47 = v13;
  v9 = *(_QWORD *)(BugCheckParameter2 + 16)
     + 8LL
     * ((37
       * (BYTE6(v44)
        + 37
        * (BYTE5(v44)
         + 37
         * (BYTE4(v44)
          + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v13 + 11623883)))))))
       + HIBYTE(v44)) & (unsigned int)(v11 - 1));
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
      v33 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
      v44 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      v48 = v44;
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
                           + HIBYTE(v44)) & (unsigned int)(v33 - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
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
    v26 = BugCheckParameter2 + 8;
    v49 = 1414032755;
    v27 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v28 = 2 * (v27 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v28 )
    {
      v31 = v28;
      if ( v28 < 4 )
        v31 = 4LL;
      v32 = (char *)SmAllocWrapper(8LL * (unsigned int)v31, &v49);
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
        v36 = (unsigned int)v31;
        if ( v32 > &v32[8 * v31] )
          v36 = 0LL;
        if ( v36 )
          memset64(v32, v26 | 1, v36);
        v37 = 0;
        v38 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v39 = *(_QWORD *)(v26 + 8);
            while ( 1 )
            {
              v40 = *(_QWORD **)(v39 + 8LL * v37);
              if ( ((unsigned __int8)v40 & 1) != 0 )
                break;
              *(_QWORD *)(v39 + 8LL * v37) = *v40;
              v45 = v38 & v40[1];
              v41 = (37
                   * (BYTE6(v45)
                    + 37
                    * (BYTE5(v45)
                     + 37
                     * (BYTE4(v45)
                      + 37
                      * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
                   + HIBYTE(v45)) & (unsigned int)(v31 - 1);
              *v40 = *(_QWORD *)&v32[8 * v41];
              *(_QWORD *)&v32[8 * v41] = v40;
            }
            v26 = BugCheckParameter2 + 8;
            ++v37;
          }
          while ( v37 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v42 = *(struct _PRIVILEGE_SET **)(v26 + 8);
        v27 = *(_DWORD *)(v26 + 4) & 0x1F | (32 * v31);
        *(_QWORD *)(v26 + 8) = v32;
        *(_DWORD *)(v26 + 4) = v27;
        if ( v42 )
        {
          CmSiFreeMemory(v42);
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
    v46 = *a2 & (-1LL << (v27 & 0x1F));
    v29 = *(_QWORD *)(v26 + 8);
    v30 = (37
         * (BYTE6(v46)
          + 37
          * (BYTE5(v46)
           + 37
           * (BYTE4(v46)
            + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
         + HIBYTE(v46)) & ((v27 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v9;
    ++*(_DWORD *)v26;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v50 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      v43 = 0;
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
              v43 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v15, BugCheckParameter2, &v43);
      v18 = v15->SpecialApcDisable++ == -1;
      if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery(v23, v22, v24, v25);
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
