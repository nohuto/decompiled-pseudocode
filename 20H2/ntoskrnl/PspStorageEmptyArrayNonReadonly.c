/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x140200C80
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x1405D5530 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // r12d
  ULONG_PTR v4; // rdi
  __int64 v5; // r14
  void *v6; // r14
  char v7; // al
  struct _KTHREAD *v8; // rbx
  unsigned int v9; // edx
  unsigned __int8 v10; // r15
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  char v17; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v19; // edx
  unsigned __int8 v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v27; // [rsp+90h] [rbp+48h]

  v27 = a1;
  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = a1 + 16LL * v3;
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      v5 = *(_QWORD *)(v4 + 8);
      if ( (v5 & 1) != 0 )
      {
        v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
          ExfTryToWakePushLock(v4);
        CurrentThread = KeGetCurrentThread();
        v19 = (unsigned int)MiGetSystemRegionType(v4) == 1 ? MmGetSessionIdEx(CurrentThread->ApcState.Process) : -1;
        --CurrentThread->SpecialApcDisable;
        v20 = ++CurrentThread->AbAllocationRegionCount;
        v21 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v12 = !_BitScanReverse((unsigned int *)&v22, v21);
          if ( v12 )
            break;
          v23 = (__int64)&CurrentThread->LockEntries[v22];
          v21 &= ~(1 << v22);
          if ( (*(_BYTE *)(v23 + 26) & 1) != 0
            && (*(_DWORD *)(v23 + 32) & 1) == 0
            && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
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
                v24 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
                *(_BYTE *)(v23 + 25) &= ~1u;
                *(_DWORD *)(v23 + 88) = v24;
                *(_QWORD *)(v23 + 32) = 0LL;
                v25 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
                if ( v20 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v25;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
                goto LABEL_43;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, v19, 0LL);
LABEL_43:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v12 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v12
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else
      {
        *(_QWORD *)(v4 + 8) = 1LL;
        v6 = (void *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
          ExfTryToWakePushLock(v4);
        v8 = KeGetCurrentThread();
        v9 = (unsigned int)MiGetSystemRegionType(v4) == 1 ? MmGetSessionIdEx(v8->ApcState.Process) : -1;
        --v8->SpecialApcDisable;
        v10 = ++v8->AbAllocationRegionCount;
        v11 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v12 = !_BitScanReverse((unsigned int *)&v13, v11);
          if ( v12 )
            break;
          v14 = (__int64)&v8->LockEntries[v13];
          v11 &= ~(1 << v13);
          if ( (*(_BYTE *)(v14 + 26) & 1) != 0
            && (*(_DWORD *)(v14 + 32) & 1) == 0
            && (*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v14 + 40) == v9 )
          {
            *(_BYTE *)(v14 + 26) &= ~1u;
            if ( *(_QWORD *)(v14 + 32) )
            {
              if ( v14 )
              {
                *(_BYTE *)(v14 + 32) |= 2u;
                if ( *(__int64 *)(v14 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v14);
                v15 = *(_DWORD *)(v14 + 88) & 0xFFFE0000;
                *(_BYTE *)(v14 + 25) &= ~1u;
                *(_DWORD *)(v14 + 88) = v15;
                *(_QWORD *)(v14 + 32) = 0LL;
                v16 = (signed __int64)(v14 - (unsigned __int64)v8->LockEntries) / 96;
                if ( v10 == 1 )
                  v8->AbEntrySummary |= 1 << v16;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v16);
                goto LABEL_18;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v8, v4, v9, 0LL);
LABEL_18:
        --v8->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v8);
        v12 = v8->SpecialApcDisable++ == -1;
        if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
          KiCheckForKernelApcDelivery();
        if ( v6 )
        {
          ObfDereferenceObjectWithTag(v6, 0x746C6644u);
          ++v2;
        }
      }
      if ( ++v3 >= a2 )
        break;
      a1 = v27;
    }
  }
  return v2;
}
