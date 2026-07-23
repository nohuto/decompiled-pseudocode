/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x1402ECA08
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v6; // edi
  unsigned __int64 v7; // r13
  char *v8; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  unsigned __int64 *v12; // rcx
  __int64 v13; // r12
  bool v14; // zf
  __int64 v15; // rcx
  PVOID v16; // r15
  struct _KTHREAD *v17; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v19; // r12
  __int64 v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r12
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  char *PoolWithQuotaTag; // rax
  _OWORD *v31; // rcx
  int v32; // [rsp+30h] [rbp-68h]
  int v33; // [rsp+34h] [rbp-64h]
  unsigned __int64 v34; // [rsp+38h] [rbp-60h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  _KPROCESS *Process; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  int v38; // [rsp+B0h] [rbp+18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v34 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v35 = v2;
  if ( v2 < v34 )
    return 3221225621LL;
  v3 = v2 - v34;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v33 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v32 = 12 * v4;
  P = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64)&Process[1].EndPadding[4];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].EndPadding[4], 0LL);
  v8 = (char *)Process[1].EndPadding[3];
  if ( v8 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *((_DWORD *)v8 + 1);
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  if ( v9 + 1 <= v10 )
    goto LABEL_11;
  v27 = v10 + 10;
  if ( (unsigned int)v27 < v10 || (v28 = 24 * v27 + 16, v28 >= 0xFFFFFFFF) )
  {
    v6 = -1073741675;
    goto LABEL_22;
  }
  v29 = Process[1].EndPadding[3];
  P = (PVOID)v29;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v28, 0x46447452u);
  v8 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v31 = PoolWithQuotaTag + 16;
    if ( v9 )
    {
      memmove(v31, (const void *)(v29 + 16), 24LL * v9);
    }
    else
    {
      *v31 = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 4) = 0LL;
      v9 = 1;
    }
    *(_DWORD *)v8 = v9;
    *((_DWORD *)v8 + 1) = v27;
    v8[12] = 0;
    Process[1].EndPadding[3] = (unsigned __int64)v8;
LABEL_11:
    v11 = 1;
    if ( v9 > 1 )
    {
      v12 = (unsigned __int64 *)(v8 + 48);
      do
      {
        if ( v34 < *v12 )
          break;
        ++v11;
        v12 += 3;
      }
      while ( v11 < v9 );
    }
    if ( *(_QWORD *)&v8[24 * v11] + (unsigned __int64)*(unsigned int *)&v8[24 * v11 + 8] <= v34 )
    {
      v13 = v11;
      v14 = v11 == v9;
      if ( v11 >= v9 )
      {
LABEL_19:
        if ( !v14 )
          memmove(&v8[16 * v11 + 40 + 8 * v11], &v8[16 * v11 + 16 + 8 * v11], 24LL * (v9 - v11));
        v15 = 3 * v13;
        *(_QWORD *)&v8[8 * v15 + 16] = a1;
        *(_QWORD *)&v8[8 * v15 + 24] = v34;
        *(_DWORD *)&v8[8 * v15 + 32] = v33;
        *(_DWORD *)&v8[8 * v15 + 36] = v32;
        *(_DWORD *)v8 = v9 + 1;
        goto LABEL_22;
      }
      if ( *(_QWORD *)&v8[24 * v11 + 24] >= v35 )
      {
        v14 = v11 == v9;
        goto LABEL_19;
      }
    }
    v6 = -1073741800;
LABEL_22:
    v16 = P;
    goto LABEL_23;
  }
  v6 = -1073741670;
  v16 = 0LL;
LABEL_23:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v38 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  else
    SessionId = -1;
  --v17->SpecialApcDisable;
  v19 = ++v17->AbAllocationRegionCount;
  v20 = 0LL;
  v21 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v22, v21);
    if ( v14 )
      break;
    v21 &= ~(1 << v22);
    v23 = (__int64)&v17->LockEntries[v22];
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == SessionId )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        v20 = v23;
        break;
      }
    }
  }
  if ( v20 )
  {
    *(_BYTE *)(v20 + 32) |= 2u;
    if ( *(__int64 *)(v20 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
    v24 = *(_DWORD *)(v20 + 88);
    v38 = v24 & 0x1FFFF;
    *(_DWORD *)(v20 + 88) = v24 & 0xFFFE0000;
    *(_BYTE *)(v20 + 25) &= ~1u;
    *(_QWORD *)(v20 + 32) = 0LL;
    v25 = (signed __int64)(v20 - (unsigned __int64)v17->LockEntries) / 96;
    if ( v19 == 1 )
      v17->AbEntrySummary |= 1 << v25;
    else
      _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v25);
  }
  else if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
  {
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, v7, SessionId, 0LL);
  }
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, v7, &v38);
  v14 = v17->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v26);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x46447452u);
  return v6;
}
