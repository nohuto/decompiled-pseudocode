/*
 * XREFs of ExSvmBeginDeviceReset @ 0x1405B2250
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v5; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v7; // r14d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v9; // rax
  __int64 v10; // rsi
  int SessionId; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  bool v16; // zf
  __int64 *v18; // rax
  __int64 *v19; // rcx
  unsigned int v20; // ebp
  struct _KTHREAD *v21; // rbx
  unsigned __int8 v22; // r15
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _DWORD *v32; // r9
  int v34[13]; // [rsp+34h] [rbp-34h] BYREF
  int v35; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v34[0] = 0;
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v5, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v5->AbEntrySummary;
  v7 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v5->AbOrphanedEntrySummary )
    {
      v10 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v5, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v5->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v9, AbEntrySummary);
  v5->AbEntrySummary = AbEntrySummary & ~(1 << v9);
  v10 = (__int64)&v5->LockEntries[v9];
  if ( v10 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4F908[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
LABEL_15:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpSvmDeviceListLock, v34);
  v16 = v5->SpecialApcDisable++ == -1;
  if ( v16 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v10, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v18 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v20 = -1073741810;
  }
  else
  {
    do
    {
      v19 = v18;
      if ( v18[2] == a1 )
        break;
      v18 = (__int64 *)*v18;
    }
    while ( v18 != &ExpSvmDevices );
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(HalIommuDispatch + 136))(v19[14], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v35 = 0;
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v7 = MmGetSessionIdEx((__int64)v21->ApcState.Process);
  --v21->SpecialApcDisable;
  v22 = ++v21->AbAllocationRegionCount;
  v23 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v16 )
      goto LABEL_38;
    v24 = (__int64)&v21->LockEntries[v25];
    v23 &= ~(1 << v25);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v7 )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
        break;
    }
  }
  if ( !v24 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v21, (ULONG_PTR)&ExpSvmDeviceListLock, v7, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v24 + 32) |= 2u;
  if ( *(__int64 *)(v24 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
  v26 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
  v27 = *(_DWORD *)(v24 + 88) & 0xFFFE0000;
  *(_BYTE *)(v24 + 25) &= ~1u;
  v35 = v26;
  *(_DWORD *)(v24 + 88) = v27;
  *(_QWORD *)(v24 + 32) = 0LL;
  v28 = (signed __int64)(v24 - (unsigned __int64)v21->LockEntries) / 96;
  if ( v22 == 1 )
    v21->AbEntrySummary |= 1 << v28;
  else
    _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v28);
LABEL_45:
  --v21->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, (__int64)&ExpSvmDeviceListLock, &v35);
  v16 = v21->SpecialApcDisable++ == -1;
  if ( v16 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v30, v29, v31, v32);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v29, v31, (__int64)v32);
  return v20;
}
