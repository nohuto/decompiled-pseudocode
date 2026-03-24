/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1405B8330
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

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v6; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v8; // ebp
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v10; // rax
  __int64 v11; // rsi
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 *v16; // rax
  __int64 *v17; // rcx
  unsigned int v18; // r14d
  struct _KTHREAD *v19; // rbx
  __int64 v20; // r9
  unsigned __int8 v21; // r12
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v30[18]; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = KeGetCurrentThread();
  v30[0] = 0;
  --v6->SpecialApcDisable;
  if ( ++v6->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v6, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  v32 = 0;
  AbEntrySummary = v6->AbEntrySummary;
  v8 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v6->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v6, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
    v6->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v6->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v10, AbEntrySummary);
  v32 = v10;
  v6->AbEntrySummary = AbEntrySummary & ~(1 << v10);
  v11 = (__int64)&v6->LockEntries[v10];
  if ( v11 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0x10u);
LABEL_15:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)&ExpSvmDeviceListLock, (__int64)v30, a4);
  v14 = v6->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v11, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v16 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v18 = -1073741810;
  }
  else
  {
    do
    {
      v17 = v16;
      if ( v16[2] == a1 )
        break;
      v16 = (__int64 *)*v16;
    }
    while ( v16 != &ExpSvmDevices );
    v18 = (*(__int64 (__fastcall **)(__int64))(HalIommuDispatch + 144))(v17[15]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v31 = 0;
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v8 = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v21 = ++v19->AbAllocationRegionCount;
  v22 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  v14 = !_BitScanReverse((unsigned int *)&v23, v22);
  if ( v14 )
    goto LABEL_39;
  v20 = 1LL;
  while ( 1 )
  {
    v24 = (__int64)&v19->LockEntries[v23];
    v22 &= ~(1 << v23);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v8 )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
        break;
    }
    v14 = !_BitScanReverse((unsigned int *)&v23, v22);
    if ( v14 )
      goto LABEL_39;
  }
  if ( !v24 )
  {
LABEL_39:
    if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v19, (ULONG_PTR)&ExpSvmDeviceListLock, v8, 0LL);
  }
  else
  {
    *(_BYTE *)(v24 + 32) |= 2u;
    if ( *(__int64 *)(v24 + 32) < 0 )
    {
      KiAbEntryRemoveFromTree(v24);
      v20 = 1LL;
    }
    v25 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
    v26 = *(_DWORD *)(v24 + 88) & 0xFFFE0000;
    *(_BYTE *)(v24 + 25) &= ~1u;
    v31 = v25;
    *(_DWORD *)(v24 + 88) = v26;
    *(_QWORD *)(v24 + 32) = 0LL;
    v27 = (signed __int64)(v24 - (unsigned __int64)v19->LockEntries) / 96;
    if ( v21 == 1 )
      v19->AbEntrySummary |= 1 << v27;
    else
      _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v27);
  }
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19, (__int64)&ExpSvmDeviceListLock, (__int64)&v31, (_DWORD *)v20);
  v14 = v19->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v28);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v18;
}
