/*
 * XREFs of MiManageSubsectionView @ 0x1402986E0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140756D38 (MiConstructLoaderEntry.c)
 *     MiReleaseSessionDriverCharges @ 0x140775958 (MiReleaseSessionDriverCharges.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  unsigned __int64 v8; // rsi
  int v9; // edi
  int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  struct _KTHREAD *v13; // rbp
  struct _KTHREAD *v14; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rax
  _QWORD *v29; // r14
  int v30; // edi
  __int64 v31; // rax
  _QWORD *v32; // rbp
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = v5 + 104;
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  v9 = a3 - 1;
  if ( !v9 )
  {
    v28 = a1[10];
    v29 = a1 + 10;
    if ( *(_QWORD **)(v28 + 8) == v29 )
    {
      *a2 = v28;
      a2[1] = v29;
      *(_QWORD *)(v28 + 8) = a2;
      *v29 = a2;
      goto LABEL_6;
    }
FatalListEntryError_9:
    __fastfail(3u);
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_3;
  v30 = v10 - 1;
  if ( !v30 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
      goto LABEL_6;
    v31 = *(_QWORD *)(v5 + 8);
    v32 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD **)(v31 + 8) == v32 )
    {
      *a2 = v31;
      a2[1] = v32;
      *(_QWORD *)(v31 + 8) = a2;
      *v32 = a2;
      goto LABEL_6;
    }
    goto FatalListEntryError_9;
  }
  if ( v30 != 1 || (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
    goto LABEL_6;
LABEL_3:
  v11 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 )
    goto FatalListEntryError_9;
  v12 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v12 != a2 )
    goto FatalListEntryError_9;
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
LABEL_6:
  v13 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  v33 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  LODWORD(v17) = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  v18 = v8 & 0x7FFFFFFFFFFFFFFCLL;
  v19 = !_BitScanReverse((unsigned int *)&v20, v17);
  v34 = v20;
  if ( v19 )
    goto LABEL_36;
  while ( 1 )
  {
    v21 = (__int64)&v14->LockEntries[v20];
    v17 = ~(1 << v20) & (unsigned int)v17;
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v18
      && *(_DWORD *)(v21 + 40) == (_DWORD)SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v20, v17);
    v34 = v20;
    if ( v19 )
      goto LABEL_36;
  }
  if ( !v21 )
  {
LABEL_36:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v8, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v21 + 32) |= 2u;
    if ( *(__int64 *)(v21 + 32) < 0 )
      KiAbEntryRemoveFromTree(v21, v17, v18);
    v33 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
    *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v21 + 25) &= ~1u;
    *(_QWORD *)(v21 + 32) = 0LL;
    v22 = (signed __int64)(v21 - (unsigned __int64)v14->LockEntries) / 96;
    if ( v16 == 1 )
      v14->AbEntrySummary |= 1 << v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v22);
  }
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, v8, &v33);
  v19 = v14->SpecialApcDisable++ == -1;
  if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery(v24, v23, v25, v26);
  return KiLeaveGuardedRegionUnsafe((__int64)v13);
}
