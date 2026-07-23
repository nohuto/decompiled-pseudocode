/*
 * XREFs of MiManageSubsectionView @ 0x14031BE50
 * Callers:
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiSessionInsertImage @ 0x1403A2AC4 (MiSessionInsertImage.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075DF90 (MiConstructLoaderEntry.c)
 *     MiReleaseSessionDriverCharges @ 0x140779AC8 (MiReleaseSessionDriverCharges.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  ULONG_PTR v8; // rsi
  int v9; // edi
  int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  struct _KTHREAD *v13; // rbp
  struct _KTHREAD *v14; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v16; // r15
  unsigned int v17; // edx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v23; // rax
  _QWORD *v24; // r14
  int v25; // edi
  __int64 v26; // rax
  _QWORD *v27; // rbp

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = v5 + 104;
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  v9 = a3 - 1;
  if ( !v9 )
  {
    v23 = a1[10];
    v24 = a1 + 10;
    if ( *(_QWORD **)(v23 + 8) == v24 )
    {
      *a2 = v23;
      a2[1] = v24;
      *(_QWORD *)(v23 + 8) = a2;
      *v24 = a2;
      goto LABEL_6;
    }
FatalListEntryError_39:
    __fastfail(3u);
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_3;
  v25 = v10 - 1;
  if ( !v25 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
      goto LABEL_6;
    v26 = *(_QWORD *)(v5 + 8);
    v27 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD **)(v26 + 8) == v27 )
    {
      *a2 = v26;
      a2[1] = v27;
      *(_QWORD *)(v26 + 8) = a2;
      *v27 = a2;
      goto LABEL_6;
    }
    goto FatalListEntryError_39;
  }
  if ( v25 != 1 || (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
    goto LABEL_6;
LABEL_3:
  v11 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 )
    goto FatalListEntryError_39;
  v12 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v12 != a2 )
    goto FatalListEntryError_39;
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
LABEL_6:
  v13 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v14->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  v18 = !_BitScanReverse((unsigned int *)&v19, v17);
  if ( v18 )
    goto LABEL_36;
  while ( 1 )
  {
    v20 = (__int64)&v14->LockEntries[v19];
    v17 &= ~(1 << v19);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == (_DWORD)SessionId )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
        break;
    }
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    if ( v18 )
      goto LABEL_36;
  }
  if ( !v20 )
  {
LABEL_36:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v8, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v20 + 32) |= 2u;
    if ( *(__int64 *)(v20 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
    *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v20 + 25) &= ~1u;
    *(_QWORD *)(v20 + 32) = 0LL;
    v21 = (signed __int64)(v20 - (unsigned __int64)v14->LockEntries) / 96;
    if ( v16 == 1 )
      v14->AbEntrySummary |= 1 << v21;
    else
      _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v21);
  }
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14);
  v18 = v14->SpecialApcDisable++ == -1;
  if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(v13);
}
