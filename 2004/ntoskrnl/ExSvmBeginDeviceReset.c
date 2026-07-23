/*
 * XREFs of ExSvmBeginDeviceReset @ 0x1405B2970
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
  __int64 v12; // rcx
  bool v13; // zf
  __int64 *v15; // rax
  __int64 *v16; // rcx
  unsigned int v17; // ebp
  struct _KTHREAD *v18; // rbx
  unsigned __int8 v19; // r15
  unsigned int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28[13]; // [rsp+34h] [rbp-34h] BYREF
  int v29; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v28[0] = 0;
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
      && byte_140C4F7C8[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpSvmDeviceListLock, v28);
  v13 = v5->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v12);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v10, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v15 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v17 = -1073741810;
  }
  else
  {
    do
    {
      v16 = v15;
      if ( v15[2] == a1 )
        break;
      v15 = (__int64 *)*v15;
    }
    while ( v15 != &ExpSvmDevices );
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(HalIommuDispatch + 136))(v16[14], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  v29 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v7 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v13 )
      goto LABEL_38;
    v21 = (__int64)&v18->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v21 + 40) == v7 )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&ExpSvmDeviceListLock, v7, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v21 + 32) |= 2u;
  if ( *(__int64 *)(v21 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
  v23 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
  v24 = *(_DWORD *)(v21 + 88) & 0xFFFE0000;
  *(_BYTE *)(v21 + 25) &= ~1u;
  v29 = v23;
  *(_DWORD *)(v21 + 88) = v24;
  *(_QWORD *)(v21 + 32) = 0LL;
  v25 = (signed __int64)(v21 - (unsigned __int64)v18->LockEntries) / 96;
  if ( v19 == 1 )
    v18->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
LABEL_45:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)&ExpSvmDeviceListLock, &v29);
  v13 = v18->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v26);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v17;
}
