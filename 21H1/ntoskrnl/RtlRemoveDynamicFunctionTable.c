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
  __int64 v13; // r8
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  unsigned __int8 v27; // [rsp+88h] [rbp+10h]
  int v28; // [rsp+98h] [rbp+20h] BYREF

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = *(_QWORD *)(a1 + 48);
  v26 = *(_QWORD *)(a1 + 40);
  SessionId = -1;
  if ( v26 - v25 >= 0xFFFFFFFF )
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
      while ( *v9 < v25 )
      {
        ++v8;
        v9 += 3;
        if ( v8 >= v7 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)&v6[6 * v8 + 6] == v25 && v6[6 * v8 + 8] == (_DWORD)v26 - (_DWORD)v25 )
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
  v28 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  --v11->SpecialApcDisable;
  v27 = ++v11->AbAllocationRegionCount;
  v12 = 0LL;
  v13 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3Fu;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    if ( v15 )
      break;
    v14 = ~(1 << v16) & (unsigned int)v14;
    v17 = (__int64)&v11->LockEntries[v16];
    if ( (*(_BYTE *)(v17 + 26) & 1) != 0
      && (*(_DWORD *)(v17 + 32) & 1) == 0
      && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v13
      && *(_DWORD *)(v17 + 40) == SessionId )
    {
      *(_BYTE *)(v17 + 26) &= ~1u;
      if ( *(_QWORD *)(v17 + 32) )
      {
        v12 = v17;
        break;
      }
    }
  }
  if ( v12 )
  {
    *(_BYTE *)(v12 + 32) |= 2u;
    if ( *(__int64 *)(v12 + 32) < 0 )
      KiAbEntryRemoveFromTree(v12, v14, v13);
    v18 = *(_DWORD *)(v12 + 88);
    v28 = v18 & 0x1FFFF;
    *(_DWORD *)(v12 + 88) = v18 & 0xFFFE0000;
    *(_BYTE *)(v12 + 25) &= ~1u;
    *(_QWORD *)(v12 + 32) = 0LL;
    v19 = (signed __int64)(v12 - (unsigned __int64)v11->LockEntries) / 96;
    if ( v27 == 1 )
      v11->AbEntrySummary |= 1 << v19;
    else
      _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v19);
  }
  else if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
  {
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, v5, SessionId, 0LL);
  }
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v5, &v28);
  v15 = v11->SpecialApcDisable++ == -1;
  if ( v15 )
  {
    v20 = &v11->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != v20 )
      KiCheckForKernelApcDelivery(v21);
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, (__int64)v20, v22, v23);
  return v2;
}
