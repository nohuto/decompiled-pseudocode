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
  ULONG_PTR v17; // r8
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR v27; // r15
  unsigned int v28; // esi
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rsi
  char *v33; // r8
  int v34; // edi
  _QWORD *i; // rdx
  char j; // cl
  unsigned __int64 v37; // rcx
  unsigned int v38; // edi
  __int64 v39; // r10
  __int64 v40; // r15
  _QWORD *v41; // r9
  __int64 v42; // rdx
  struct _PRIVILEGE_SET *v43; // rcx
  int v44; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v45; // [rsp+38h] [rbp-28h]
  __int64 v46; // [rsp+40h] [rbp-20h]
  __int64 v47; // [rsp+48h] [rbp-18h]
  __int64 v48; // [rsp+50h] [rbp-10h]
  __int64 v49; // [rsp+58h] [rbp-8h]
  int v50; // [rsp+B0h] [rbp+50h] BYREF
  int v51; // [rsp+B8h] [rbp+58h]

  v51 = a4;
  v50 = 0;
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
  v45 = v13;
  if ( !v11 )
    goto LABEL_15;
  v48 = v13;
  v9 = *(_QWORD *)(BugCheckParameter2 + 16)
     + 8LL
     * ((37
       * (BYTE6(v45)
        + 37
        * (BYTE5(v45)
         + 37
         * (BYTE4(v45)
          + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v13 + 11623883)))))))
       + HIBYTE(v45)) & (unsigned int)(v11 - 1));
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
      v34 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
      v45 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      v49 = v45;
      for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v45)
                            + 37
                            * (BYTE5(v45)
                             + 37
                             * (BYTE4(v45)
                              + 37
                              * (BYTE3(v45)
                               + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
                           + HIBYTE(v45)) & (unsigned int)(v34 - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
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
    v27 = BugCheckParameter2 + 8;
    v50 = 1414032755;
    v28 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v29 = 2 * (v28 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v29 )
    {
      v32 = v29;
      if ( v29 < 4 )
        v32 = 4LL;
      v33 = (char *)SmAllocWrapper(8LL * (unsigned int)v32, &v50);
      if ( v33 )
      {
        if ( (((_DWORD)v32 - 1) & (unsigned int)v32) != 0 )
        {
          for ( j = -1; (_DWORD)v32; LODWORD(v32) = (unsigned int)v32 >> 1 )
            ++j;
          v32 = (unsigned int)(1 << j);
        }
        if ( (unsigned int)v32 > 0x4000000 )
          v32 = 0x4000000LL;
        v37 = (unsigned int)v32;
        if ( v33 > &v33[8 * v32] )
          v37 = 0LL;
        if ( v37 )
          memset64(v33, v27 | 1, v37);
        v38 = 0;
        v39 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v40 = *(_QWORD *)(v27 + 8);
            while ( 1 )
            {
              v41 = *(_QWORD **)(v40 + 8LL * v38);
              if ( ((unsigned __int8)v41 & 1) != 0 )
                break;
              *(_QWORD *)(v40 + 8LL * v38) = *v41;
              v46 = v39 & v41[1];
              v42 = (37
                   * (BYTE6(v46)
                    + 37
                    * (BYTE5(v46)
                     + 37
                     * (BYTE4(v46)
                      + 37
                      * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
                   + HIBYTE(v46)) & (unsigned int)(v32 - 1);
              *v41 = *(_QWORD *)&v33[8 * v42];
              *(_QWORD *)&v33[8 * v42] = v41;
            }
            v27 = BugCheckParameter2 + 8;
            ++v38;
          }
          while ( v38 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v43 = *(struct _PRIVILEGE_SET **)(v27 + 8);
        v28 = *(_DWORD *)(v27 + 4) & 0x1F | (32 * v32);
        *(_QWORD *)(v27 + 8) = v33;
        *(_DWORD *)(v27 + 4) = v28;
        if ( v43 )
        {
          CmSiFreeMemory(v43);
          v28 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v28 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v28 < 0x20 )
        {
          v9 = 0LL;
          SessionId = -1;
          goto LABEL_17;
        }
      }
    }
    v47 = *a2 & (-1LL << (v28 & 0x1F));
    v30 = *(_QWORD *)(v27 + 8);
    v31 = (37
         * (BYTE6(v47)
          + 37
          * (BYTE5(v47)
           + 37
           * (BYTE4(v47)
            + 37 * (BYTE3(v47) + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v47 + 11623883)))))))
         + HIBYTE(v47)) & ((v28 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v30 + 8 * v31);
    *(_QWORD *)(v30 + 8 * v31) = v9;
    ++*(_DWORD *)v27;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v51 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      v44 = 0;
      v15 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
      --v15->SpecialApcDisable;
      v16 = ++v15->AbAllocationRegionCount;
      v17 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v18) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v19 = !_BitScanReverse((unsigned int *)&v20, v18);
        if ( v19 )
          break;
        v21 = (__int64)&v15->LockEntries[v20];
        v18 = ~(1 << v20) & (unsigned int)v18;
        if ( (*(_BYTE *)(v21 + 26) & 1) != 0
          && (*(_DWORD *)(v21 + 32) & 1) == 0
          && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v17
          && *(_DWORD *)(v21 + 40) == SessionId )
        {
          *(_BYTE *)(v21 + 26) &= ~1u;
          if ( *(_QWORD *)(v21 + 32) )
          {
            if ( v21 )
            {
              *(_BYTE *)(v21 + 32) |= 2u;
              if ( *(__int64 *)(v21 + 32) < 0 )
                KiAbEntryRemoveFromTree(v21, v18, v17);
              v44 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
              *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v21 + 25) &= ~1u;
              *(_QWORD *)(v21 + 32) = 0LL;
              v22 = (signed __int64)(v21 - (unsigned __int64)v15->LockEntries) / 96;
              if ( v16 == 1 )
                v15->AbEntrySummary |= 1 << v22;
              else
                _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v15, BugCheckParameter2, &v44);
      v19 = v15->SpecialApcDisable++ == -1;
      if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery(v24, v23, v25, v26);
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
