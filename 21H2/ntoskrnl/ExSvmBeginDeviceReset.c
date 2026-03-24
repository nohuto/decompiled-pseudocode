/*
 * XREFs of ExSvmBeginDeviceReset @ 0x1405B7F00
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v7; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v9; // r14d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v11; // rax
  __int64 v12; // rsi
  int SessionId; // eax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 *v17; // rax
  __int64 *v18; // rcx
  unsigned int v19; // ebp
  struct _KTHREAD *v20; // rbx
  unsigned __int8 v21; // r15
  unsigned int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v30[13]; // [rsp+34h] [rbp-34h] BYREF
  int v31; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeGetCurrentThread();
  v30[0] = 0;
  --v7->SpecialApcDisable;
  if ( ++v7->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v7, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v7->AbEntrySummary;
  v9 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v7->AbOrphanedEntrySummary )
    {
      v12 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v7, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v7->AbOrphanedEntrySummary;
    v7->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v7->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v11, AbEntrySummary);
  v7->AbEntrySummary = AbEntrySummary & ~(1 << v11);
  v12 = (__int64)&v7->LockEntries[v11];
  if ( v12 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v12 + 40) = SessionId;
    *(_QWORD *)(v12 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v7->116 + 1, 0x10u);
LABEL_15:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&ExpSvmDeviceListLock, (__int64)v30, a4);
  v15 = v7->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v14);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v12, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v17 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v19 = -1073741810;
  }
  else
  {
    do
    {
      v18 = v17;
      if ( v17[2] == a1 )
        break;
      v17 = (__int64 *)*v17;
    }
    while ( v17 != &ExpSvmDevices );
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(HalIommuDispatch + 136))(v18[15], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v31 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v9 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  v21 = ++v20->AbAllocationRegionCount;
  v22 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v24, v22);
    if ( v15 )
      goto LABEL_38;
    v23 = (__int64)&v20->LockEntries[v24];
    v22 &= ~(1 << v24);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v9 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, (ULONG_PTR)&ExpSvmDeviceListLock, v9, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v23 + 32) |= 2u;
  if ( *(__int64 *)(v23 + 32) < 0 )
    KiAbEntryRemoveFromTree(v23);
  v25 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
  v26 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
  *(_BYTE *)(v23 + 25) &= ~1u;
  v31 = v25;
  *(_DWORD *)(v23 + 88) = v26;
  *(_QWORD *)(v23 + 32) = 0LL;
  v27 = (signed __int64)(v23 - (unsigned __int64)v20->LockEntries) / 96;
  if ( v21 == 1 )
    v20->AbEntrySummary |= 1 << v27;
  else
    _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v27);
LABEL_45:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, (__int64)&ExpSvmDeviceListLock, (__int64)&v31, (_DWORD *)1);
  v15 = v20->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v28);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v19;
}
