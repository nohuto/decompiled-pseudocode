/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x14031BBF4
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406C8580 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1407766C0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlDeleteHashTable @ 0x1403791B0 (RtlDeleteHashTable.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // r15d
  volatile signed __int64 *i; // r14
  struct _KTHREAD *v3; // rax
  ULONG_PTR v4; // rsi
  volatile signed __int64 *v5; // r13
  int v6; // r8d
  __int64 v7; // r9
  int v8; // r10d
  unsigned int v9; // ebx
  _QWORD *v10; // r9
  unsigned int v11; // edx
  _QWORD *v12; // rdx
  __int64 j; // r8
  unsigned __int64 v14; // rax
  int v15; // eax
  struct _KTHREAD *v16; // rbx
  unsigned int v17; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  volatile signed __int64 v25; // rcx
  volatile signed __int64 **v26; // rax
  struct _KTHREAD *v27; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v29; // r12
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rbx
  unsigned __int8 v36; // si
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // [rsp+34h] [rbp-14h] BYREF
  int v43; // [rsp+38h] [rbp-10h]
  int v44; // [rsp+90h] [rbp+48h] BYREF
  int v45; // [rsp+98h] [rbp+50h] BYREF
  int v46; // [rsp+A0h] [rbp+58h]
  int v47; // [rsp+A8h] [rbp+60h]

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v1 = -1;
    for ( i = *(volatile signed __int64 **)g_SessionLowboxMap; i != (volatile signed __int64 *)g_SessionLowboxMap; i = v5 )
    {
      v3 = KeGetCurrentThread();
      v4 = (ULONG_PTR)(i + 3);
      v5 = (volatile signed __int64 *)*i;
      --v3->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 3), 0LL);
      v6 = *((_DWORD *)i + 8);
      v7 = *((_QWORD *)i + 5);
      v43 = 0;
      v8 = (v7 & 4) != 0 ? 0x20 : 0;
      v9 = v8 + v6 - 1;
      v10 = (_QWORD *)(v7 - ((v7 & 4) != 0 ? 4 : 0));
      if ( v6 )
      {
        v12 = v10;
        for ( j = ~*v10 | ((1LL << v8) - 1); j == -1; j = ~*v12 )
        {
          if ( ++v12 > &v10[(unsigned __int64)v9 >> 6] )
          {
            v11 = -1;
            goto LABEL_14;
          }
        }
        _BitScanForward64(&v14, ~j);
        v11 = v14 + ((unsigned int)(v12 - v10) << 6);
        v43 = v14;
        if ( v11 > v9 )
          v11 = -1;
      }
      else
      {
        v11 = -1;
      }
LABEL_14:
      v15 = v11 - v8;
      if ( v11 == -1 )
        v15 = -1;
      if ( v15 == -1 )
      {
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v25 = *i;
        if ( *(volatile signed __int64 **)(*i + 8) != i
          || (v26 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v26 != i) )
        {
          __fastfail(3u);
        }
        *v26 = (volatile signed __int64 *)v25;
        *(_QWORD *)(v25 + 8) = v26;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        v45 = 0;
        v27 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(i + 3)) == 1 )
          SessionId = MmGetSessionIdEx((__int64)v27->ApcState.Process);
        else
          SessionId = -1;
        --v27->SpecialApcDisable;
        v29 = ++v27->AbAllocationRegionCount;
        v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v31, v30);
          v47 = v31;
          if ( v20 )
            break;
          v32 = (__int64)&v27->LockEntries[v31];
          v30 &= ~(1 << v31);
          if ( (*(_BYTE *)(v32 + 26) & 1) != 0
            && (*(_DWORD *)(v32 + 32) & 1) == 0
            && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
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
                v45 = 0;
                v45 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
                *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v32 + 25) &= ~1u;
                *(_QWORD *)(v32 + 32) = 0LL;
                v33 = (signed __int64)(v32 - (unsigned __int64)v27->LockEntries) / 96;
                if ( v29 == 1 )
                  v27->AbEntrySummary |= 1 << v33;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v33);
                goto LABEL_61;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)(i + 3), SessionId, 0LL);
LABEL_61:
        --v27->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v27, (__int64)(i + 3), &v45);
        v20 = v27->SpecialApcDisable++ == -1;
        if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
          KiCheckForKernelApcDelivery(v34);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag((PVOID)i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        v44 = 0;
        v16 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(i + 3)) == 1 )
          v17 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
        else
          v17 = -1;
        --v16->SpecialApcDisable;
        v18 = ++v16->AbAllocationRegionCount;
        v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v21, v19);
          v46 = v21;
          if ( v20 )
            break;
          v22 = (__int64)&v16->LockEntries[v21];
          v19 &= ~(1 << v21);
          if ( (*(_BYTE *)(v22 + 26) & 1) != 0
            && (*(_DWORD *)(v22 + 32) & 1) == 0
            && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v22 + 40) == v17 )
          {
            *(_BYTE *)(v22 + 26) &= ~1u;
            if ( *(_QWORD *)(v22 + 32) )
            {
              if ( v22 )
              {
                *(_BYTE *)(v22 + 32) |= 2u;
                if ( *(__int64 *)(v22 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
                v44 = 0;
                v44 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
                *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v22 + 25) &= ~1u;
                *(_QWORD *)(v22 + 32) = 0LL;
                v23 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
                if ( v18 == 1 )
                  v16->AbEntrySummary |= 1 << v23;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
                goto LABEL_34;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, v4, v17, 0LL);
LABEL_34:
        --v16->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v16, v4, &v44);
        v20 = v16->SpecialApcDisable++ == -1;
        if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
          KiCheckForKernelApcDelivery(v24);
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    v42 = 0;
    v35 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&LowboxSessionMapLock) == 1 )
      v1 = MmGetSessionIdEx((__int64)v35->ApcState.Process);
    --v35->SpecialApcDisable;
    v36 = ++v35->AbAllocationRegionCount;
    v37 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v38, v37);
      if ( v20 )
        break;
      v39 = (__int64)&v35->LockEntries[v38];
      v37 &= ~(1 << v38);
      if ( (*(_BYTE *)(v39 + 26) & 1) != 0
        && (*(_DWORD *)(v39 + 32) & 1) == 0
        && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v39 + 40) == v1 )
      {
        *(_BYTE *)(v39 + 26) &= ~1u;
        if ( *(_QWORD *)(v39 + 32) )
        {
          if ( v39 )
          {
            *(_BYTE *)(v39 + 32) |= 2u;
            if ( *(__int64 *)(v39 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
            v42 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
            *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v39 + 25) &= ~1u;
            *(_QWORD *)(v39 + 32) = 0LL;
            v40 = (signed __int64)(v39 - (unsigned __int64)v35->LockEntries) / 96;
            if ( v36 == 1 )
              v35->AbEntrySummary |= 1 << v40;
            else
              _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v40);
            goto LABEL_87;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&LowboxSessionMapLock, v1, 0LL);
LABEL_87:
    --v35->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v35, (__int64)&LowboxSessionMapLock, &v42);
    v20 = v35->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
      KiCheckForKernelApcDelivery(v41);
    KeLeaveCriticalRegion();
  }
}
