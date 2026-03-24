/*
 * XREFs of ExpSvmDereferenceDevice @ 0x1405B8E74
 * Callers:
 *     ExFreeSvmAsid @ 0x1402C87EC (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // r13d
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v7; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v9; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v11; // rax
  __int64 v12; // rsi
  int SessionId; // eax
  __int64 v14; // rcx
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
  __int64 v27; // rcx
  int v29; // [rsp+34h] [rbp-2Ch] BYREF
  int v30; // [rsp+38h] [rbp-28h]
  int v31; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  int v33; // [rsp+48h] [rbp-18h]

  v32 = 0LL;
  v33 = 0;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v31 = 0;
  v7 = KeGetCurrentThread();
  --v7->SpecialApcDisable;
  if ( ++v7->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v7, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v7->AbEntrySummary;
  v9 = -1;
  v30 = 0;
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
  v30 = v11;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&ExpSvmDeviceListLock, (__int64)&v31, a4);
  v15 = v7->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v14);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v12, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v15 = P[6]-- == 1;
  if ( v15 )
  {
    v17 = (void (__fastcall *)(__int64, __int64 *))*((_QWORD *)P + 10);
    v18 = *((_QWORD *)P + 5);
    LODWORD(v32) = 7;
    v17(v18, &v32);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 56))(
           ExpSvmIommuSystemContext,
           *((_QWORD *)P + 15));
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
  v29 = 0;
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v9 = MmGetSessionIdEx((__int64)v21->ApcState.Process);
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
      && *(_DWORD *)(v24 + 40) == v9 )
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
      KeBugCheckEx(0x162u, (ULONG_PTR)v21, (ULONG_PTR)&ExpSvmDeviceListLock, v9, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v24 + 32) |= 2u;
  if ( *(__int64 *)(v24 + 32) < 0 )
    KiAbEntryRemoveFromTree(v24);
  v29 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, (__int64)&ExpSvmDeviceListLock, (__int64)&v29, (_DWORD *)1);
  v15 = v21->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v27);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v5;
}
