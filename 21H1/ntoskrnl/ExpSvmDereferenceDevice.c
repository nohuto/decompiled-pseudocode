/*
 * XREFs of ExpSvmDereferenceDevice @ 0x1405B31C4
 * Callers:
 *     ExFreeSvmAsid @ 0x14031902C (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B15D0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P)
{
  unsigned int v2; // r13d
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v4; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v6; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v8; // rax
  __int64 v9; // rsi
  int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // r9
  bool v15; // zf
  void (__fastcall *v17)(__int64, __int64 *); // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  PVOID *v20; // rcx
  struct _KTHREAD *v21; // rbx
  unsigned __int8 v22; // r14
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _DWORD *v30; // r9
  int v32; // [rsp+34h] [rbp-2Ch] BYREF
  int v33; // [rsp+38h] [rbp-28h]
  int v34; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v35; // [rsp+40h] [rbp-20h] BYREF
  int v36; // [rsp+48h] [rbp-18h]

  v35 = 0LL;
  v36 = 0;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v34 = 0;
  v4 = KeGetCurrentThread();
  --v4->SpecialApcDisable;
  if ( ++v4->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v4, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v4->AbEntrySummary;
  v6 = -1;
  v33 = 0;
  if ( !AbEntrySummary )
  {
    if ( !v4->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v4, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v4->AbOrphanedEntrySummary;
    v4->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v4->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v33 = v8;
  v4->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&v4->LockEntries[v8];
  if ( v9 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4F908[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v9 + 40) = SessionId;
    *(_QWORD *)(v9 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v4->116 + 1, 0x10u);
LABEL_15:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&ExpSvmDeviceListLock, &v34);
  v15 = v4->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery(v12, v11, v13, v14);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v9, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v15 = P[6]-- == 1;
  if ( v15 )
  {
    v17 = (void (__fastcall *)(__int64, __int64 *))*((_QWORD *)P + 10);
    v18 = *((_QWORD *)P + 5);
    LODWORD(v35) = 7;
    v17(v18, &v35);
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 56))(
           ExpSvmIommuSystemContext,
           *((_QWORD *)P + 14));
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v19 = *(_QWORD **)P;
    if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v20 = (PVOID *)*((_QWORD *)P + 1), *v20 != P) )
      __fastfail(3u);
    *v20 = v19;
    v19[1] = v20;
    (*((void (__fastcall **)(_QWORD))P + 7))(*((_QWORD *)P + 5));
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v32 = 0;
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v6 = MmGetSessionIdEx((__int64)v21->ApcState.Process);
  --v21->SpecialApcDisable;
  v22 = ++v21->AbAllocationRegionCount;
  v23 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v15 )
      goto LABEL_38;
    v24 = (__int64)&v21->LockEntries[v25];
    v23 &= ~(1 << v25);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v6 )
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
      KeBugCheckEx(0x162u, (ULONG_PTR)v21, (ULONG_PTR)&ExpSvmDeviceListLock, v6, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v24 + 32) |= 2u;
  if ( *(__int64 *)(v24 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
  v32 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
  *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v24 + 25) &= ~1u;
  *(_QWORD *)(v24 + 32) = 0LL;
  v26 = (signed __int64)(v24 - (unsigned __int64)v21->LockEntries) / 96;
  if ( v22 == 1 )
    v21->AbEntrySummary |= 1 << v26;
  else
    _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v26);
LABEL_45:
  --v21->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, (__int64)&ExpSvmDeviceListLock, &v32);
  v15 = v21->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v28, v27, v29, v30);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v27, v29, (__int64)v30);
  return v2;
}
