/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1405B8560
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

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v3; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v5; // ebp
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v7; // rax
  __int64 v8; // rsi
  int SessionId; // eax
  bool v10; // zf
  __int64 *v12; // rax
  __int64 *v13; // rcx
  unsigned int v14; // r14d
  struct _KTHREAD *v15; // rbx
  unsigned __int8 v16; // r12
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  unsigned int v24[18]; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+90h] [rbp+18h] BYREF
  int v26; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v24[0] = 0;
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  v26 = 0;
  AbEntrySummary = v3->AbEntrySummary;
  v5 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v3->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v3, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v3->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v26 = v7;
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&v3->LockEntries[v7];
  if ( v8 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4FA08[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v8 + 40) = SessionId;
    *(_QWORD *)(v8 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
LABEL_15:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&ExpSvmDeviceListLock, v24);
  v10 = v3->SpecialApcDisable++ == -1;
  if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (_RTL_BALANCED_NODE *)v8, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v12 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v14 = -1073741810;
  }
  else
  {
    do
    {
      v13 = v12;
      if ( v12[2] == a1 )
        break;
      v12 = (__int64 *)*v12;
    }
    while ( v12 != &ExpSvmDevices );
    v14 = (*(__int64 (__fastcall **)(__int64))(HalIommuDispatch + 144))(v13[15]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v25 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v5 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  --v15->SpecialApcDisable;
  v16 = ++v15->AbAllocationRegionCount;
  v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  v10 = !_BitScanReverse((unsigned int *)&v18, v17);
  if ( v10 )
    goto LABEL_38;
  while ( 1 )
  {
    v19 = (__int64)&v15->LockEntries[v18];
    v17 &= ~(1 << v18);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == v5 )
    {
      *(_BYTE *)(v19 + 26) &= ~1u;
      if ( *(_QWORD *)(v19 + 32) )
        break;
    }
    v10 = !_BitScanReverse((unsigned int *)&v18, v17);
    if ( v10 )
      goto LABEL_38;
  }
  if ( !v19 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&ExpSvmDeviceListLock, v5, 0LL);
  }
  else
  {
    *(_BYTE *)(v19 + 32) |= 2u;
    if ( *(__int64 *)(v19 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
    v20 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
    v21 = *(_DWORD *)(v19 + 88) & 0xFFFE0000;
    *(_BYTE *)(v19 + 25) &= ~1u;
    v25 = v20;
    *(_DWORD *)(v19 + 88) = v21;
    *(_QWORD *)(v19 + 32) = 0LL;
    v22 = (signed __int64)(v19 - (unsigned __int64)v15->LockEntries) / 96;
    if ( v16 == 1 )
      v15->AbEntrySummary |= 1 << v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
  }
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, (__int64)&ExpSvmDeviceListLock, (unsigned int *)&v25);
  v10 = v15->SpecialApcDisable++ == -1;
  if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v14;
}
