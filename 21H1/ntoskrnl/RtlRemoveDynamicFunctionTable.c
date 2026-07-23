/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x1402FDA9C
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int SessionId; // r15d
  unsigned int v2; // r12d
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rbx
  unsigned __int64 v5; // r14
  unsigned int *v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned __int64 *v9; // rax
  unsigned int v10; // esi
  struct _KTHREAD *v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // edx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  unsigned __int8 v26; // [rsp+88h] [rbp+10h]
  int v27; // [rsp+98h] [rbp+20h] BYREF

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(_QWORD *)(a1 + 40);
  SessionId = -1;
  if ( v25 - v24 >= 0xFFFFFFFF )
    return 3221225621LL;
  v2 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64)&Process[1].EndPadding[4];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].EndPadding[4], 0LL);
  v6 = (unsigned int *)Process[1].EndPadding[3];
  if ( v6 )
  {
    v7 = *v6;
    v8 = 1;
    if ( *v6 > 1 )
    {
      v9 = (unsigned __int64 *)(v6 + 12);
      while ( *v9 < v24 )
      {
        ++v8;
        v9 += 3;
        if ( v8 >= v7 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)&v6[6 * v8 + 6] == v24 && v6[6 * v8 + 8] == (_DWORD)v25 - (_DWORD)v24 )
      {
        v10 = v7 - 1;
        if ( v8 != v7 - 1 )
          memmove(&v6[6 * v8 + 4], &v6[4 * v8 + 10 + 2 * v8], 24LL * (v7 - v8 - 1));
        v2 = 0;
        *v6 = v10;
      }
    }
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  v27 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  --v11->SpecialApcDisable;
  v26 = ++v11->AbAllocationRegionCount;
  v12 = 0LL;
  v13 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    if ( v14 )
      break;
    v13 &= ~(1 << v15);
    v16 = (__int64)&v11->LockEntries[v15];
    if ( (*(_BYTE *)(v16 + 26) & 1) != 0
      && (*(_DWORD *)(v16 + 32) & 1) == 0
      && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v16 + 40) == SessionId )
    {
      *(_BYTE *)(v16 + 26) &= ~1u;
      if ( *(_QWORD *)(v16 + 32) )
      {
        v12 = v16;
        break;
      }
    }
  }
  if ( v12 )
  {
    *(_BYTE *)(v12 + 32) |= 2u;
    if ( *(__int64 *)(v12 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
    v17 = *(_DWORD *)(v12 + 88);
    v27 = v17 & 0x1FFFF;
    *(_DWORD *)(v12 + 88) = v17 & 0xFFFE0000;
    *(_BYTE *)(v12 + 25) &= ~1u;
    *(_QWORD *)(v12 + 32) = 0LL;
    v18 = (signed __int64)(v12 - (unsigned __int64)v11->LockEntries) / 96;
    if ( v26 == 1 )
      v11->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v18);
  }
  else if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
  {
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, v5, SessionId, 0LL);
  }
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v5, &v27);
  v14 = v11->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v19 = &v11->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != v19 )
      KiCheckForKernelApcDelivery(v20);
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, (__int64)v19, v21, v22);
  return v2;
}
