/*
 * XREFs of MiFreeUnusedPfnPages @ 0x1403CE0E0
 * Callers:
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     KeGenericCallDpc @ 0x1402ECF00 (KeGenericCallDpc.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

char __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r14
  unsigned int SessionId; // r15d
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v5; // rsi
  struct _KTHREAD *v6; // rbx
  __int64 v7; // r9
  unsigned __int8 v8; // r14
  unsigned int v9; // edx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char result; // al
  struct _KTHREAD *v16; // rbx
  unsigned int v17; // edx
  unsigned __int8 v18; // r13
  _DWORD *v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned __int8 AbAllocationRegionCount; // r14
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  int v31; // [rsp+34h] [rbp-35h] BYREF
  struct _KTHREAD *v32; // [rsp+38h] [rbp-31h]
  _QWORD v33[2]; // [rsp+40h] [rbp-29h] BYREF
  int v34; // [rsp+50h] [rbp-19h]
  int v35; // [rsp+54h] [rbp-15h]
  _OWORD v36[6]; // [rsp+58h] [rbp-11h] BYREF
  int v37; // [rsp+D0h] [rbp+67h] BYREF
  int v38; // [rsp+D8h] [rbp+6Fh]
  int v39; // [rsp+E0h] [rbp+77h]
  int v40; // [rsp+E8h] [rbp+7Fh] BYREF

  v35 = 0;
  v1 = &MiSystemPartition;
  v34 = 0;
  v33[0] = a1;
  v33[1] = v36;
  if ( a1 )
    v1 = a1;
  memset(v36, 0, 32);
  SessionId = -1;
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread;
  v5 = (ULONG_PTR)(v1 + 24);
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 24), 0LL);
    if ( !a1 && *((_BYTE *)v1 + 204) == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 24);
      v40 = 0;
      v6 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
      --v6->SpecialApcDisable;
      ++v6->AbAllocationRegionCount;
      v25 = 0x7FFFFFFFFFFFFFFCLL;
      AbAllocationRegionCount = v6->AbAllocationRegionCount;
      v27 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v10 = !_BitScanReverse((unsigned int *)&v28, v27);
        v39 = v28;
        if ( v10 )
          break;
        v29 = (__int64)&v6->LockEntries[v28];
        v27 &= ~(1 << v28);
        if ( (*(_BYTE *)(v29 + 26) & 1) != 0
          && (*(_DWORD *)(v29 + 32) & 1) == 0
          && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v29 + 40) == SessionId )
        {
          *(_BYTE *)(v29 + 26) &= ~1u;
          if ( *(_QWORD *)(v29 + 32) )
          {
            if ( v29 )
            {
              *(_BYTE *)(v29 + 32) |= 2u;
              if ( *(__int64 *)(v29 + 32) < 0 )
                KiAbEntryRemoveFromTree(v29);
              v40 = *(_DWORD *)(v29 + 88) & 0x1FFFF;
              *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v29 + 25) &= ~1u;
              *(_QWORD *)(v29 + 32) = 0LL;
              v30 = (signed __int64)(v29 - (unsigned __int64)v6->LockEntries) / 96;
              if ( AbAllocationRegionCount == 1 )
                v6->AbEntrySummary |= 1 << v30;
              else
                _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v30);
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, (__int64)&v40, (_DWORD *)v25);
      v10 = v6->SpecialApcDisable++ == -1;
      if ( !v10 )
        return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_27:
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
        KiCheckForKernelApcDelivery(v14);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    KeGenericCallDpc((__int64)MiFreeUnusedPfnPagesDpc, (__int64)v33);
    if ( v34 != 259 )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 24);
    v37 = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
      v17 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    else
      v17 = -1;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = (_DWORD *)(v5 & 0x7FFFFFFFFFFFFFFCLL);
    v20 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v10 = !_BitScanReverse((unsigned int *)&v21, v20);
      v38 = v21;
      if ( v10 )
        break;
      v22 = (__int64)&v16->LockEntries[v21];
      v20 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
        && *(_DWORD *)(v22 + 40) == v17 )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree(v22);
            v37 = 0;
            v37 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
            *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            *(_QWORD *)(v22 + 32) = 0LL;
            v23 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
            if ( v18 == 1 )
              v16->AbEntrySummary |= 1 << v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
            goto LABEL_49;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)(v1 + 24), v17, 0LL);
LABEL_49:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)(v1 + 24), (__int64)&v37, v19);
    v10 = v16->SpecialApcDisable++ == -1;
    if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v24);
    CurrentThread = v32;
    result = KiLeaveGuardedRegionUnsafe((__int64)v32);
    if ( !v33[0] )
      return result;
    KeWaitForGate((__int64)v36 + 8, 18);
  }
  v1[10] = 0LL;
  *((_BYTE *)v1 + 204) = 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 24);
  v31 = 0;
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  --v6->SpecialApcDisable;
  ++v6->AbAllocationRegionCount;
  v7 = 0x7FFFFFFFFFFFFFFCLL;
  v8 = v6->AbAllocationRegionCount;
  v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    if ( v10 )
      break;
    v12 = (__int64)&v6->LockEntries[v11];
    v9 &= ~(1 << v11);
    if ( (*(_BYTE *)(v12 + 26) & 1) != 0
      && (*(_DWORD *)(v12 + 32) & 1) == 0
      && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v12 + 40) == SessionId )
    {
      *(_BYTE *)(v12 + 26) &= ~1u;
      if ( *(_QWORD *)(v12 + 32) )
      {
        if ( v12 )
        {
          *(_BYTE *)(v12 + 32) |= 2u;
          if ( *(__int64 *)(v12 + 32) < 0 )
            KiAbEntryRemoveFromTree(v12);
          v31 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
          *(_DWORD *)(v12 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v12 + 25) &= ~1u;
          *(_QWORD *)(v12 + 32) = 0LL;
          v13 = (signed __int64)(v12 - (unsigned __int64)v6->LockEntries) / 96;
          if ( v8 == 1 )
            v6->AbEntrySummary |= 1 << v13;
          else
            _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v13);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, (__int64)&v31, (_DWORD *)v7);
  v10 = v6->SpecialApcDisable++ == -1;
  if ( v10 )
    goto LABEL_27;
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
