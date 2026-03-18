/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x14030D754
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406D2920 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140765CD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlDeleteHashTable @ 0x140376410 (RtlDeleteHashTable.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // r15d
  char *i; // r14
  struct _KTHREAD *v3; // rax
  ULONG_PTR v4; // rsi
  char *v5; // r13
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
  __int64 v17; // rdx
  unsigned __int8 v18; // r14
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  char *v25; // rcx
  void **v26; // rax
  struct _KTHREAD *v27; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v29; // r12
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rbx
  unsigned __int8 v36; // si
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // [rsp+34h] [rbp-14h] BYREF
  int v44; // [rsp+38h] [rbp-10h]
  int v45; // [rsp+90h] [rbp+48h] BYREF
  int v46; // [rsp+98h] [rbp+50h] BYREF
  int v47; // [rsp+A0h] [rbp+58h]
  int v48; // [rsp+A8h] [rbp+60h]

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v1 = -1;
    for ( i = *(char **)g_SessionLowboxMap; i != (char *)g_SessionLowboxMap; i = v5 )
    {
      v3 = KeGetCurrentThread();
      v4 = (ULONG_PTR)(i + 24);
      v5 = *(char **)i;
      --v3->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 24), 0LL);
      v6 = *((_DWORD *)i + 8);
      v7 = *((_QWORD *)i + 5);
      v44 = 0;
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
        v44 = v14;
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
        v25 = *(char **)i;
        if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v26 = (void **)*((_QWORD *)i + 1), *v26 != i) )
          __fastfail(3u);
        *v26 = v25;
        *((_QWORD *)v25 + 1) = v26;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        v46 = 0;
        v27 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(i + 24)) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v27->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v27->SpecialApcDisable;
        v29 = ++v27->AbAllocationRegionCount;
        LODWORD(v30) = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v31, v30);
          v48 = v31;
          if ( v20 )
            break;
          v32 = (__int64)&v27->LockEntries[v31];
          v30 = ~(1 << v31) & (unsigned int)v30;
          if ( (*(_BYTE *)(v32 + 26) & 1) != 0
            && (*(_DWORD *)(v32 + 32) & 1) == 0
            && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v32 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v32 + 26) &= ~1u;
            if ( *(_QWORD *)(v32 + 32) )
            {
              if ( v32 )
              {
                *(_BYTE *)(v32 + 32) |= 2u;
                if ( *(__int64 *)(v32 + 32) < 0 )
                  KiAbEntryRemoveFromTree(v32, SessionId, v30);
                v46 = 0;
                v46 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
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
          KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)(i + 24), (unsigned int)SessionId, 0LL);
LABEL_61:
        --v27->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v27, (__int64)(i + 24), &v46);
        v20 = v27->SpecialApcDisable++ == -1;
        if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
          KiCheckForKernelApcDelivery(v34);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        v45 = 0;
        v16 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(i + 24)) == 1 )
          v17 = (unsigned int)MmGetSessionIdEx((__int64)v16->ApcState.Process);
        else
          v17 = 0xFFFFFFFFLL;
        --v16->SpecialApcDisable;
        v18 = ++v16->AbAllocationRegionCount;
        LODWORD(v19) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v21, v19);
          v47 = v21;
          if ( v20 )
            break;
          v22 = (__int64)&v16->LockEntries[v21];
          v19 = ~(1 << v21) & (unsigned int)v19;
          if ( (*(_BYTE *)(v22 + 26) & 1) != 0
            && (*(_DWORD *)(v22 + 32) & 1) == 0
            && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v22 + 40) == (_DWORD)v17 )
          {
            *(_BYTE *)(v22 + 26) &= ~1u;
            if ( *(_QWORD *)(v22 + 32) )
            {
              if ( v22 )
              {
                *(_BYTE *)(v22 + 32) |= 2u;
                if ( *(__int64 *)(v22 + 32) < 0 )
                  KiAbEntryRemoveFromTree(v22, v17, v19);
                v45 = 0;
                v45 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
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
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, v4, (unsigned int)v17, 0LL);
LABEL_34:
        --v16->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v16, v4, &v45);
        v20 = v16->SpecialApcDisable++ == -1;
        if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
          KiCheckForKernelApcDelivery(v24);
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&LowboxSessionMapLock);
    v43 = 0;
    v35 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&LowboxSessionMapLock) == 1 )
      v1 = MmGetSessionIdEx((__int64)v35->ApcState.Process);
    --v35->SpecialApcDisable;
    v36 = ++v35->AbAllocationRegionCount;
    v37 = (unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v38) = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v39, v38);
      if ( v20 )
        break;
      v40 = (__int64)&v35->LockEntries[v39];
      v38 = ~(1 << v39) & (unsigned int)v38;
      if ( (*(_BYTE *)(v40 + 26) & 1) != 0
        && (*(_DWORD *)(v40 + 32) & 1) == 0
        && (*(_QWORD *)(v40 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v37
        && *(_DWORD *)(v40 + 40) == v1 )
      {
        *(_BYTE *)(v40 + 26) &= ~1u;
        if ( *(_QWORD *)(v40 + 32) )
        {
          if ( v40 )
          {
            *(_BYTE *)(v40 + 32) |= 2u;
            if ( *(__int64 *)(v40 + 32) < 0 )
              KiAbEntryRemoveFromTree(v40, v38, v37);
            v43 = *(_DWORD *)(v40 + 88) & 0x1FFFF;
            *(_DWORD *)(v40 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v40 + 25) &= ~1u;
            *(_QWORD *)(v40 + 32) = 0LL;
            v41 = (signed __int64)(v40 - (unsigned __int64)v35->LockEntries) / 96;
            if ( v36 == 1 )
              v35->AbEntrySummary |= 1 << v41;
            else
              _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v41);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v35, (__int64)&LowboxSessionMapLock, &v43);
    v20 = v35->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
      KiCheckForKernelApcDelivery(v42);
    KeLeaveCriticalRegion();
  }
}
