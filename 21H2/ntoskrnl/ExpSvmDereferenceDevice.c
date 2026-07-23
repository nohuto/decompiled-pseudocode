/*
 * XREFs of ExpSvmDereferenceDevice @ 0x1405B90A4
 * Callers:
 *     ExFreeSvmAsid @ 0x14024704C (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B74B0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  bool v11; // zf
  void (__fastcall *v13)(__int64, __int64 *); // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  PVOID *v16; // rcx
  struct _KTHREAD *v17; // rbx
  unsigned __int8 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v24; // [rsp+34h] [rbp-2Ch] BYREF
  int v25; // [rsp+38h] [rbp-28h]
  unsigned int v26; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+48h] [rbp-18h]

  v27 = 0LL;
  v28 = 0;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v26 = 0;
  v4 = KeGetCurrentThread();
  --v4->SpecialApcDisable;
  if ( ++v4->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v4, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v4->AbEntrySummary;
  v6 = -1;
  v25 = 0;
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
  v25 = v8;
  v4->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&v4->LockEntries[v8];
  if ( v9 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4FA08[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&ExpSvmDeviceListLock, &v26);
  v11 = v4->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (_RTL_BALANCED_NODE *)v9, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v11 = P[6]-- == 1;
  if ( v11 )
  {
    v13 = (void (__fastcall *)(__int64, __int64 *))*((_QWORD *)P + 10);
    v14 = *((_QWORD *)P + 5);
    LODWORD(v27) = 7;
    v13(v14, &v27);
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 56))(
           ExpSvmIommuSystemContext,
           *((_QWORD *)P + 15));
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v15 = *(_QWORD **)P;
    if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v16 = (PVOID *)*((_QWORD *)P + 1), *v16 != P) )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    (*((void (__fastcall **)(_QWORD))P + 7))(*((_QWORD *)P + 5));
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSvmDeviceListLock);
  v24 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v6 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  v18 = ++v17->AbAllocationRegionCount;
  v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v21, v19);
    if ( v11 )
      goto LABEL_38;
    v20 = (__int64)&v17->LockEntries[v21];
    v19 &= ~(1 << v21);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == v6 )
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
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&ExpSvmDeviceListLock, v6, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v20 + 32) |= 2u;
  if ( *(__int64 *)(v20 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
  v24 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
  *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v20 + 25) &= ~1u;
  *(_QWORD *)(v20 + 32) = 0LL;
  v22 = (signed __int64)(v20 - (unsigned __int64)v17->LockEntries) / 96;
  if ( v18 == 1 )
    v17->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v22);
LABEL_45:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, (__int64)&ExpSvmDeviceListLock, (unsigned int *)&v24);
  v11 = v17->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v2;
}
