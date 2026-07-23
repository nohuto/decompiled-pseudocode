/*
 * XREFs of MiFreeUnusedPfnPages @ 0x1403CE250
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
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
  char result; // al
  struct _KTHREAD *v14; // rbx
  unsigned int v15; // edx
  unsigned __int8 v16; // r13
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int8 v21; // r14
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  int v26; // [rsp+34h] [rbp-35h] BYREF
  struct _KTHREAD *v27; // [rsp+38h] [rbp-31h]
  _QWORD v28[2]; // [rsp+40h] [rbp-29h] BYREF
  int v29; // [rsp+50h] [rbp-19h]
  int v30; // [rsp+54h] [rbp-15h]
  _OWORD v31[6]; // [rsp+58h] [rbp-11h] BYREF
  int v32; // [rsp+D0h] [rbp+67h] BYREF
  int v33; // [rsp+D8h] [rbp+6Fh]
  int v34; // [rsp+E0h] [rbp+77h]
  int v35; // [rsp+E8h] [rbp+7Fh] BYREF

  v30 = 0;
  v1 = &MiSystemPartition;
  v29 = 0;
  v28[0] = a1;
  v28[1] = v31;
  if ( a1 )
    v1 = a1;
  memset(v31, 0, 32);
  SessionId = -1;
  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread;
  v5 = (ULONG_PTR)(v1 + 24);
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 24), 0LL);
    if ( !a1 && *((_BYTE *)v1 + 204) == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 24);
      v35 = 0;
      v6 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
      --v6->SpecialApcDisable;
      v21 = ++v6->AbAllocationRegionCount;
      v22 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v9 = !_BitScanReverse((unsigned int *)&v23, v22);
        v34 = v23;
        if ( v9 )
          break;
        v24 = (__int64)&v6->LockEntries[v23];
        v22 &= ~(1 << v23);
        if ( (*(_BYTE *)(v24 + 26) & 1) != 0
          && (*(_DWORD *)(v24 + 32) & 1) == 0
          && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v24 + 40) == SessionId )
        {
          *(_BYTE *)(v24 + 26) &= ~1u;
          if ( *(_QWORD *)(v24 + 32) )
          {
            if ( v24 )
            {
              *(_BYTE *)(v24 + 32) |= 2u;
              if ( *(__int64 *)(v24 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
              v35 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
              *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v24 + 25) &= ~1u;
              *(_QWORD *)(v24 + 32) = 0LL;
              v25 = (signed __int64)(v24 - (unsigned __int64)v6->LockEntries) / 96;
              if ( v21 == 1 )
                v6->AbEntrySummary |= 1 << v25;
              else
                _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v25);
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, (unsigned int *)&v35);
      v9 = v6->SpecialApcDisable++ == -1;
      if ( !v9 )
        return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_27:
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
        KiCheckForKernelApcDelivery();
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    KeGenericCallDpc((__int64)MiFreeUnusedPfnPagesDpc, (__int64)v28);
    if ( v29 != 259 )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 24);
    v32 = 0;
    v14 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 24)) == 1 )
      v15 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    else
      v15 = -1;
    --v14->SpecialApcDisable;
    v16 = ++v14->AbAllocationRegionCount;
    v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v18, v17);
      v33 = v18;
      if ( v9 )
        break;
      v19 = (__int64)&v14->LockEntries[v18];
      v17 &= ~(1 << v18);
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == v15 )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
        {
          if ( v19 )
          {
            *(_BYTE *)(v19 + 32) |= 2u;
            if ( *(__int64 *)(v19 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
            v32 = 0;
            v32 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
            *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v19 + 25) &= ~1u;
            *(_QWORD *)(v19 + 32) = 0LL;
            v20 = (signed __int64)(v19 - (unsigned __int64)v14->LockEntries) / 96;
            if ( v16 == 1 )
              v14->AbEntrySummary |= 1 << v20;
            else
              _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v20);
            goto LABEL_49;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)(v1 + 24), v15, 0LL);
LABEL_49:
    --v14->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)(v1 + 24), (unsigned int *)&v32);
    v9 = v14->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
      KiCheckForKernelApcDelivery();
    CurrentThread = v27;
    result = KiLeaveGuardedRegionUnsafe((__int64)v27);
    if ( !v28[0] )
      return result;
    KeWaitForGate((__int64)v31 + 8, 0x12u);
  }
  v1[10] = 0LL;
  *((_BYTE *)v1 + 204) = 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 24);
  v26 = 0;
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
          v26 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, (unsigned int *)&v26);
  v9 = v6->SpecialApcDisable++ == -1;
  if ( v9 )
    goto LABEL_27;
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
