/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14029FB3C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14029FDC4 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  int SessionId; // eax
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rbp
  char *p_Process; // rbx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // r9d

  v4 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v5 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v9 = -1;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v5, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    _enable();
    v7 = (__int64)(&CurrentThread[1].Process + 12 * v10);
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v7, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v4
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v4, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v13 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v4;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v4;
    v13 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  v14 = KeGetCurrentThread();
  if ( v5 - qword_140C50630 < 0x8000000000LL )
    v9 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  _disable();
  p_Process = (char *)&v14[1].Process;
  v16 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  v17 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v16
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != v9 )
  {
    ++v17;
    p_Process += 96;
    if ( v17 >= 6 )
      goto LABEL_29;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v16, a3);
      _disable();
    }
    v18 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v14->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v18 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, v5, v18);
    return v13;
  }
LABEL_29:
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v5, v9, 0LL);
  _enable();
  return v13;
}
