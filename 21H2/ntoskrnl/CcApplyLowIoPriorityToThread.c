/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x140301058
 * Callers:
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402F90C0 (CcUpdateSharedCacheMapFlag.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     PsSetIoPriorityThread @ 0x140302040 (PsSetIoPriorityThread.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v6; // r14
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rdx
  ULONG_PTR v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned __int8 v19; // r15
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // ecx

  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x48AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
      ExfTryToWakePushLock(v6);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = MmGetSessionIdEx(v7->ApcState.Process);
    else
      SessionId = -1;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      if ( v11 )
        goto LABEL_56;
      v13 = (__int64)&v7->LockEntries[v12];
      v10 &= ~(1 << v12);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v13 + 40) == SessionId )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
          break;
      }
    }
    if ( !v13 )
    {
LABEL_56:
      if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, SessionId, 0LL);
      goto LABEL_30;
    }
    *(_BYTE *)(v13 + 32) |= 2u;
    if ( *(__int64 *)(v13 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
    v14 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
    *(_BYTE *)(v13 + 25) &= ~1u;
    *(_DWORD *)(v13 + 88) = v14;
    *(_QWORD *)(v13 + 32) = 0LL;
    v15 = (signed __int64)(v13 - (unsigned __int64)v7->LockEntries) / 96;
    if ( v9 == 1 )
    {
      v7->AbEntrySummary |= 1 << v15;
      goto LABEL_30;
    }
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 928) != CurrentThread )
      return;
    v16 = a1 + 952;
    ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
    PsSetIoPriorityThread(CurrentThread, *(unsigned int *)(a1 + 948));
    v17 = *(unsigned int *)(a1 + 944);
    if ( (_DWORD)v17 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v17);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v17) = 1;
      PsBoostThreadIoEx(CurrentThread, v17, 0LL, 0LL);
      CcUpdateSharedCacheMapFlag((__int64)a3, 0x20000000, 0);
    }
    *(_QWORD *)(a1 + 928) = 0LL;
    *(_QWORD *)(a1 + 936) = 0LL;
    *(_DWORD *)(a1 + 948) = 5;
    *(_DWORD *)(a1 + 944) = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v16);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
      v18 = MmGetSessionIdEx(v7->ApcState.Process);
    else
      v18 = -1;
    --v7->SpecialApcDisable;
    v19 = ++v7->AbAllocationRegionCount;
    v20 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v21, v20);
      if ( v11 )
        goto LABEL_58;
      v22 = (__int64)&v7->LockEntries[v21];
      v20 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v22 + 40) == v18 )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
          break;
      }
    }
    if ( !v22 )
    {
LABEL_58:
      if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v7, v16, v18, 0LL);
      goto LABEL_30;
    }
    *(_BYTE *)(v22 + 32) |= 2u;
    if ( *(__int64 *)(v22 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
    v23 = *(_DWORD *)(v22 + 88) & 0xFFFE0000;
    *(_BYTE *)(v22 + 25) &= ~1u;
    *(_DWORD *)(v22 + 88) = v23;
    *(_QWORD *)(v22 + 32) = 0LL;
    v15 = (signed __int64)(v22 - (unsigned __int64)v7->LockEntries) / 96;
    if ( v19 == 1 )
    {
      v7->AbEntrySummary |= 1 << v15;
      goto LABEL_30;
    }
  }
  _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v15);
LABEL_30:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery();
}
