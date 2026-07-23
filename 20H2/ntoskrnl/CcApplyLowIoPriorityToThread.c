/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x14024AAB8
 * Callers:
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PsSetIoPriorityThread @ 0x14024B340 (PsSetIoPriorityThread.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1403168D4 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v6; // r14
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  KPRIORITY v22; // edx
  unsigned int v23; // edx
  unsigned __int8 v24; // r15
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // [rsp+34h] [rbp-Ch] BYREF
  int v32; // [rsp+88h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x489uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 960) >= *(_DWORD *)(a1 + 200) || *(_QWORD *)(a1 + 928) || a3[129] || (a3[38] & 0x10000) != 0 )
      return;
    v6 = a1 + 952;
    ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
    if ( *(_DWORD *)(a1 + 960) < *(_DWORD *)(a1 + 200) && !*(_QWORD *)(a1 + 928) && !a3[129] && (a3[38] & 0x10000) == 0 )
    {
      *(_QWORD *)(a1 + 928) = CurrentThread;
      *(_QWORD *)(a1 + 936) = a3;
      *(_DWORD *)(a1 + 948) = PsSetIoPriorityThread(CurrentThread, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    v7 = KeGetCurrentThread();
    v32 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = -1;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      if ( v11 )
        break;
      v13 = (__int64)&v7->LockEntries[v12];
      v10 &= ~(1 << v12);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v13 + 40) == SessionId )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
        {
          if ( v13 )
          {
            *(_BYTE *)(v13 + 32) |= 2u;
            if ( *(__int64 *)(v13 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
            v14 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
            v15 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
            *(_BYTE *)(v13 + 25) &= ~1u;
            v32 = v14;
            *(_DWORD *)(v13 + 88) = v15;
            *(_QWORD *)(v13 + 32) = 0LL;
            v16 = (signed __int64)(v13 - (unsigned __int64)v7->LockEntries) / 96;
            if ( v9 == 1 )
              v7->AbEntrySummary |= 1 << v16;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, SessionId, 0LL);
LABEL_30:
    v17 = &v32;
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 928) != CurrentThread )
      return;
    v6 = a1 + 952;
    ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
    PsSetIoPriorityThread(CurrentThread, *(unsigned int *)(a1 + 948));
    v22 = *(_DWORD *)(a1 + 944);
    if ( v22 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v22);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
      CcUpdateSharedCacheMapFlag(a3, 0x20000000LL, 0LL);
    }
    *(_QWORD *)(a1 + 928) = 0LL;
    *(_QWORD *)(a1 + 936) = 0LL;
    *(_DWORD *)(a1 + 948) = 5;
    *(_DWORD *)(a1 + 944) = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    v7 = KeGetCurrentThread();
    v31 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      v23 = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      v23 = -1;
    --v7->SpecialApcDisable;
    v24 = ++v7->AbAllocationRegionCount;
    v25 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v26, v25);
      if ( v11 )
        break;
      v27 = (__int64)&v7->LockEntries[v26];
      v25 &= ~(1 << v26);
      if ( (*(_BYTE *)(v27 + 26) & 1) != 0
        && (*(_DWORD *)(v27 + 32) & 1) == 0
        && (*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v27 + 40) == v23 )
      {
        *(_BYTE *)(v27 + 26) &= ~1u;
        if ( *(_QWORD *)(v27 + 32) )
        {
          if ( v27 )
          {
            *(_BYTE *)(v27 + 32) |= 2u;
            if ( *(__int64 *)(v27 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v27);
            v28 = *(_DWORD *)(v27 + 88) & 0x1FFFF;
            v29 = *(_DWORD *)(v27 + 88) & 0xFFFE0000;
            *(_BYTE *)(v27 + 25) &= ~1u;
            v31 = v28;
            *(_DWORD *)(v27 + 88) = v29;
            *(_QWORD *)(v27 + 32) = 0LL;
            v30 = (signed __int64)(v27 - (unsigned __int64)v7->LockEntries) / 96;
            if ( v24 == 1 )
              v7->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_54;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, v23, 0LL);
LABEL_54:
    v17 = &v31;
  }
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, v6, v17);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v19, v18, v20, v21);
}
