/*
 * XREFs of ExSvmBeginDeviceReset @ 0x1405B8130
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
  bool v12; // zf
  __int64 *v14; // rax
  __int64 *v15; // rcx
  unsigned int v16; // ebp
  struct _KTHREAD *v17; // rbx
  unsigned __int8 v18; // r15
  unsigned int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned int v26[13]; // [rsp+34h] [rbp-34h] BYREF
  int v27; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v26[0] = 0;
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
      && byte_140C4FA08[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpSvmDeviceListLock, v26);
  v12 = v5->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (_RTL_BALANCED_NODE *)v10, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v14 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v16 = -1073741810;
  }
  else
  {
    do
    {
      v15 = v14;
      if ( v14[2] == a1 )
        break;
      v14 = (__int64 *)*v14;
    }
    while ( v14 != &ExpSvmDevices );
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(HalIommuDispatch + 136))(v15[15], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v27 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v7 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  v18 = ++v17->AbAllocationRegionCount;
  v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v21, v19);
    if ( v12 )
      goto LABEL_38;
    v20 = (__int64)&v17->LockEntries[v21];
    v19 &= ~(1 << v21);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == v7 )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
        break;
    }
  }
  if ( !v20 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&ExpSvmDeviceListLock, v7, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v20 + 32) |= 2u;
  if ( *(__int64 *)(v20 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
  v22 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
  v23 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
  *(_BYTE *)(v20 + 25) &= ~1u;
  v27 = v22;
  *(_DWORD *)(v20 + 88) = v23;
  *(_QWORD *)(v20 + 32) = 0LL;
  v24 = (signed __int64)(v20 - (unsigned __int64)v17->LockEntries) / 96;
  if ( v18 == 1 )
    v17->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
LABEL_45:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, (__int64)&ExpSvmDeviceListLock, (unsigned int *)&v27);
  v12 = v17->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v16;
}
