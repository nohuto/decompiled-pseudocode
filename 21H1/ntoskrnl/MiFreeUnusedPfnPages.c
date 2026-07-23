/*
 * XREFs of MiFreeUnusedPfnPages @ 0x1403C9CE0
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KeGenericCallDpc @ 0x140303170 (KeGenericCallDpc.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r14
  unsigned int SessionId; // r15d
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v5; // rsi
  struct _KTHREAD *v6; // rbx
  unsigned __int8 v7; // r14
  unsigned int v8; // edx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 result; // rax
  struct _KTHREAD *v18; // rbx
  unsigned int v19; // edx
  unsigned __int8 v20; // r13
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int8 v29; // r14
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // [rsp+34h] [rbp-35h] BYREF
  struct _KTHREAD *v35; // [rsp+38h] [rbp-31h]
  _QWORD v36[2]; // [rsp+40h] [rbp-29h] BYREF
  int v37; // [rsp+50h] [rbp-19h]
  int v38; // [rsp+54h] [rbp-15h]
  _OWORD v39[6]; // [rsp+58h] [rbp-11h] BYREF
  int v40; // [rsp+D0h] [rbp+67h] BYREF
  int v41; // [rsp+D8h] [rbp+6Fh]
  int v42; // [rsp+E0h] [rbp+77h]
  int v43; // [rsp+E8h] [rbp+7Fh] BYREF

  v38 = 0;
  v1 = &MiSystemPartition;
  v37 = 0;
  v36[0] = a1;
  v36[1] = v39;
  if ( a1 )
    v1 = a1;
  memset(v39, 0, 32);
  SessionId = -1;
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v5 = (ULONG_PTR)(v1 + 24);
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 24), 0LL);
    if ( !a1 && *((_BYTE *)v1 + 204) == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 24);
      v43 = 0;
      v6 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
      --v6->SpecialApcDisable;
      v29 = ++v6->AbAllocationRegionCount;
      v30 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v9 = !_BitScanReverse((unsigned int *)&v31, v30);
        v42 = v31;
        if ( v9 )
          break;
        v32 = (__int64)&v6->LockEntries[v31];
        v30 &= ~(1 << v31);
        if ( (*(_BYTE *)(v32 + 26) & 1) != 0
          && (*(_DWORD *)(v32 + 32) & 1) == 0
          && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v32 + 40) == SessionId )
        {
          *(_BYTE *)(v32 + 26) &= ~1u;
          if ( *(_QWORD *)(v32 + 32) )
          {
            if ( v32 )
            {
              *(_BYTE *)(v32 + 32) |= 2u;
              if ( *(__int64 *)(v32 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
              v43 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
              *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v32 + 25) &= ~1u;
              *(_QWORD *)(v32 + 32) = 0LL;
              v33 = (signed __int64)(v32 - (unsigned __int64)v6->LockEntries) / 96;
              if ( v29 == 1 )
                v6->AbEntrySummary |= 1 << v33;
              else
                _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v33);
              goto LABEL_74;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v6, v5, SessionId, 0LL);
LABEL_74:
      --v6->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, &v43);
      v9 = v6->SpecialApcDisable++ == -1;
      if ( !v9 )
        return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v13, v15, (__int64)v16);
LABEL_27:
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
        KiCheckForKernelApcDelivery(v14, v13, v15, v16);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v13, v15, (__int64)v16);
    }
    KeGenericCallDpc((__int64)MiFreeUnusedPfnPagesDpc, (__int64)v36);
    if ( v37 != 259 )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 24);
    v40 = 0;
    v18 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
      v19 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
    else
      v19 = -1;
    --v18->SpecialApcDisable;
    v20 = ++v18->AbAllocationRegionCount;
    v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v22, v21);
      v41 = v22;
      if ( v9 )
        break;
      v23 = (__int64)&v18->LockEntries[v22];
      v21 &= ~(1 << v22);
      if ( (*(_BYTE *)(v23 + 26) & 1) != 0
        && (*(_DWORD *)(v23 + 32) & 1) == 0
        && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v23 + 40) == v19 )
      {
        *(_BYTE *)(v23 + 26) &= ~1u;
        if ( *(_QWORD *)(v23 + 32) )
        {
          if ( v23 )
          {
            *(_BYTE *)(v23 + 32) |= 2u;
            if ( *(__int64 *)(v23 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
            v40 = 0;
            v40 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
            *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v23 + 25) &= ~1u;
            *(_QWORD *)(v23 + 32) = 0LL;
            v24 = (signed __int64)(v23 - (unsigned __int64)v18->LockEntries) / 96;
            if ( v20 == 1 )
              v18->AbEntrySummary |= 1 << v24;
            else
              _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v24);
            goto LABEL_49;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)(v1 + 24), v19, 0LL);
LABEL_49:
    --v18->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)(v1 + 24), &v40);
    v9 = v18->SpecialApcDisable++ == -1;
    if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery(v26, v25, v27, v28);
    CurrentThread = v35;
    result = KiLeaveGuardedRegionUnsafe((__int64)v35, v25, v27, (__int64)v28);
    if ( !v36[0] )
      return result;
    KeWaitForGate((__int64)v39 + 8, 18);
  }
  v1[10] = 0LL;
  *((_BYTE *)v1 + 204) = 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 24);
  v34 = 0;
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  --v6->SpecialApcDisable;
  v7 = ++v6->AbAllocationRegionCount;
  v8 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    if ( v9 )
      break;
    v11 = (__int64)&v6->LockEntries[v10];
    v8 &= ~(1 << v10);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v11 + 40) == SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( v11 )
        {
          *(_BYTE *)(v11 + 32) |= 2u;
          if ( *(__int64 *)(v11 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
          v34 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
          *(_DWORD *)(v11 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v11 + 25) &= ~1u;
          *(_QWORD *)(v11 + 32) = 0LL;
          v12 = (signed __int64)(v11 - (unsigned __int64)v6->LockEntries) / 96;
          if ( v7 == 1 )
            v6->AbEntrySummary |= 1 << v12;
          else
            _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v12);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, v5, SessionId, 0LL);
LABEL_24:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, &v34);
  v9 = v6->SpecialApcDisable++ == -1;
  if ( v9 )
    goto LABEL_27;
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v13, v15, (__int64)v16);
}
