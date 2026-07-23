/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1405B2680
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  bool v14; // zf
  __int64 *v16; // rax
  __int64 *v17; // rcx
  unsigned int v18; // r14d
  struct _KTHREAD *v19; // rbx
  unsigned __int8 v20; // r12
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _DWORD *v30; // r9
  int v32[18]; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+90h] [rbp+18h] BYREF
  int v34; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v32[0] = 0;
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  v34 = 0;
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
  v34 = v7;
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&v3->LockEntries[v7];
  if ( v8 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4F908[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&ExpSvmDeviceListLock, v32);
  v14 = v3->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(v11, v10, v12, v13);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v8, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
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
    v18 = (*(__int64 (__fastcall **)(__int64))(HalIommuDispatch + 144))(v17[14]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v33 = 0;
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v5 = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v20 = ++v19->AbAllocationRegionCount;
  v21 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  v14 = !_BitScanReverse((unsigned int *)&v22, v21);
  if ( v14 )
    goto LABEL_38;
  while ( 1 )
  {
    v23 = (__int64)&v19->LockEntries[v22];
    v21 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v5 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
        break;
    }
    v14 = !_BitScanReverse((unsigned int *)&v22, v21);
    if ( v14 )
      goto LABEL_38;
  }
  if ( !v23 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v19, (ULONG_PTR)&ExpSvmDeviceListLock, v5, 0LL);
  }
  else
  {
    *(_BYTE *)(v23 + 32) |= 2u;
    if ( *(__int64 *)(v23 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
    v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
    v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
    *(_BYTE *)(v23 + 25) &= ~1u;
    v33 = v24;
    *(_DWORD *)(v23 + 88) = v25;
    *(_QWORD *)(v23 + 32) = 0LL;
    v26 = (signed __int64)(v23 - (unsigned __int64)v19->LockEntries) / 96;
    if ( v20 == 1 )
      v19->AbEntrySummary |= 1 << v26;
    else
      _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v26);
  }
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19, (__int64)&ExpSvmDeviceListLock, &v33);
  v14 = v19->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v28, v27, v29, v30);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v27, v29, (__int64)v30);
  return v18;
}
