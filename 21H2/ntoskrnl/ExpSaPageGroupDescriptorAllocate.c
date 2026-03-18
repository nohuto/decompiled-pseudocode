/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14029FDC4 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140349710 (ExpAllocatePoolWithTagFromNode.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     ExpSaBinaryArrayRemove @ 0x1403A0690 (ExpSaBinaryArrayRemove.c)
 *     ExpSaBinaryArrayInsert @ 0x1403A6628 (ExpSaBinaryArrayInsert.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  char v4; // r13
  __int64 v5; // rbp
  POOL_TYPE v6; // r12d
  PVOID result; // rax
  ULONG_PTR v8; // rsi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  int SessionId; // eax
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // r15
  struct _KPRCB *v18; // rax
  USHORT v19; // di
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  ULONG_PTR PoolWithTagFromNode; // rbx
  char v22; // di
  struct _KTHREAD *v23; // rdi
  __int64 p_Process; // rbx
  unsigned int v25; // ecx
  int v26; // r8d
  unsigned int v27; // edx
  __int64 v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-64h]
  unsigned int v33; // [rsp+3Ch] [rbp-5Ch]
  __int64 v34; // [rsp+40h] [rbp-58h]
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-40h] BYREF

  Affinity = 0LL;
  v4 = 0;
  PreviousAffinity = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v5) = 0;
  v6 = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = ExAllocatePoolWithTag(v6, 0x80uLL, 0x61537845u);
  v8 = (ULONG_PTR)result;
  if ( !result )
    return result;
  memset(result, 0, 0x80uLL);
  *(_QWORD *)(v8 + 56) = v8 + 64;
  *(_QWORD *)(v8 + 48) = 512LL;
  *(_QWORD *)(v8 + 16) = a1;
  v9 = 0LL;
  *(_DWORD *)(v8 + 36) = 512;
  CurrentThread = KeGetCurrentThread();
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v12 = -1;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(
                           (__int64)&ExSaPageGroupDescriptorArrayLock,
                           (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v13, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    _enable();
    v9 = (__int64)(&CurrentThread[1].Process + 12 * v13);
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v9 + 8) = SessionId;
    *(_QWORD *)v9 = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v9, (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v15 = ExpSaBinaryArrayInsert(
          ExSaPageGroupDescriptorArray,
          v8,
          KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
  *(_DWORD *)(v8 + 32) = v15;
  if ( v15 == -1 )
    goto LABEL_55;
  v16 = KeNumberProcessors_0;
  v33 = KeNumberProcessors_0;
  if ( !MaximumProcessorCount )
  {
LABEL_24:
    PoolWithTagFromNode = 0LL;
    v22 = 1;
    goto LABEL_25;
  }
  v17 = 0LL;
  while ( 1 )
  {
    v34 = *(_QWORD *)(v17 + ExSaPageArrays);
    v18 = (unsigned int)v5 >= v16 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v5);
    v19 = v18->SchedulerSubNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v6, 0x1000uLL, 1632860229LL, v19 | 0x80000000, 0);
    if ( !PoolWithTagFromNode )
      goto LABEL_54;
LABEL_19:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v34, PoolWithTagFromNode, v19) == -1 )
      goto LABEL_54;
    LODWORD(v5) = v5 + 1;
    v17 += 8LL;
    if ( (unsigned int)v5 >= MaximumProcessorCount )
      goto LABEL_24;
    v16 = v33;
  }
  KeQueryNodeActiveAffinity(v19, &Affinity, 0LL);
  if ( v4 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v4 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  PoolWithTagFromNode = (ULONG_PTR)ExAllocatePoolWithTag(v6, 0x1000uLL, 0x61537845u);
  if ( PoolWithTagFromNode )
    goto LABEL_19;
LABEL_54:
  v22 = 0;
LABEL_25:
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTagFromNode )
    ExFreeHeapPool(PoolWithTagFromNode);
  if ( !v22 )
  {
LABEL_55:
    v27 = *(_DWORD *)(v8 + 32);
    if ( v27 != -1 )
    {
      if ( (_DWORD)v5 )
      {
        do
        {
          v5 = (unsigned int)(v5 - 1);
          v28 = *(_QWORD *)(ExSaPageArrays + 8 * v5);
          v29 = *(_DWORD *)(v8 + 32);
          _BitScanReverse(&v30, v29);
          ExFreeHeapPool(*(_QWORD *)(*(_QWORD *)(v28 + 8LL * (v30 - 2)) + 8LL * (v29 ^ (1 << v30)) + 8));
          ExpSaBinaryArrayRemove(v28, *(_DWORD *)(v8 + 32));
        }
        while ( (_DWORD)v5 );
        v27 = *(_DWORD *)(v8 + 32);
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, v27);
    }
    ExFreeHeapPool(v8);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  v23 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock - qword_140C50630 < 0x8000000000LL )
    v12 = MmGetSessionIdEx((__int64)v23->ApcState.Process);
  _disable();
  p_Process = (__int64)&v23[1].Process;
  v25 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v12 )
  {
    ++v25;
    p_Process += 96LL;
    if ( v25 >= 6 )
      goto LABEL_46;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v26 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v23->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v26 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v23, (__int64)&ExSaPageGroupDescriptorArrayLock, v26);
    return (PVOID)v8;
  }
LABEL_46:
  if ( (*((_DWORD *)&v23->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v23, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v12, 0LL);
  _enable();
  return (PVOID)v8;
}
